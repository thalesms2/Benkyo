```bash
yarn create next-app nameOfApp
```

package.json
> pastas na raiz assets | components | config | lib | utils no import usa no from `'@config/archive'`
```json
{
    "next-unused": {
        "alias": {
            "@lib/*": [
                "lib/*"
            ],
            "@assets/*": [
                "assets/*"
            ],
            "@config/*": [
                "config/*"
            ],
            "@components/*": [
                "components/*"
            ],
            "@utils/*": [
                "utils/*"
            ]
        }
    }
}
```