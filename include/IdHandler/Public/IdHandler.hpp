#include <array>
class IdHandler {
private:
  std::array<int, 256> available_ids;
  int top;

  IdHandler() : top(0) {
    for (int i = 0; i < available_ids.size(); i++) {
      available_ids[i] = i;
    }
  }
  ~IdHandler() = default;

  IdHandler(const IdHandler &) = delete;
  IdHandler operator=(const IdHandler &) = delete;

public:
  static IdHandler &GetIdHandler() {
    static IdHandler g_IdHandler;
    return g_IdHandler;
  }

  int GetId();
  void ReleseId(int id);
};
