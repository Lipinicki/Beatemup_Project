# Beatemup_Project

## -----GUIDELINES-----

### \[**IMPORTANTE**\]

1. Todos que utilizarem a engine deverão instalar o Visual Studio Community 2022 e iniciar a Unreal a partir da solução do visual studio;

2. Para gerar a solução do visual studio após clonar o projeto, abra o editor pelo launcher da Unreal e no editor selecione Tools->Refresh Visual Studio 2022 Project;

3. Em seguida, abra a solução através de Tools->Open Visual Studio 2022, e feche o editor Unreal;

4. Com a solução do visual estúdio aberta, na segunda barra de opções superior da tela, no local onde está selecionado "Development Editor" selecione "DebugGame Editor" e depois execute a opção 'Start Without Debugging (Ctrl+F5)' ***Triangulo verde sem preenchimento***;

5. Ao iniciarem o editor, certifique que se as opções 'Force Compilation at Startup' (Edit->Editor Preferences->General->Loading and Saving) e 'Enable Live Coding' (Edit->Editor Preferences->General->Live Coding) estão ativadas;

6. Desabilitem as opções 'Enable Reinstancing' e 'Automatically Compile Newly Added C++ Classes' em Edit->Editor Preferences->General->Live Coding. Também desabilite a opção 'Automatically Compile Newly Added C++ Classes' na sessão Edit->Editor Preferences->General->Miscellaneous->Hot Reload.

7. **AO TROCAR DE BRANCH SEMPRE SALVEM E FECHEM O EDITOR** ou seus assets poderão ser corrompidos;

Essas orientações devem ser seguidas a risca para que os dados do projetos não sejam corrompidos e assim evitar maiores problemas no futuro com corrompimentos de assets e trabalhos perdidos.

### \[**Pasta de Developers**\]

A pasta de Developers, localizada no Content Browser na pasta 'Contents' (Caso não consiga ver a pastar, selecione a opção "Settings" no content browser e habilite "Show Developers Content") deve ser usada para testes de novas features, conteúdos, mecânicas ou qualquer outro tipo mudança que talvez não seja definitiva para o projeto. Cada membro do projeto terá uma pasta própria criada a partir do nome do computador do usuário.

> #### ATENÇÃO:
> - Apagar ou renomear sua pasta não será possível pois toda vez que abrir a pasta 'Developers' novamente, acarretara na criação de uma nova pasta com o nome do computador do usuário. (POR MOTIVOS DE ORGANIZAÇÃO, NÃO APAGUE SUA PASTA NEM A DE OUTROS MEMBROS DO GRUPO). 

Caso seja necessário trabalhar em algum asset que foi criado ou modificado por outra pessoa do projeto, duplique o asset/blueprint em questão para a pasta de Developers e faça as alterações desejadas no NOVO asset criado. Os assets criados nessa pasta não serão inclusos na build final.

Essa organização ajudará no controle do versionamento do projeto e é essencial para mantermos os trabalhos separados ao longo do desenvolvimento.

### \[**Feedback**\]

Caso encontrem qualquer problema não descrito aqui podem falar comigo (Lipe) para eu poder ajudar e também atualizar o guia com mais informações relevantes.

