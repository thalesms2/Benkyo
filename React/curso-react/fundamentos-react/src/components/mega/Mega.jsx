import React, { useState } from 'react'
import './Mega.css'

export default props => {
    
    const gerarNumerosNaoContido = (min, max, array) => {
        const aleatorio = parseInt(Math.random() * (max + 1 - min)) + min
        return array.includes(aleatorio) ? 
        gerarNumerosNaoContido(min, max, array) : 
        aleatorio
    }
    
    const gerarNumeros = (qtd) => {
        const numeros = Array(qtd)
        .fill(0)
        .reduce((nums) => {
            const novoNumero = gerarNumerosNaoContido(1, 60, nums)
            return [...nums, novoNumero]
        }, [])
        .sort((n1, n2) => n1 - n2)
        return numeros
    }
    
    const [qtde, setQtde] = useState(props.qtde || 6)
    const numerosIniciais = gerarNumeros(qtde)
    const [numeros, setNumeros] = useState(numerosIniciais)
    
    return (
        <div className='Mega'>
            <h2>Mega</h2>
            <h3>{numeros.join(' ')}</h3>
            <div>
                <label>Qtde de Números</label>
                <input 
                    min="6"
                    max="17"
                    type="number" 
                    value={qtde} 
                    onChange={e => {
                    setQtde(+e.target.value)
                    setNumeros(gerarNumeros(+e.target.value))
                }}/>
            </div>
            <button onClick={_ => setNumeros(gerarNumeros(qtde))}>Gerar Números</button>
        </div>
    )
}