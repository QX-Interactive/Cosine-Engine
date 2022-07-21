//
// Created by Bram Reuling on 17/07/2022.
//
#ifndef COSINEENGINE_GAME_HPP
#define COSINEENGINE_GAME_HPP

namespace Cosine::Core {

    class Game {
    public:
        Game();
        virtual ~Game();

        int Run();

        virtual void Start();
        virtual void Update();
        virtual void OnDestroy();
    };

    // Defined in client.
    Cosine::Core::Game* CreateGame();
}

#endif //COSINEENGINE_GAME_HPP
