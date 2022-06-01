import React from 'react'
import './ListaProdutos.css'
import produtos from '../../data/produtos'

export default (props) => {
    const produtosTable = produtos.map((produto, i) => {
        return (
            <tr className={i % 2 === 0 ? 'Par' : 'Impar'} key={produto.id}>
                <th>{produto.id}</th>
                <th>{produto.nome}</th>
                <th>R$ {produto.preco.toFixed(2).replace('.', ',')}</th>
            </tr>
        )
    })
    return (
        <div className="TabelaProdutos">
            <table>
                <thead>
                    <tr>
                        <th>Id</th>
                        <th>Nome</th>
                        <th>Preço</th>
                    </tr>
                </thead>
                <tbody>
                    { produtosTable }
                </tbody>
            </table>
        </div>
    )
}