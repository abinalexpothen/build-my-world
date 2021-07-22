#include <gazebo/gazebo.hh>

namespace gazebo {
class AbinsWorldPlugin : public WorldPlugin {
 public:
  AbinsWorldPlugin() : WorldPlugin() { printf("Welcome to Abin's World!\n"); }

 public:
  void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf) {}
};
GZ_REGISTER_WORLD_PLUGIN(AbinsWorldPlugin)
}  // namespace gazebo