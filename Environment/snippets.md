## Javascript
### Next Component
```json
"NextBasicComp" : {
    "scope": "javascript, typescript, javascriptreact, typescriptreact",
    "prefix": "rfcnext",
    "body": [
        "import React from 'react'",
        "import { NextPage } from 'next'",
        "",
        "const $1: NextPage = () => {",
        "    ",
        "    return (",
        "        <div>",
        "            $2",
        "        </div>",
        "    )",
        "}",
        "",
        "export default $1"
    ],
    "description": "React function component on Next"
}
```

## CSS
### Reset Global
```json
"Reset Default": {
    "prefix": "!*",
    "body": [
        "*,",
        "::before,",
        "::after {",
        "    box-sizing: border-box;",
        "    padding: 0;",
        "    margin: 0;",
        "    vertical-align: baseline;",
        "    list-style: none;",
        "    border: 0;",
        "}"
    ],
    "description": "Log output to console"
}
```