# Configuration d'environnements pour le développement C++

Visual Studio sur Windows est le seul environnement qui sera supporté en INF1015 et INF1005c. Ceci dit, ce document liste les options disponibles pour débuter avec le C++ sur les différentes platformes. Les options qui n'utilisent pas Windows nécessitent une compréhension de base de CMake. Généralement, les TD sont préconfigurés pour être executés sur toutes les plateformes.

Noter que Visual Studio sur macOS ne supportait pas le C++ et est maintenant discontinué de toute façon.

## Windows [ Niveau: <span style="color:green">Facile </span>]

L'option recommendée sur Windows est d'utiliser Visual Studio Enterprise 2022. C'est d'ailleurs Visual Studio qui est installé dans les laboratoires informatiques et qui sera disponible lors des examens.

1. [Accepter l'offre étudiante Azure sur le lien suivant](https://azure.microsoft.com/fr-ca/free/students). Cliquer sur Commencez gratuitement et remplir le formulaire avec votre courriel institutionnel.
2. Obtenir une license pour Visual Studio Enterprise 2022. [Ce lien liste les étapes à suivre](https://www.polymtl.ca/gigl/obtention-des-produits-microsoft).
3. [Suivre la procédure d'installation officielle](https://www.polymtl.ca/gigl/procedure-dinstallation-de-visual-studio-2019).\*

   \* À l'étape de la sélection des `Charge de travail`, la seule option importante à sélectionner est `Développement Desktop en C++` (voir capture) Ceci permettra de minimiser la taille de l'application. Vous pouvez choisir d'autres options selon vos besoins. Il est possible de les rajouter dans un 2e temps en relançant l'installateur![alt text](captures/vs-charges.png)

   Il est aussi possible de modifier la langue de Visual Studio dans l'onglet `Modules linguistiques`
   ![alt text](captures/vs-langues.png)

## Windows / macOS / Linux / [ Niveau: <span style="color:gold">Moyen </span>]

Il est possible d'utiliser CLion de Jetbrains comme IDE. Cette plateforme est fournie par les mêmes développeurs de PyCharm. CLion s'occupe de la configuration de CMake pour nous. D'ailleurs, CLion offre un débogeur intéressant. Cette option nécessite de se familiariser tranquilement avec CMake.

1. Si ce n'est pas déjà fait, [se créer un compte Jetbrains](https://account.jetbrains.com/login)
2. [Demander une license étudiante](https://account.jetbrains.com/licenses). (Sinon, on obtient seulement un essai de 30 jours.)
3. Configurer CLion avec le tutoriel officiel
   - [macOs](https://www.jetbrains.com/help/clion/quick-tutorial-on-configuring-clion-on-macos.html)
   - [Windows](https://www.jetbrains.com/help/clion/quick-tutorial-on-configuring-clion-on-windows.html)
