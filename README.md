# Beatemup_Project

## GUIA - ABRINDO O PROJETO PELA PRIMEIRA VEZ

### **\[IMPORTANTE\]**

Ao clonar este repositório, siga atentamente as instruções:

1. Todos que utilizarem a engine deverão instalar o Visual Studio Community 2022 e iniciar a Unreal a partir da solução do visual studio;

2. Caso não tenha instalado, faça o download do [Visual Studio Installer](https://visualstudio.microsoft.com/pt-br/downloads/) então abra e deixe aberto o arquivo baixado;

3. Acesse o [Guia de Setup Do Visual Studio na Unreal Engine](https://docs.unrealengine.com/5.1/en-US/setting-up-visual-studio-development-environment-for-cplusplus-projects-in-unreal-engine/#:~:text=the%20code%20base.-,New%20Visual%20Studio%20Installation,Unreal%20Engine%20installer,-Recommended%20Settings) e selecionem os módulos descritos no guia. Cliquem em 'Install';

4. Para buildar, também é preciso fazer o download do [Runtime SDK do .NET Core](https://dotnet.microsoft.com/pt-br/download/dotnet/thank-you/runtime-3.1.32-windows-x64-installer) da Microsoft e instalar no computador;

5. Após isso, façam o download da versão 5.0.3 da Unreal Engine \(Na Epic Games\) seguindo [Esse Tutorial](https://youtu.be/9feSxyc-i78?si=v9x9QEuZo8Qg0sxX);

6. Ao finalizar, clone o projeto para o seu computador \(por recomendação, utilize o [Fork](https://git-fork.com)\);

7. Ao final, tente uma das seguintes opções:

    - Abra a pasta do projeto -> Clique com o botão direito no arquivo ***.uproject*** -> Selecione a opção "Generate Visual Studio project files \(para usúarios de Windows 10 é preciso clicar em 'Mostrar mais opções' ou 'Show More Options'\);
    - Abra a pasta do projeto -> Clique duas vezes no arquivo .uproject -> Na mensagem "Missing \**Project_Name*\* Modules" selecione 'Sim', o editor irá abrir -> Com o editor aberto, selecione *Tools > Generate Visual Studio Project* \(ou *Refresh Visual Studio 2022 Project*\) > Feche o Editor quando o processo for concluído;

   Caso surja algum erro ao tentar buildar o projeto, confira se os passos anteriores foram seguidos corretamente e tente novamente;

8. Com a solução gerada, feche o editor, vá até a pasta do projeto e clique duas vezes no arquivo ***.sln*** e selecione "Abrir com Visual Studio 2022" \(pelo editor, abra a solução através de *Tools > Open Visual Studio 2022*, e feche o editor em seguida\);

9. Com a solução do Visual Studio aberta, na segunda barra de opções superior da tela, no local onde está selecionado "Development Editor" selecione "DebugGame Editor" e depois execute a opção 'Start Without Debugging (Ctrl+F5)' <mark>***Triangulo verde sem preenchimento***</mark>. O Editor da Unreal irá iniciar automáticamente;

10. Ao iniciar o editor, certifique-se que as opções 'Force Compilation at Startup' (*Edit > Editor Preferences > General > Loading and Saving*) e 'Enable Live Coding' (*Edit > Editor Preferences > General > Live Coding*) estão ativadas;

11. Desabilitem as opções 'Enable Reinstancing' e 'Automatically Compile Newly Added C++ Classes' em *Edit > Editor Preferences > General > Live Coding*. Também desabilite a opção 'Automatically Compile Newly Added C++ Classes' na sessão *Edit > Editor Preferences > General > Miscellaneous > Hot Reload*.

12. **AO TROCAR DE BRANCH OU REALIZAR UM MERGE, SEMPRE SALVEM E FECHEM O EDITOR** ou seus assets poderão ser corrompidos. Após realizerem a troca/merge, iniciem a engine através do Visual Studio;

Essas orientações devem ser seguidas a risca para que os dados do projetos não sejam corrompidos e assim evitar maiores problemas no futuro com corrompimentos de assets e trabalhos perdidos. Caso tenham problemas seguindo as instruções, entrem em contato o quanto antes.

### **\[Pasta de Developers\]**

A pasta de *Developers* fica localizada no *Content Browser* dentro da pasta *Contents* (Caso não consiga ver a pastar, selecione a opção "Settings" no content browser e habilite "Show Developers Content"), essa pasta deve ser usada para testes de novas features, conteúdos, mecânicas ou qualquer outro tipo mudança que talvez não seja definitiva para o projeto. Cada membro do projeto terá uma pasta própria criada a partir do nome do computador do usuário.

> ##### ATENÇÃO:
>
> Apagar ou renomear sua pasta não é recomendado pois ao fechar e abrir a pasta 'Developers' novamente será criado uma nova pasta com o nome do computador do usuário. **POR MOTIVOS DE ORGANIZAÇÃO NÃO APAGUE SUA PASTA NEM A DE OUTROS MEMBROS DO GRUPO**. 

Caso seja necessário trabalhar em algum asset que foi criado ou modificado por outra pessoa do projeto, duplique o asset/blueprint em questão para a sua pasta dentro da pasta *Developers* e faça as alterações desejadas no NOVO asset criado. ***Os assets criados nessa pasta não serão inclusos na build final***.

Essa organização ajudará no controle do versionamento do projeto e é essencial para mantermos os trabalhos separados ao longo do desenvolvimento.

### **\[Feedback\]**

Caso encontrem qualquer problema não descrito aqui podem falar comigo (Lipe) para eu poder ajudar e também atualizar o guia com mais informações relevantes.

