# OpenCV 4.11.0 MinGW Build

Ce guide vous aidera à configurer OpenCV 4.11.0 avec MinGW sur Windows. 

## Téléchargement et installation des fichiers de build

1. Téléchargez les fichiers de build à partir du lien suivant :  
   [Lien de téléchargement](https://github.com/thanh-son-lemelle/opencv-4.11.0-minGW-build/releases/download/v4.11.0/opencv.zip)
   
2. Décompressez l'archive téléchargée dans le répertoire racine de votre système (exemple : `C:\`).

   Vous devriez obtenir la structure suivante :  
   `C:\opencv\build\x64\mingw64\bin`

---

## Installation de MSYS2

1. Si MSYS2 n'est pas déjà installé sur votre système, téléchargez l’installateur depuis ce lien :  
   [Télécharger MSYS2](https://github.com/msys2/msys2-installer/releases/download/2024-12-08/msys2-x86_64-20241208.exe)
   
2. Suivez le guide d'installation disponible ici :  
   [Guide d'installation MSYS2](https://www.msys2.org/)

3. Ouvrez le terminal MSYS2 et exécutez les commandes suivantes pour installer GCC et GDB :

   ```bash
   pacman -S mingw-w64-x86_64-gdb
   pacman -S mingw-w64-x86_64-gcc
   ```

   
Voici le contenu prêt à être copié et collé dans votre fichier README.md :

markdown
Copier
Modifier
# OpenCV 4.11.0 MinGW Build

Ce guide vous aidera à configurer OpenCV 4.11.0 avec MinGW sur Windows. 

## Téléchargement et installation des fichiers de build

1. Téléchargez les fichiers de build à partir du lien suivant :  
   [Lien de téléchargement](https://github.com/thanh-son-lemelle/opencv-4.11.0-minGW-build/releases/download/v4.11.0/opencv.zip)
   
2. Décompressez l'archive téléchargée dans le répertoire racine de votre système (exemple : `C:\`).

   Vous devriez obtenir la structure suivante :  
   `C:\opencv\build\x64\mingw64\bin`

---

## Installation de MSYS2

1. Si MSYS2 n'est pas déjà installé sur votre système, téléchargez l’installateur depuis ce lien :  
   [Télécharger MSYS2](https://github.com/msys2/msys2-installer/releases/download/2024-12-08/msys2-x86_64-20241208.exe)
   
2. Suivez le guide d'installation disponible ici :  
   [Guide d'installation MSYS2](https://www.msys2.org/)

3. Ouvrez le terminal MSYS2 et exécutez les commandes suivantes pour installer GCC et GDB :

   ```bash
   pacman -S mingw-w64-x86_64-gdb
   pacman -S mingw-w64-x86_64-gcc
   
## Configuration des variables d'environnement

Ajoutez les chemins suivants à la variable d'environnement `PATH` de votre système :

- `C:\msys64\mingw64\bin`
- `C:\opencv\build\x64\mingw64\bin`

Assurez-vous que les fichiers suivants sont présents dans `C:\msys64\mingw64\bin` :

- `gcc.exe`
- `gdb.exe`

---

## Clonage du dépôt et test

Clonez la branche principale de ce dépôt avec la commande suivante :

```bash
git clone https://github.com/thanh-son-lemelle/opencv-4.11.0-minGW-build.git
```

Essayez de lancer le projet pour vérifier :

- que OpenCV est accessible ;
- que votre environnement est correctement configuré.

---

## Remerciements

Un grand merci à **Nicolas Alfonsi** pour son tutoriel détaillé, disponible ici :  
[Configurer VSCode avec OpenCV, C++, et MinGW sous Windows](https://www.nicolasalfonsi.com/technology/tuto-configurer-vscode-en-cpp-mingw-w64-windows.html)
