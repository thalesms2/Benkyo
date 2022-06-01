import './Display.css'

import React from 'react'

export default props => {
    return (
        <div className='Display'>
            {props.value}
        </div>
    )
}