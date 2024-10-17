#pragma once

#include "ll/api/mod/NativeMod.h"
#include <filesystem>

namespace better_ban {

class BetterBan {

public:
    static BetterBan& getInstance();

    BetterBan(ll::mod::NativeMod& self) : mSelf(self) {}

    [[nodiscard]] ll::mod::NativeMod& getSelf() const { return mSelf; }

    /// @return True if the plugin is loaded successfully.
    bool load();

    /// @return True if the plugin is enabled successfully.
    bool enable();

    /// @return True if the plugin is disabled successfully.
    bool disable();

    void loadBannedPlayers();

    void initBanCommand();

    void initEventListeners();

    void initServices();
    // TODO: Implement this method if you need to unload the plugin.
    // /// @return True if the plugin is unloaded successfully.
    // bool unload();

private:
    ll::mod::NativeMod& mSelf;
};

} // namespace better_ban
