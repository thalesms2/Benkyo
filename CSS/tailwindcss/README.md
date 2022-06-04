- [Componentes feitos pela comunidade](https://tailwindcomponents.com/)
- [tailwindUI](https://tailwindui.com/)

## On Next.js
Com projeto criado
```bash
npm install -D tailwindcss postcss autoprefixer
npx tailwindcss init -p
```
Configuração no arquivo `tailwind.config.js`
```javascript
content: [
    "./pages/**/*.{js,ts,jsx,tsx}",
    "./components/**/*.{js,ts,jsx,tsx}",
],
```
Adicionar ao `styles/globals.css`
```css
@tailwind base;
@tailwind components;
@tailwind utilities;
```