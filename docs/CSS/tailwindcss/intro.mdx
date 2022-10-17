- [Componentes feitos pela comunidade](https://tailwindcomponents.com/)
- [tailwindUI](https://tailwindui.com/)

## On Next.js
Com projeto criado
```bash
yarn add -D tailwindcss postcss autoprefixer
npx tailwindcss init -p
```
Configuração no arquivo `tailwind.config.js`
```javascript
content: [
    "./pages/**/*.{js,ts,jsx,tsx}",
    "./components/**/*.{js,ts,jsx,tsx}",
],
```
`_document.tsx`
```typescript
import Document from 'next/document'
import { ServerStyleSheet } from 'styled-components'

export default class MyDocument extends Document {
  static async getInitialProps(ctx) {
    const sheet = new ServerStyleSheet()
    const originalRenderPage = ctx.renderPage

    try {
      ctx.renderPage = () =>
        originalRenderPage({
          enhanceApp: (App) => (props) =>
            sheet.collectStyles(<App {...props} />),
        })

      const initialProps = await Document.getInitialProps(ctx)
      return {
        ...initialProps,
        styles: (
          <>
            {initialProps.styles}
            {sheet.getStyleElement()}
          </>
        ),
      }
    } finally {
      sheet.seal()
    }
  }
}
```
`_app.tsx`
```typescript
import './globals.css';

import { createGlobalStyle, ThemeProvider } from 'styled-components'

const GlobalStyle = createGlobalStyle`
  body {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
  }
`

const theme = {
  colors: {
    primary: '#0070f3',
  },
}

export default function App({ Component, pageProps }) {
  return (
    <>
      <GlobalStyle />
      <ThemeProvider theme={theme}>
        <Component {...pageProps} />
      </ThemeProvider>
    </>
  )
}
```
Adicionar ao `styles/globals.css`
```css
@import 'tailwindcss/tailwind.css';

@import "tailwindcss/base";
@import "tailwindcss/components";
@import "tailwindcss/utilities";
```