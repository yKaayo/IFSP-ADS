# Learn Git Branch - Comandos
Comandos usados nos exercícios do Learn Git Branch.

## Sequência introdutória

### 1. Introdução aos commits no Git
```bash
git commit
```

```bash
git commit
```

### 2. Branches no Git

```bash
git checkout -b bugFix
```

### 3. Merge no Git

```bash
git checkout -b bugFix
```

```bash
git commit
```

```bash
git checkout main
```

```bash
git commit
```

```bash
git merge bugFix
```

### 4. Introdução ao rebase

```bash
git checkout -b bugFix
```

```bash
git commit
```

```bash
git checkout main
```

```bash
git commit
```

```bash
git checkout bugFix
```

```bash
git rebase main
```

## Acelerando

### 1. Solte a sua cabeça

```bash
git checkout C4
```

### 2. Referências relativas (^)

```bash
git checkout bugFix^
```

### 3. Referências relativas #2 (~)

```bash
git checkout HEAD^
```

```bash
git branch -f main C6
```

```bash
git branch -f bugFix HEAD^
```

### 3. Revertendo mudanças no Git

```bash
git reset HEAD^
```

```bash
git checkout pushed
```

```bash
git revert HEAD
```

## Movendo trabalho por aí

### 1. Introdução ao cherry-pick

```bash
git cherry-pick C3 C4 C7
```

### 2. Introdução ao rebase interativo

```bash
git rebase -i HEAD~4
```

## Sortidos

### 1. Pegando um único commit

```bash
git rebase -i HEAD~3
```

```bash
git rebase bugFix main
```

### 2. Malabarismo com commits

```bash
git rebase -i HEAD~2
```

```bash
git commit --amend
```

```bash
git rebase -i HEAD~2
```

```bash
git rebase caption main
```

### 3. Malabarismo com commits #2

```bash
git checkout main
```

```bash
git cherry-pick C2
```

```bash
git commit --amend
```

```bash
git cherry-pick C3
```

### 4. Tags no Git

```bash
git tag v1 side^
```

```bash
git tag v0 main~2
```

```bash
git checkout v1
```

### 5. Git Describe

```bash
git checkout v1
```

## Temas avançados

### 1. Fazendo mais de 9000 rebases

```bash
git rebase main bugFix
```

```bash
git rebase bugFix side
```

```bash
git rebase side another
```

```bash
git rebase another main
```

### 2. Múltiplos pais

```bash
git branch bugWork main^^2^
```

### 3. Espaguete de branches

```bash
git checkout one
```

```bash
git cherry-pick C4 C3 C2
```

```bash
git checkout two
```

```bash
git cherry-pick C5 C4 C3 C2
```

```bash
git branch -f three C2
```

## Push & Pull -- repositórios remotos no Git!

### 1. Introdução à clonagem

```bash
git clone
```

### 2. Branches remotas

```bash
git commit
```

```bash
git checkout o/main
```

```bash
git commit
```

### 3. Git Fetch

```bash
git fetch
```

### 4. Git Pull

```bash
git pull
```

### 5. Simulando trabalho em equipe

```bash
git clone
```

```bash
git fakeTeamwork 2
```

```bash
git commit
```

```bash
git pull
```

### 6. Git Push

```bash
git commit
```

```bash
git commit
```

```bash
git push
```

### 7. Histórico divergente

```bash
git clone
```

```bash
git fakeTeamwork
```

```bash
git commit
```

```bash
git pull --rebase
```

```bash
git push
```

### 8. Main bloqueado

```bash
git branch -f main o/main
```

```bash
git checkout -b feature C2
```

```bash
git push origin feature
```

## Até a origin e além -- repositórios remotos avançados!

### 1. Push Main!

```bash
git fetch
```

```bash
git rebase o/main side1
```

```bash
git rebase side1 side2
```

```bash
git rebase side2 side3
```

```bash
git rebase side3 main
```

```bash
git push
```

### 2. Merge com remotos

```bash
git checkout main
```

```bash
git pull
```

```bash
git merge side1
```

```bash
git merge side2
```

```bash
git merge side3
```

```bash
git push
```

### 3. Seguindo remotos

```bash
git checkout -b side o/main
```

```bash
git commit
```

```bash
git pull --rebase
```

```bash
git push
```

### 4. Parâmetros do git push

```bash
git push origin main
```

```bash
git push origin foo
```

### 5. Parâmetros do git push -- expandido

```bash
git push origin main^:foo
```

```bash
git push origin foo:main
```

### 6. Parâmetros do fetch

```bash
git fetch origin c3:foo
```

```bash
git fetch origin c6:main
```

```bash
git checkout foo
```

```bash
git merge main
```

### 7. Origem vazia

```bash
git push origin :foo
```

```bash
git fetch origin :bar
```

### 8. Parâmetros do pull

```bash
git pull origin c3:foo
```

```bash
git pull origin c2:side
```
