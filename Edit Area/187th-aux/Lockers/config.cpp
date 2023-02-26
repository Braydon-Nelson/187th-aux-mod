class cfgpatches
{
    class 187_personal_lockers
    {
        author = "KOBRA Mod Team & 187th";
        requiredAddons[]=
        {
            "kobra_core"
        };
		requiredVersion = 0.1;
		units[] = 
        {
            "187_personal_locker",
            "187_personal_locker_sparrow",
        };
        weapons[] = {};
    };
};

class cfgvehicles
{
    class k_personal_locker;
    class 187_personal_locker: k_personal_locker
    {
        displayname = "Personal Locker [187th]";
        hiddenselectionstextures[] = 
        {
            "kobra\442_misc\personal_locker\data\body_co.paa",
			"kobra\442_misc\personal_locker\data\screen_co.paa",
			"kobra\442_misc\personal_locker\data\picture1_co.paa"
        };
        multistructureparts[] = 
        {
            {
                "",
                "helmet"
            }
        };
    };

    class 187_personal_locker_sparrow: k_personal_locker
    {
        displayname = "Personal Locker (Sparrow)";
        hiddenselectionstextures[]=
		{
			"kobra\442_misc\personal_locker\data\body_co.paa",
			"\187th-aux\Data\Lockers\Sparrow\screen_sparrow.paa",
			"\187th-aux\Data\Lockers\Sparrow\picture_sparrow.paa"
		};
        multistructureparts[] = 
        {
            {
                "187th_headgear_sparrow",
                "helmet"
            }
        };
    };
};