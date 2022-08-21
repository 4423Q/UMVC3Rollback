This repo contains a WIP mod to add replay system & rollback netcode to UMVC3. It uses ermaccer's UMVC3Hook repo as a base [repo here](https://github.com/ermaccer/UMVC3Hook).

Copy over contents of the base folder in to your umvc3 game folder

Press f1 & open the imgui menu before starting the match. Starting the match before opening imgui will crash the game

After loading match press attach to attach the logic.

To build the project on your own, open "UMVC3Hook.vcxproj". Change the target folder inside AfterBuild tag on the bottom to your own umvc3 game folder. After that open the solution inside visual studio & compile. Make sure the game is closed when you are compiling.