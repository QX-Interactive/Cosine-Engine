#include "Core/Game.hpp"

class TestGame : public Cosine::Core::Game {
public:
    TestGame() = default;
    ~TestGame() override = default;

    void Start() override;
    void Update() override;
    void OnDestroy() override;
};

Cosine::Core::Game* Cosine::Core::CreateGame()
{
    return new TestGame();
}