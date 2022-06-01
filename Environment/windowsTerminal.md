# Windows Terminal customizações

- Instalar Dracula Theme

## Starship

[Site](https://starship.rs/)
[Repo](https://github.com/starship/starship)
[Config](https://starship.rs/config)

Instalar o binário do starship

Com Shell
```bash
curl -sS https://starship.rs/install.sh | sh
```

Com Scoop package manager
```bash
scoop install starship
```

Crie um perfil no PowerShell
```bash
if (!(Test-Path -Path $PROFILE)) {
  New-Item -ItemType File -Path $PROFILE -Force
}
```

Edite o perfil com `notepad $PROFILE` e adicione em seu final
```bash
Invoke-Expression (&starship init powershell)
```

## Config

`C:\users\usuario\.config\starship.toml`
