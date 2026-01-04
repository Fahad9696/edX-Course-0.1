# Git Commands Guide

## Clone & Status
**Clone** - Cloning a repository to your local machine
```bash
git clone <link>
```

**Status** - Display the status of your code
```bash
git status
```

## Add & Commit
**Add** - Add new or changed files to the git staging area
```bash
git add <filename>
```

**Commit** - Record changes with a message
```bash
git commit -m "message"
```

## Push Command
**Push** - Upload local repository content to remote repository
```bash
git push origin main
```

## New Directory
```bash
mkdir <name>
```

## Init Command
**Init** - Create a new git repository
```bash
git init
git remote add origin <link>
git remote -v          # Verify remote
git branch             # Check current branch
git branch -M <name>   # Rename branch
git push origin main
git push -u origin main # Use -u to push and track
```

