/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.0 at Wed Nov 12 23:08:53 2014. */

#ifndef PB_SERVER_PB_H_INCLUDED
#define PB_SERVER_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
/* Struct definitions */
typedef struct _NetMsgAddPlayers {
    int32_t ClientId;
    pb_size_t PlayerIds_count;
    int32_t PlayerIds[4];
} NetMsgAddPlayers;

typedef struct _NetMsgCampaignDef {
    char Path[4096];
    uint32_t CampaignMode;
} NetMsgCampaignDef;

typedef struct _NetMsgClientId {
    int32_t Id;
} NetMsgClientId;

typedef struct _NetMsgPlayerData_CharLooks {
    int32_t Face;
    int32_t Skin;
    int32_t Arm;
    int32_t Body;
    int32_t Leg;
    int32_t Hair;
} NetMsgPlayerData_CharLooks;

typedef struct _NetMsgVec2i {
    int32_t x;
    int32_t y;
} NetMsgVec2i;

typedef struct _NetMsgActorAdd {
    int32_t Id;
    int32_t CharId;
    int32_t Direction;
    int32_t Health;
    int32_t PlayerId;
    int32_t TileItemFlags;
    NetMsgVec2i FullPos;
} NetMsgActorAdd;

typedef struct _NetMsgActorMove {
    int32_t Id;
    NetMsgVec2i Pos;
} NetMsgActorMove;

typedef struct _NetMsgPlayerData {
    char Name[20];
    NetMsgPlayerData_CharLooks Looks;
    pb_size_t Weapons_count;
    char Weapons[3][128];
    int32_t Lives;
    int32_t Score;
    int32_t TotalScore;
    int32_t Kills;
    int32_t Friendlies;
    int32_t PlayerIndex;
    bool IsUsed;
} NetMsgPlayerData;

/* Default values for struct fields */
extern const int32_t NetMsgActorAdd_PlayerId_default;

/* Initializer values for message structs */
#define NetMsgClientId_init_default              {0}
#define NetMsgCampaignDef_init_default           {"", 0}
#define NetMsgPlayerData_init_default            {"", NetMsgPlayerData_CharLooks_init_default, 0, {"", "", ""}, 0, 0, 0, 0, 0, 0, 0}
#define NetMsgPlayerData_CharLooks_init_default  {0, 0, 0, 0, 0, 0}
#define NetMsgAddPlayers_init_default            {0, 0, {0, 0, 0, 0}}
#define NetMsgVec2i_init_default                 {0, 0}
#define NetMsgActorAdd_init_default              {0, 0, 0, 0, -1, 0, NetMsgVec2i_init_default}
#define NetMsgActorMove_init_default             {0, NetMsgVec2i_init_default}
#define NetMsgClientId_init_zero                 {0}
#define NetMsgCampaignDef_init_zero              {"", 0}
#define NetMsgPlayerData_init_zero               {"", NetMsgPlayerData_CharLooks_init_zero, 0, {"", "", ""}, 0, 0, 0, 0, 0, 0, 0}
#define NetMsgPlayerData_CharLooks_init_zero     {0, 0, 0, 0, 0, 0}
#define NetMsgAddPlayers_init_zero               {0, 0, {0, 0, 0, 0}}
#define NetMsgVec2i_init_zero                    {0, 0}
#define NetMsgActorAdd_init_zero                 {0, 0, 0, 0, 0, 0, NetMsgVec2i_init_zero}
#define NetMsgActorMove_init_zero                {0, NetMsgVec2i_init_zero}

/* Field tags (for use in manual encoding/decoding) */
#define NetMsgAddPlayers_ClientId_tag            1
#define NetMsgAddPlayers_PlayerIds_tag           2
#define NetMsgCampaignDef_Path_tag               1
#define NetMsgCampaignDef_CampaignMode_tag       2
#define NetMsgClientId_Id_tag                    1
#define NetMsgPlayerData_CharLooks_Face_tag      1
#define NetMsgPlayerData_CharLooks_Skin_tag      2
#define NetMsgPlayerData_CharLooks_Arm_tag       3
#define NetMsgPlayerData_CharLooks_Body_tag      4
#define NetMsgPlayerData_CharLooks_Leg_tag       5
#define NetMsgPlayerData_CharLooks_Hair_tag      6
#define NetMsgVec2i_x_tag                        1
#define NetMsgVec2i_y_tag                        2
#define NetMsgActorAdd_Id_tag                    1
#define NetMsgActorAdd_CharId_tag                2
#define NetMsgActorAdd_Direction_tag             3
#define NetMsgActorAdd_Health_tag                4
#define NetMsgActorAdd_PlayerId_tag              5
#define NetMsgActorAdd_TileItemFlags_tag         6
#define NetMsgActorAdd_FullPos_tag               7
#define NetMsgActorMove_Id_tag                   1
#define NetMsgActorMove_Pos_tag                  2
#define NetMsgPlayerData_Name_tag                1
#define NetMsgPlayerData_Looks_tag               2
#define NetMsgPlayerData_Weapons_tag             3
#define NetMsgPlayerData_Lives_tag               4
#define NetMsgPlayerData_Score_tag               5
#define NetMsgPlayerData_TotalScore_tag          6
#define NetMsgPlayerData_Kills_tag               7
#define NetMsgPlayerData_Friendlies_tag          8
#define NetMsgPlayerData_PlayerIndex_tag         9
#define NetMsgPlayerData_IsUsed_tag              10

/* Struct field encoding specification for nanopb */
extern const pb_field_t NetMsgClientId_fields[2];
extern const pb_field_t NetMsgCampaignDef_fields[3];
extern const pb_field_t NetMsgPlayerData_fields[11];
extern const pb_field_t NetMsgPlayerData_CharLooks_fields[7];
extern const pb_field_t NetMsgAddPlayers_fields[3];
extern const pb_field_t NetMsgVec2i_fields[3];
extern const pb_field_t NetMsgActorAdd_fields[8];
extern const pb_field_t NetMsgActorMove_fields[3];

/* Maximum encoded size of messages (where known) */
#define NetMsgClientId_size                      11
#define NetMsgCampaignDef_size                   4105
#define NetMsgPlayerData_size                    551
#define NetMsgPlayerData_CharLooks_size          66
#define NetMsgAddPlayers_size                    55
#define NetMsgVec2i_size                         22
#define NetMsgActorAdd_size                      90
#define NetMsgActorMove_size                     35

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
