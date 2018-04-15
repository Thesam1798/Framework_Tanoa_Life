class Cfg_Server
{
	rcon_password="my_rcon_password";
	TFR_password="my_tfr_password";
	TimeMultiplier_day=5;
	TimeMultiplier_night=14;
	starting_time[]={2018, 5, 30, 12, 0};//year month day hour min

	class reboot
	{
		hours[]={2, 8, 14, 20};
	};

	class dynamic_markers
	{
		champs[]=
		{
			{2365.32,11224.1,0.00163078},
			{3824.93,12537.2,0.00182343},
			{1663.96,12692.7,0.00143623},
			{1732.64,8281.58,0.00178719},
			{2432.65,5857.25,0.00166321},
			{2265.09,6764.44,0.00157547},
			{1997.65,3825.91,0.0014863},
			{2890.97,2599.48,0.0018692},
			{6644.15,4360.62,0.00143242},
			{8917.49,4614.93,0.00160503},
			{11130.4,3838.42,0.00190735},
			{10426.7,2946.13,0.00164413},
			{14597,10017.6,0.00129509},
			{13221.4,11780,0.00164652},
			{10954.3,9417.12,0.00180054},
			{10462.3,6793.03,0.00151634},
			{6209.22,8441.29,0.00156403},
			{8762.22,10917.3,0.0018425},
			{6336,8956.25,0.00102997},
			{4245.42,8247.01,0.00158167},
			{7821.38,13369.2,0.00156403},
			{7031.94,12937.3,0.00165558},
			{5574,11598.8,0.00154495},
			{8140.26,7305.32,0.00151634},
			{8377.1,10748.4,0.00156403},
			{10474.9,7946.95,0.00164795},
			{7071.03,11257.8,0.0018158},
			{7569.31,11919.4,0.001297},
			{7053.63,12921,0.00131226},
			{6814.52,6949.2,0.00140524},
			{6333.77,8950.37,0.00162506},
			{13081.1,7552.35,0.00149012},
			{8877.1,8059.07,0.00211334},
			{10199.1,7936,0.00153351},
			{7538.96,13275.3,0.00150776},
			{10952.4,12968.6,0.00188637},
			{9659.99,7099.09,0.00148773},
			{8277.43,9072.52,0.00186157},
			{4984.43,5103.79,0.00141716},
			{2789.8,6998.24,0.00130463},
			{3337.81,12853.3,0.0013752},
			{11732.5,4158.32,0.00149536}
		};

		stands_general[] =
		{
			{7790.95,10588.9,0.165443},
			{8421.89,10851.7,0.0477829},
			{8267.03,11146.4,0.00172424},
			{11179.3,11530.2,0.00143433},
			{11906.9,10317,0.258774},
			{13139.3,10504.3,0.00147247},
			{12905.4,7438.84,0.00137973},
			{11335.4,6593.49,0.00175476},
			{11352.7,7608.71,0.00124359},
			{6676.64,7002.31,0.00156689},
			{6029.49,8445.68,0.00131989},
			{5238.13,10070.4,0.00143886},
			{5754.37,10598,0.00138807},
			{6114.03,9892.13,0.00142479},
			{5868.58,9871.46,0.409147},
			{7632.87,11997.1,0.00140381},
			{9780.04,8490.43,0.00163269},
			{10882.8,8665.98,0.00143433},
			{7038.14,9719.05,0.00143433},
			{9580.36,9104.15,0.00219727},
			{11278.4,12304.7,0.00164795},
			{9593.15,13435,0.00235748},
			{10080.1,13568.4,0.00143886},
			{13924.9,12535.6,0.00144124},
			{13361.8,12428.9,0.00143886},
			{13286.3,12581.9,0.00143886},
			{12476.3,12099.5,0.150276},
			{14514.4,8896.71,2.32632},
			{7611.56,6881.72,0.001297},
			{12374.7,11234.6,0.00152588},
			{7952.05,12445.6,0.379898},
			{7113.81,11036,0.0591812},
			{5407.92,7563.82,0.00156704},
			{9277.74,9077.97,0.001297},
			{11182,9827.68,0.00138855},
			{3673.8,9568.74,0.00167274},
			{10595.1,14679.3,0.00120699},
			{9238.37,5982.97,0.00140464},
			{3761.61,14442.1,0.00146103},
			{724.439,11263.6,0.143232},
			{11348.6,1686.07,0.00159597},
			{12102.8,13130.4,0.00174153},
			{11190.1,14378.1,0.00143909},
			{13677.8,11234.1,0.00144196},
			{6329.45,12802.9,0.00144613},
			{2655.62,11728.2,0.178593},
			{1613.28,12454.6,0.153689},
			{1930.92,12379.1,0.269234},
			{2381.05,8195.42,0.00134373},
			{1504.28,6895.71,2.10801},
			{3996.28,6178.36,0.00131607},
			{5457.33,4003.01,0.00135708},
			{3648.41,2130.01,0.00143433},
			{2937.8,3395.92,0.00128555},
			{10244.7,2680.43,0.000408471},
			{11616.2,4494.65,0.00161743},
			{13268.3,2966.95,0.00144196},
			{12109.6,2481.69,0.00169539}
		};

		archeologie[] =
		{
			{10981.8,8502.67,0.00143433},
			{11069.8,8468.96,0.00143433},
			{11279,8462.52,0.00170898},
			{10972.2,8416.66,0.0610657},
			{11091.5,8426.71,0.231262}
		};

		pillage[] =
		{
			{10480.6,14137.3,3.09222},
			{4844.91,12906.9,3.81049},
			{4085.35,9996.95,1.98737}
		};

		recif[]=
		{
			{6011.56,14544.8,0.801867},
			{8919.8,14746.1,0.0110648},
			{8910.72,14907.3,0.257658},
			{9035.17,14719,1.21929}
		};

		rebels[]=
		{
			{2837.02,9020.92,0.00134659},
			{2547.68,8928.62,0.401365},
			{2546.84,9049.18,0.544365},
			{2551.98,9335.99,0.218096},
			{3743.7,9226.17,0.397479},
			{3673.79,9568.8,0.00180244},
			{6557.12,6321.36,0.00158906},
			{8611.42,4982.13,0.00147915},
			{13425.4,5207.8,0.00175858},
			{10741.1,14571.9,0.00157166},
			{11087.7,14523,0.00188255},
			{5624.17,1991.48,0.00189209},
			{5560.64,1970.11,0.00215912},
			{692.525,11383.4,0.00170755},
			{11165.5,14536.1,0.00130081},
			{5473.69,14553.3,0.00170231},
			{5803.28,13035.7,0.00139999},
			{4617.53,7980.12,0.00143886}
		};

		launder[]=
		{
			{5848.61,10064.9,0.509378},
			{5942.54,10211.3,0.0825872},
			{7490.55,7474.49,0.00123501},
			{5927.05,10547.2,0.262333},
			{5771.61,11016.4,4.14474},
			{5775.61,12640.1,0.083899},
			{6403.13,12789.9,0.145238},
			{6555.92,13090.5,0.0014267},
			{8507.28,12475.3,0.123337},
			{9312.24,13577.1,0.569777},
			{9880.3,13478.9,0.131184},
			{10690.3,13405.2,0.154701},
			{11631,13007,0.00145245},
			{12836,7345.11,0.00117612},
			{12841.3,7353.4,4.3948},
			{10646.3,6604.91,0.00146818},
			{8738.27,6539.07,0.000747919}
		};

		mushroom[]=
		{
			{11532,8111.13,0.000915527},
			{11736.7,9534.02,0.00189209},
			{11869.6,12222,0.00204468},
			{8203.89,11222.9,0.00230408},
			{7194.07,9576.26,0.00141907},
			{6161.28,11834,0.00146484},
			{12397.3,11271.8,0.00138855},
			{12658.9,8022.53,0.00151443},
			{9935.83,6647.4,0.00256348},
			{8880.83,13143.9,0.00100708}
		};

		volcano[]=
		{
			{9728.01,12259.4,0.00158691},
			{9811.04,12004.8,0.00170898},
			{9993.24,11914,-0.00012207},
			{10052.7,12086.1,0.000701904},
			{9998.17,12238.3,0.000762939},
			{10067.2,12215.4,0.00189209},
			{9914.01,12107.2,0.00152588},
			{9963.53,12267.5,0.0012207},
			{9912.25,11994.9,0.00149536},
			{10143.9,12010.2,0.00164795}
		};
	};

	class mission
	{
		class east_1
		{
			positions[]=
			{
				{{6820.75,7323.23,0.00143886}, 128.956},
				{{6845.7,7262.99,0.00144053}, 34.6326},
				{{13298.2,11995.7,0.00143886}, 114.663},
				{{14061.8,12207,0.00143886}, 147.692},
				{{11807.9,13083.5,0.00143909}, 102.569},
				{{5271.75,10027.1,0.00143886}, 359.438}
			};
		};
		class west_1: east_1 {};
		class guer_1: east_1 {};

		class reb_1
		{
			positions[]=
			{
				{{2520.13,9279.53,0.00119781},356.961},
				{{3645.99,9539.34,0.00161362},46.6127},
				{{3578.95,9084.37,0.00143051},32.6012},
				{{4037.02,9090.67,0.00135231},45.3719},
				{{5799.14,12992.6,0.0014143},282.974},
				{{5880.95,13075.9,0.00153637},62.874},
				{{5304.57,14480.5,0.00149012},129.926},
				{{5529.74,14535.8,0.00167322},126.317},
				{{7791.72,14825.3,0.00128937},82.0768},
				{{8093.14,14819.5,-0.204538},244.784},
				{{7948.93,14940.3,0.00137052},351.922},
				{{10529.7,14602.9,0.0017122},255.219},
				{{11243.6,14533.2,0.00168276},272.314},
				{{11522.1,14356.2,0.00135088},66.8374},
				{{12864.6,5448.41,0.00158596},263.807},
				{{13409.9,5191.95,0.00161362},266.665},
				{{8870.03,1133.24,0.000878334},358.017},
				{{8363.41,1284.3,0.00184631},232.859},
				{{8301.42,1130.7,0.00193357},131.691},
				{{5620.4,1989.59,0.00172424},314.369},
				{{5401.67,1874.93,0.00186729},62.4257},
				{{4719.29,1404.99,0.0016613},123.903},
				{{4813.72,1425.16,0.00150299},122.81},
				{{2267.8,1653.96,0.00150347},78.1164},
				{{1597.93,920.289,0.00141573},312.436},
				{{1337.3,2619.58,0.00151062},329.16},
				{{897.39,11294.1,0.00147057},80.7956},
				{{2809.96,8698.59,0.00162005},233.432},
				{{2604.86,8177.57,0.00146079},236.737},
				{{4623.21,7967.73,0.00141668},216.518},
				{{4601.52,7476.1,0.00143886},312.144},
				{{6537.74,6274.67,0.00127029},106.486}
			};
		};
		class reb_2: reb_1 {};
	};
};
