#include "tb_defines.hpp"

zoneList[] =
{
//ID and PROFILE = not used
//LINK = zones capturable after this one
//DEPEND = auto-capture/enable upon these zones being held
//DEPQTY = quantity of zones required for DEPEND i.e. can have only 2 of the 3 zones in DEPEND required
//SYNC = required zones for progression

//ID TEAM          	SPAWNTYPE       LINK         SYNC   PROFILE   DEPEND     DEPQTY  ZONE_DESC
{ 0, 0           , 0          ,    	{}         	, {}    , 1      , {}        , 0      },

{ 1, TEAM_BLUE, 	SPAWN_XRAY,     {}      	, {}    , 1      , {}        , 0    , "%3" },
{ 2, TEAM_RED, 		SPAWN_XRAY,     {9}         , {}    , 1      , {}		 , 0    , "%3" },

{ 3, TEAM_BLUE, 	SPAWN_NEVER,    {1}      	, {}   	, 1      , {}        , 0    , "Mountain Pass" },
{ 4, TEAM_BLUE, 	SPAWN_NEVER,    {3}      	, {}   	, 1      , {}        , 0    , "Checkpoint" },
{ 5, TEAM_BLUE, 	SPAWN_NEVER,    {4}  		, {}    , 1      , {}        , 0    , "Camp Xray" },
{ 6, TEAM_BLUE, 	SPAWN_NEVER,    {5}      	, {}  	, 1      , {}        , 0    , "Outpost" },
{ 7, TEAM_BLUE, 	SPAWN_NEVER,    {6,10}      , {}   	, 1      , {}        , 0    , "Crash Site" },
{ 8, TEAM_BLUE, 	SPAWN_NEVER,    {7}			, {}    , 1      , {}        , 0    , "Roadblock" },
{ 9, TEAM_RED, 		SPAWN_NEVER,    {8}			, {}    , 1      , {}        , 0    , "Refuge" },
{ 10,TEAM_BLUE, 	SPAWN_NEVER,  	{}			, {}    , 1	     , {}    	 , 0    , "Emplacement" },

{ 11,TEAM_RED, 		SPAWN_INSTANT,  {}			, {}    , 1	     , {2,8}     , 2    , "HIDDEN" },
{ 12,TEAM_RED, 		SPAWN_INSTANT,  {}			, {}    , 1      , {5,8}     , 2    , "HIDDEN" },
{ 13,TEAM_RED, 		SPAWN_INSTANT,  {}			, {}    , 1      , {6,4}     , 2    , "HIDDEN" },
{ 14,TEAM_BLUE, 	SPAWN_INSTANT,  {}			, {}    , 1      , {10,1}    , 2    , "HIDDEN" },
{ 15,TEAM_BLUE, 	SPAWN_INSTANT,  {}			, {}    , 1      , {1,4}     , 2    , "HIDDEN" }
};
