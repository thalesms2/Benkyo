import './App.css'
import React from 'react'

import Primeiro from './components/basics/Primeiro'
import ComParametro from './components/basics/ComParametro'
import Fragmento from './components/basics/Fragmento'
import Aleatorio from './components/basics/Aleatorio'
import Familia from './components/basics/Familia'
import FamiliaMembro from './components/basics/FamiliaMembro'
import ListaAlunos from './components/repeticao/ListaAlunos'
import ListaProdutos from './components/repeticao/ListaProdutos'
import ParOuImpar from './components/condicional/ParOuImpar'
import UsuarioInfo from './components/condicional/UsuarioInfo'
import DiretaPai from './components/comunicacao/DiretaPai'
import IndiretaPai from './components/comunicacao/IndiretaPai'
import Input from './components/formulario/Input'
import Contador from './components/contador/Contador'
import Mega from './components/mega/Mega'

import Card from './components/layout/Card'

export default _ => 
    <div className="App">
        <h1>Fundamentos React</h1>
        <div className="Cards">
            <Card titulo="#13 - Mega" color="#89006E">
                <Mega qtde={5} />
            </Card>
            <Card titulo="#12 - Contador" color="#424242">
                <Contador numeroInicial={10}/>
            </Card>
            <Card titulo="#11 - Componente Controlado" color="#E45F56">
                <Input />
            </Card>
            <Card titulo="#10 - Comunicação Indireta" color="#8BAD39">
                <IndiretaPai />
            </Card>
            <Card titulo="#09 - Comunicação Direta" color="#59323C">
                <DiretaPai />
            </Card>
            <Card titulo="#08 - Desafio Repetição" color="#982395">
                <ParOuImpar numero={21}/>
                <UsuarioInfo usuario={{ nome: 'Fernando'}}/>
                <UsuarioInfo usuario={{ email: 'fer@nando.com'}}/>
            </Card>
            <Card titulo="#07 - Desafio Repetição" color="#3A9AD9">
                <ListaProdutos />
            </Card>
            <Card titulo="#06 - Repetição" color="#FF4C65">
                <ListaAlunos />
            </Card>
            <Card titulo="#05 - Componente com Filhos" color="#00C8F8">
                <Familia sobrenome="Silva">
                    <FamiliaMembro nome="Pedro" />
                    <FamiliaMembro nome="Ana" />
                    <FamiliaMembro nome="Gustavo" />
                </Familia>
            </Card>

            <Card titulo="#04 - Aleatório" color="#FA6900">
                <Aleatorio min={5} max={10} />
            </Card>

            <Card titulo="#03 - Fragmento"color="#E94C6F">
                <Fragmento />
            </Card>

            <Card titulo="#02 - Com Parâmetro"color="#E8B71A">
                <ComParametro 
                    titulo="Situação do aluno" 
                    aluno="Pedro"
                    nota={9.3} 
                /> 
            </Card>

            <Card titulo="#01 - Primeiro"color="#588C73">
                <Primeiro></Primeiro>
            </Card>
        </div>
    </div>
