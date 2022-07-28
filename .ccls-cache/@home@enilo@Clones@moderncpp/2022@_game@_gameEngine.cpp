typedef size_t EntityIndex;

struct Physics
{
  Vec2F position; 
  Vec2F velocity;
  float mass;
}

struct Player
{
  Physics physics;
  HumanoidState humanoid;
  float health;
  EntityIndex focused_entity;
  bool admin;
}

struct Monster
{
  Physics physics;
  HumanoidState humanoid;
  float health;
}

struct Npc
{
  Physics physics;
  HumanoidState humanoid;
  float health;
}

struct GameState
{
  Vec<shared_ptr<void>> entities;
  List<EntityIndex> player_ids;
  MultiArray2D<Block> blocks;
}
