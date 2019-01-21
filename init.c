//Spawn helper function
void SpawnObject( string type, vector position, vector orientation )
{
    auto obj = GetGame().CreateObject( type, position );
    obj.SetPosition( position );
    obj.SetOrientation( orientation );
    //Force collision update
    vector roll = obj.GetOrientation();
    roll [ 2 ] = roll [ 2 ] - 1;
    obj.SetOrientation( roll );
    roll [ 2 ] = roll [ 2 ] + 1;
    obj.SetOrientation( roll );
}
void main()
{   

    SpawnObject("bldr_Platform1_Ramp", "2682.593750 3.558206 1392.670044", "149.000076 0.000000 -13.000002");
    SpawnObject("bldr_Platform1_Staris_Block", "2671.567871 -0.544666 1383.733154", "-31.000004 -1.000000 -3.000005");
    SpawnObject("bldr_Platform1_Staris_Block", "2669.510010 -0.576938 1387.176758", "-31.000004 0.000000 -3.000004");
    SpawnObject("bldr_pier_concrete1_tsmall", "2704.217773 -19.798878 1405.977539", "-31.000002 0.000000 0.000000");
    SpawnObject("bldr_Platform2_Stairs_30_WallL", "2689.243408 1.149626 1401.061035", "58.999989 0.000000 0.000000");
    SpawnObject("bldr_Platform2_Stairs_30_WallL", "2692.954102 1.143457 1394.624756", "59.999992 0.000000 0.000000");
    SpawnObject("bldr_pier_concrete2_end", "2719.309814 -19.982409 1385.852295", "-31.000004 0.000000 0.000000");
    SpawnObject("bldr_pier_concrete1", "2685.588623 -19.798901 1441.318970", "-31.000006 0.000000 0.000000");
    SpawnObject("bldr_pier_concrete1_l", "2673.065674 -19.990000 1462.365479", "-1.000000 0.000000 0.000000");
    SpawnObject("bldr_pier_concrete1_tsmall", "2668.760010 -19.805727 1492.213013", "-1.000000 0.000000 0.000000");
    SpawnObject("bldr_rail_bridge_40", "2665.434570 -0.119988 1600.769165", "0.000000 0.000000 0.000000");
    SpawnObject("bldr_rail_bridge_40", "2665.430420 0.025642 1546.398560", "0.000000 0.000000 0.000000");
    SpawnObject("bldr_rail_bridge_15_end", "2665.567383 -2.432946 1518.860962", "-1.000000 0.000000 0.000000");
    SpawnObject("bldr_rail_tracke_40", "2665.679443 3.162950 1492.621094", "0.000000 0.000000 0.000000");
    SpawnObject("bldr_rail_tracke_r30_20", "2671.042236 3.165879 1456.467896", "-27.000019 0.000000 0.000000");
    SpawnObject("bldr_rail_tracke_2", "2666.545898 3.169310 1466.280884", "-13.000005 0.000000 0.000000");
    SpawnObject("bldr_rail_tracke_2", "2666.178955 3.165334 1468.172974", "-9.000002 0.000000 0.000000");
    SpawnObject("bldr_rail_tracke_2", "2665.891602 3.165341 1470.121704", "-8.000002 0.000000 0.000000");
    SpawnObject("bldr_rail_tracke_2", "2734.556641 1.235766 1950.985474", "-3.000026 0.000000 0.000000");
    SpawnObject("bldr_rail_linebreak_iron", "2697.329590 4.602820 1411.838013", "-31.000004 0.000000 0.000000");
    SpawnObject("bldr_sign_train", "2696.100342 4.733925 1405.402222", "55.999992 0.000000 0.000000");
    SpawnObject("Land_Train_742_Blue", "2689.362061 6.244847 1425.218994", "-31.000004 0.000000 0.000000");
    SpawnObject("Land_Train_Wagon_Box", "2682.766602 5.651798 1436.042847", "-31.000004 0.000000 0.000000");
    SpawnObject("Land_Train_Wagon_Box", "2676.553467 5.626088 1446.400024", "-31.000006 0.000000 0.000000");
    SpawnObject("Land_Wreck_Trailer_Closed", "2677.405273 4.932088 1450.721313", "-27.000010 0.000000 0.000000");
    SpawnObject("Land_Container_1Bo", "2703.328369 5.223555 1399.665771", "59.999996 0.000000 0.000000");
    SpawnObject("bldr_rail_bridge_15", "2665.424072 -2.438360 1573.562012", "0.000000 0.000000 0.000000");
    SpawnObject("bldr_rail_bridge_15", "2665.424072 -2.448390 1627.925049", "0.000000 0.000000 0.000000");
    SpawnObject("bldr_rail_bridge_40", "2665.436035 0.012400 1655.157959", "0.000000 0.000000 0.000000");
    SpawnObject("bldr_rail_bridge_15", "2665.424072 -2.461266 1682.315186", "0.000000 0.000000 0.000000");
    SpawnObject("bldr_rail_bridge_40", "2665.435059 -0.001949 1709.549805", "0.000000 0.000000 0.000000");
    SpawnObject("bldr_rail_bridge_15", "2665.434082 -2.486559 1736.719360", "0.000000 0.000000 0.000000");
    SpawnObject("bldr_rail_bridge_40", "2665.447021 -0.020308 1763.947021", "0.000000 0.000000 0.000000");
    SpawnObject("bldr_rail_bridge_15", "2665.434814 -2.475223 1791.108765", "0.000000 0.000000 0.000000");
    SpawnObject("bldr_rail_bridge_40", "2665.448242 -0.011364 1818.347046", "0.000000 0.000000 0.000000");
    SpawnObject("bldr_rail_bridge_15", "2665.436035 -2.474387 1845.514282", "0.000000 0.000000 0.000000");
    SpawnObject("bldr_rail_bridge_40", "2665.434082 0.271653 1872.717285", "0.000000 1.000000 0.000000");
    SpawnObject("bldr_rail_bridge_15", "2665.423584 -1.696822 1899.896362", "0.000000 1.000000 0.000000");
    SpawnObject("bldr_rail_bridge_40", "2665.447021 1.226435 1927.066650", "0.000000 1.000000 0.000000");
    SpawnObject("bldr_rail_tracke_turnoutl", "2717.930176 6.443485 1981.200806", "-90.000038 0.000000 0.000000");
    SpawnObject("bldr_rail_track_lb1_re", "2665.224365 5.304373 1949.675903", "29.999987 1.000000 0.000000");
    SpawnObject("bldr_rail_track_lb1_re", "2669.748535 5.540725 1962.496948", "59.999985 1.000001 0.000000");
    SpawnObject("bldr_rail_track_r25_10", "2695.965332 6.147064 1975.897339", "72.000000 1.000000 0.000000");
    SpawnObject("bldr_rail_tracke_4", "2682.524658 5.564805 1971.452881", "68.000015 3.000000 0.000000");
    SpawnObject("bldr_rail_tracke_8", "2679.300049 5.347584 1970.133301", "67.000000 3.000000 0.000000");
    SpawnObject("bldr_rock_bright_monolith3", "2666.030029 3.077147 1953.655640", "0.000000 6.000000 0.000000");
    SpawnObject("bldr_rock_bright_monolith4", "2668.520264 3.055396 1960.269043", "0.000000 0.000000 0.000000");
    SpawnObject("bldr_rock_bright_monolith4", "2664.337402 3.397865 1952.563721", "16.000004 0.000000 0.000000");
    SpawnObject("bldr_rock_bright_monolith4", "2665.033447 3.587336 1958.607300", "1.000000 8.000001 0.000000");
    SpawnObject("bldr_rock_bright_monolith4", "2672.278320 3.400765 1963.468750", "23.000013 4.000000 0.000000");
    SpawnObject("bldr_rock_bright_monolith1", "2685.764160 -2.768034 1966.209595", "56.999989 8.000001 -4.999999");
    SpawnObject("bldr_rock_bright_monolith3", "2669.075195 3.223160 1957.102051", "0.000000 0.000000 0.000000");
    SpawnObject("bldr_rock_bright_monolith4", "2667.952393 3.303760 1951.937988", "0.000000 3.000000 0.000000");
    SpawnObject("bldr_rock_bright_monolith4", "2694.021729 4.558842 1972.193970", "-120.999969 -1.000000 -13.000000");
    SpawnObject("bldr_rock_bright_monolith4", "2668.436035 3.786264 1965.197876", "29.000013 2.000000 3.000001");
    SpawnObject("bldr_rock_monolith3", "2672.643799 3.991467 1971.554443", "42.000004 3.000000 -2.000000");
    SpawnObject("bldr_rock_monolith3", "2660.297119 3.613868 1954.622559", "0.000000 0.000000 0.000000");
    SpawnObject("bldr_wall_stoned", "2682.432373 6.025280 1973.657349", "-17.000004 8.000000 -0.000000");
    SpawnObject("bldr_stones_leaf_bar_curve", "2699.774902 6.601024 1981.460327", "-32.000004 0.000000 0.000000");
    SpawnObject("bldr_wall_stoned", "2693.721191 6.475282 1978.613892", "-14.000003 0.000000 0.000000");
    SpawnObject("bldr_Rubble_Concrete2", "2687.053223 6.419730 1977.223145", "-107.999985 0.000000 0.000000");
    SpawnObject("bldr_rock_bright_monolith3", "2704.962158 4.484468 1975.331909", "-112.999969 -2.000000 -4.000000");
    SpawnObject("bldr_rock_bright_monolith4", "2699.332275 4.749184 1973.827515", "-108.999985 -2.000000 0.000000");
    SpawnObject("bldr_rail_tracke_2", "2665.707275 3.165514 1471.719604", "-3.000000 0.000000 0.000000");
    SpawnObject("bldr_rail_tracke_25", "2682.202637 3.167501 1436.969482", "-31.000006 0.000000 0.000000");
    SpawnObject("bldr_rail_tracke_25", "2690.122803 3.169475 1423.837891", "-31.000006 0.000000 0.000000");
    SpawnObject("bldr_pier_concrete2_end", "2670.815674 -19.998240 1516.987793", "178.000046 0.000000 0.000000");
    SpawnObject("Land_Mil_GuardTower", "2664.565430 8.673221 1392.153442", "-136.000061 0.000000 0.000000");
    SpawnObject("Land_Mil_Guardhouse2", "2699.361816 5.303435 1407.428589", "-120.999908 0.000000 0.000000");
    SpawnObject("TrashCan", "2701.472168 3.999416 1411.197388", "-72.204544 0.000000 0.000000");
    SpawnObject("bldr_Rubble_Wood2", "2709.529541 3.672383 1394.943237", "0.000000 -5.000000 2.000000");
    SpawnObject("bldr_Ruin_Rubble", "2709.925293 4.464933 1390.022705", "-84.000053 0.000000 0.000000");
	
	//INIT WEATHER BEFORE ECONOMY INIT------------------------
	Weather weather = g_Game.GetWeather();

	weather.MissionWeather(false);    // false = use weather controller from Weather.c

	weather.GetOvercast().Set( Math.RandomFloatInclusive(0.4, 0.6), 1, 0);
	weather.GetRain().Set( 0, 0, 1);
	weather.GetFog().Set( Math.RandomFloatInclusive(0.05, 0.1), 1, 0);
	
	weather.GetRain().SetLimits( 0, 0.1 );

	//INIT ECONOMY--------------------------------------
	Hive ce = CreateHive();
	if ( ce )
		ce.InitOffline();

	//DATE RESET AFTER ECONOMY INIT-------------------------
	int year;
	int month;
	int day;
	int hour;
	int minute;

	GetGame().GetWorld().GetDate(year, month, day, hour, minute);

    if (((month <= 9) && (day < 20)) || ((month >= 10) && (day > 20)))
    {
        month = 9;
        day = 20;
		
		GetGame().GetWorld().SetDate(year, month, day, hour, minute);
	}
	
	//-----------------------X-mas
	array<vector> treePositions = { "6560.29 0 2462.12",
									"1652.66 0 14230.71",
									"3801.06 0 8847.76",
									"9442.32 0 8829.03",
									"7903.16 0 12576.52",
									"11617.75 0 14663.98",
									"12830.08 0 10115.18",
									"11221.94 0 12225.89",
									"3471.93 0 12988.33",
									"13933.42 0 13228.44",
									"12022.64 0 9082.89",
									"10468.54 0 2373.16",
									"2725.48 0 5288.75",
	};
	

	Object treeEntity;
	for ( int i=0; i < treePositions.Count(); i++ )
	{
		vector treePos = treePositions[i];
		float posY = GetGame().SurfaceY(treePos[0], treePos[2]);
		treeEntity = GetGame().CreateObject("ChristmasTree", Vector( treePos[0], posY, treePos[2]), false);

	}
}

class CustomMission: MissionServer
{	
	void SetRandomHealth(EntityAI itemEnt)
	{
		if ( itemEnt )
		{
			int rndHlt = Math.RandomInt(55,100);
			itemEnt.SetHealth("","",rndHlt);
		}
	}

	override PlayerBase CreateCharacter(PlayerIdentity identity, vector pos, ParamsReadContext ctx, string characterName)
	{
		Entity playerEnt;
		playerEnt = GetGame().CreatePlayer(identity, characterName, pos, 0, "NONE");//Creates random player
		Class.CastTo(m_player, playerEnt);
		
		GetGame().SelectPlayer(identity, m_player);
		
		return m_player;
	}
	
	override void StartingEquipSetup(PlayerBase player, bool clothesChosen)
	{
/*
		player.RemoveAllItems();

		EntityAI item = player.GetInventory().CreateInInventory(topsMissionArray.GetRandomElement());
		EntityAI item2 = player.GetInventory().CreateInInventory(pantsArray.GetRandomElement());
		EntityAI item3 = player.GetInventory().CreateInInventory(shoesArray.GetRandomElement());
*/
		EntityAI itemTop;
		EntityAI itemEnt;
		ItemBase itemBs;
		float rand;
		
		itemTop = player.FindAttachmentBySlotName("Body");
		
		if ( itemTop )
		{
			itemEnt = itemTop.GetInventory().CreateInInventory("Rag");
			if ( Class.CastTo(itemBs, itemEnt ) )
				itemBs.SetQuantity(4);

			SetRandomHealth(itemEnt);
			
			itemEnt = itemTop.GetInventory().CreateInInventory("NewNVG");
			SetRandomHealth(itemEnt);
		
			itemEnt = itemTop.GetInventory().CreateInInventory("Machete");
			SetRandomHealth(itemEnt);
			
			itemEnt = itemTop.GetInventory().CreateInInventory("Battery9V");
			SetRandomHealth(itemEnt);
		}

		rand = Math.RandomFloatInclusive(0.0, 1.0);
		if ( rand < 0.25 )
			itemEnt = player.GetInventory().CreateInInventory("SodaCan_Cola");
		else if ( rand > 0.75 )
			itemEnt = player.GetInventory().CreateInInventory("SodaCan_Spite");
		else
			itemEnt = player.GetInventory().CreateInInventory("SodaCan_Pipsi");
		
		SetRandomHealth(itemEnt);

		rand = Math.RandomFloatInclusive(0.0, 1.0);
		if ( rand < 0.35 )
			itemEnt = player.GetInventory().CreateInInventory("Apple");
		else if ( rand > 0.65 )
			itemEnt = player.GetInventory().CreateInInventory("Pear");
		else
			itemEnt = player.GetInventory().CreateInInventory("Plum");
		
		SetRandomHealth(itemEnt);
	}
};
  
Mission CreateCustomMission(string path)
{
	g_Game.SetMissionPath(path);
	return new CustomMission();
}