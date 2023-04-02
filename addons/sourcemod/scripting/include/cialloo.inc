/** Double-include prevention */
#if defined _cialloo_included_
  #endinput
#endif
#define _cialloo_included_

#define PLUGIN_AUTHOR "cialloo"
#define PLUGIN_URL "cialloo.com"
#define PLUGIN_VERSION "1.0.0"
#define PLUGIN_NAME "CiallooBackend - "

// return -1 if not exist, else uid
native int Cialloo_GetPlayerForumUID(int client);
native void Cialloo_LogMessage(char[] message, any ...);
native bool Cialloo_IsServerRegistered();
native bool Cialloo_IsForumAdmin(int client);
native bool Cialloo_IsValidClient(int client);
forward void Cialloo_OnGetPlayerForumInfo(int client, int forumid, const char[] grouptitle, const char[] aboutme);
forward void Cialloo_OnServerRegister();
// return Plugin_Handled to disable cialloo chat
forward Action Cialloo_OnChat();
// return Plugin_Handled to disable reload.
forward Action Cialloo_OnReloadServer();
// return Plugin_Handled to disable spec chat relay
forward Action Cialloo_OnSpecChatRelay();