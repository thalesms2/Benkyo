import React, { cloneElement } from 'react'
import FamiliaMembro from './FamiliaMembro'

export default props => {
    return (
        <div>
            {/* 
            <FamiliaMembro nome="Pedro" sobrenome={props.sobrenome} />
            <FamiliaMembro nome="Ana" {...props} />
            <FamiliaMembro nome="Gustavo" sobrenome="Silva" /> 
            */}
            {/* {React.cloneElement(props.children)} */}
            {
                // React.Children.map(props.children, (child) => {
                //     return cloneElement(child, props)
                // }) 

                // props.children.map((child) => {
                //     return cloneElement(child, props)
                // }) 
                props.children.map((child, i) => {
                    return cloneElement(child, {...props, key: i})
                }) 
            }
        </div>
    )
}