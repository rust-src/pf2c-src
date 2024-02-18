#include "cbase.h"
#ifdef CLIENT_DLL
ConVar pf_muzzleflash( "pf2c_muzzleflash", "0", FCVAR_ARCHIVE, "Enable/Disable beta muzzleflash");
ConVar pf_muzzlelight( "pf2c_muzzlelight", "0", FCVAR_ARCHIVE, "Enable dynamic lights for muzzleflashes and the flamethrower" );
ConVar pf_projectilelight( "pf2c_projectilelight", "0", FCVAR_ARCHIVE, "Enable dynamic lights for grenades and rockets" );
ConVar pf_muzzlelightsprops( "pf2c_muzzlelightsprops", "0", FCVAR_ARCHIVE, "Enable dynamic lights affecting props" );
ConVar pf_burningplayerlight( "pf2c_burningplayerlight", "0", FCVAR_ARCHIVE, "Enable burning players emitting light" );
ConVar pf_showchatbubbles( "pf2c_showchatbubbles", "1", FCVAR_ARCHIVE, "Show bubble icons over typing players" );
ConVar pf_cheapbulletsplash( "pf2c_cheapbulletsplash", "0", FCVAR_ARCHIVE | FCVAR_DONTRECORD, "Use the new, less intensive, bullet splash particle" );
ConVar pf_team_colored_spy_cloak( "pf2c_team_colored_spy_cloak", "0", FCVAR_ARCHIVE | FCVAR_DONTRECORD );
ConVar pf_discord_rpc("pf2c_discord_rpc", "1", FCVAR_ARCHIVE, "Enable/Disable Discord Rich Presence");
ConVar pf_discord_class("pf2c_discord_class", "1", FCVAR_ARCHIVE, "Enable/Disable Discord rpc Class icons (REQUIRES GAME RESTART)");
ConVar pf_blood_impact_disable( "pf2c_blood_impact_disable", "0", FCVAR_ARCHIVE | FCVAR_DONTRECORD, "Disable blood impact effects");
#else
ConVar pf_cp_flag_reset_on_cap("pf2c_cp_flag_reset_on_cap", "1", FCVAR_GAMEDLL | FCVAR_NOTIFY, "Resets the flag when capturing a control point");
ConVar pf_grenadepack_respawn_time( "pf2c_grenadepack_respawn_time", "20", FCVAR_NOTIFY, "Respawn time for grenade packs." );
ConVar pf_grenades_infinite("pf2c_grenades_infinite", "0", FCVAR_NOTIFY, "Player can throw an unlimited amount of grenades");
ConVar pf_concuss_effect_disable("pf2c_concuss_effect_disable", "0", FCVAR_NOTIFY | FCVAR_SERVER_CAN_EXECUTE, "Disables the camera shake from concussion grenade");
#endif
ConVar pf_aprilfools("pf2c_aprilfools", "0", FCVAR_NOTIFY | FCVAR_REPLICATED, "Toggles the April Fools holiday");
ConVar pf_grenades("pf2c_grenades", "1", FCVAR_NOTIFY | FCVAR_REPLICATED, "Toggle the grenades in-game");
ConVar pf_delayed_knife( "pf2c_delayed_knife", "0", FCVAR_NOTIFY | FCVAR_REPLICATED, "Toggles the old delayed knife backstab" );
ConVar pf_enable_civilian( "pf2c_enable_civilian", "0", FCVAR_REPLICATED | FCVAR_NOTIFY | FCVAR_CHEAT, "Enables joining civilian through join_class" );
ConVar pf_grenade_holstering("pf2c_grenade_holstering", "1", FCVAR_NOTIFY | FCVAR_REPLICATED);