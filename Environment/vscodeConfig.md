# Configurações do VSCode

Arquivo > Preferencias > Configurações > Canto direito botão `Abrir Configurações(JSON)`

> Todas as configurações abaixo ficam no mesmo objeto dentro do settings.json mas eu separei caso você não utilize as mesmas extensões ou trabalhe com outras linguagens

## Configuração do editor
```json
{
    "workbench.colorTheme": "Monokai Dimmed",
    "workbench.iconTheme": "material-icon-theme",
    "workbench.startupEditor": "newUntitledFile",
    "editor.fontFamily": "Fira Code",
    "editor.fontLigatures": true,
    "editor.fontSize": 16, 
    "editor.lineHeight": 24,
    // Aplica um sinal visual na esquerda da linha selecionada
    "editor.renderLineHighlight": "gutter",
    "explorer.confirmDelete": false,
    "python.linting.flake8Enabled": true,
    "javascript.suggest.autoImports" : true,
    "javascript.updateImportsOnFileMove.enabled" : "always",
    "explorer.confirmDragAndDrop": false,
    "security.workspace.trust.untrustedFiles": "open",
    "window.zoomLevel": -1,
    "editor.cursorStyle": "block",
    "editor.cursorBlinking": "smooth",
    "material-icon-theme.folders.theme": "specific"
}
```

## Configuração de extensões
```json
{   
    "todo-tree.general.tags": [
        "BUG",
        "HACK",
        "FIXME",
        "TODO",
        "XXX"
    ],
    "todo-tree.highlights.defaultHighlight": {
        "foreground": "pink",
        "type": "tag"
    },
    "todo-tree.highlights.customHighlight": {
        "BUG": {
            "icon": "bug"
        },
        "FIXME": {
            "icon": "alert"
        },
        "TODO": {
            "icon": "flame",
        }
    },
    "code-runner.runInTerminal": true,
    "liveServer.settings.donotShowInfoMsg": true,
    "git.autofetch": true,
    "code-runner.clearPreviousOutput": true,
    "gitlens.advanced.messages": {
        "suppressGitMissingWarning": true
    },
    "bracketPairColorizer.depreciation-notice": false,
    "liveSassCompile.settings.formats": [
        {
            "format": "compressed",
            "extensionName": ".css",
            "savePath": null
        }
    ],
    "tabnine.experimentalAutoImports": true,
}
```

## Configurações relacionadas a linguagem utilizada
```json
{
    "emmet.syntaxProfiles":{
        "javascript": "jsx",
    },
    "emmet.includeLanguages": {
        "javascript": "javascriptreact",
    },
    "[html]": {
        "editor.defaultFormatter": "esbenp.prettier-vscode"
    },
    "[dart]": {
        "editor.formatOnSave": true,
        "editor.formatOnType": true,
        "editor.rulers": [
            80
        ],
        "editor.selectionHighlight": false,
        "editor.suggest.snippetsPreventQuickSuggestions": false,
        "editor.suggestSelection": "first",
        "editor.tabCompletion": "onlySnippets",
        "editor.wordBasedSuggestions": false,
    },
    "[css]": {
        "editor.defaultFormatter": "esbenp.prettier-vscode"
    },
    "[javascriptreact]": {
        "editor.defaultFormatter": "esbenp.prettier-vscode"
    },
    "[typescriptreact]": {
        "editor.defaultFormatter": "esbenp.prettier-vscode"
    },
}
```