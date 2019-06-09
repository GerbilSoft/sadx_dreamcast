#pragma once

#pragma warning(push)
#pragma warning(disable: 4267 4838)

HMODULE Chaos0 = GetModuleHandle(L"BOSSCHAOS0MODELS");

NJS_MATERIAL* ChaosMaterials[] = {
	//Final cutscene
	((NJS_MATERIAL*)0x02C65E64),
	((NJS_MATERIAL*)0x02C61D30),
	((NJS_MATERIAL*)0x02C61D44),
	((NJS_MATERIAL*)0x02C615F8),
	((NJS_MATERIAL*)0x02C6160C),
	((NJS_MATERIAL*)0x02C60F30),
	((NJS_MATERIAL*)0x02C607E4),
	((NJS_MATERIAL*)0x02C607F8),
	((NJS_MATERIAL*)0x02C6080C),
	((NJS_MATERIAL*)0x02C60408),
	((NJS_MATERIAL*)0x02C600D8),
	((NJS_MATERIAL*)0x02C5F8EC),
	((NJS_MATERIAL*)0x02C5F64C),
	((NJS_MATERIAL*)0x02C5F264),
	((NJS_MATERIAL*)0x02C5EEF0),
	((NJS_MATERIAL*)0x02C5EBC0),
	((NJS_MATERIAL*)0x02C5E3D4),
	((NJS_MATERIAL*)0x02C5E134),
	((NJS_MATERIAL*)0x02C5DD4C),
	((NJS_MATERIAL*)0x02C5C904),
	((NJS_MATERIAL*)0x02C5C228),
	((NJS_MATERIAL*)0x02C5BF34),
	((NJS_MATERIAL*)0x02C5B8EC),
	((NJS_MATERIAL*)0x02C5B648),
	((NJS_MATERIAL*)0x02C5B3D8),
	((NJS_MATERIAL*)0x02C5AB28),
	((NJS_MATERIAL*)0x02C5A834),
	((NJS_MATERIAL*)0x02C5A1EC),
	((NJS_MATERIAL*)0x02C59F48),
	((NJS_MATERIAL*)0x02C59CD8),
	//Egg Hornet eggmobile part
	((NJS_MATERIAL*)0x0155EDA0),
	((NJS_MATERIAL*)0x0155EDB4),
	((NJS_MATERIAL*)0x0155EDC8),
	((NJS_MATERIAL*)0x0155EDDC),
	((NJS_MATERIAL*)0x0155EDF0),
	((NJS_MATERIAL*)0x0155EE04),
	((NJS_MATERIAL*)0x0155EE18),
	((NJS_MATERIAL*)0x0155EE2C),
	((NJS_MATERIAL*)0x0155EE40),
	((NJS_MATERIAL*)0x0155EE54),
	((NJS_MATERIAL*)0x0155EE68),
	((NJS_MATERIAL*)0x0155EE7C),
	((NJS_MATERIAL*)0x0155EE90),
	((NJS_MATERIAL*)0x0155EEA4),
	((NJS_MATERIAL*)0x0155EEB8),
	((NJS_MATERIAL*)0x0155EECC),
	((NJS_MATERIAL*)0x0155EEE0),
	((NJS_MATERIAL*)0x0155EEF4),
	((NJS_MATERIAL*)0x0155EF08),
	((NJS_MATERIAL*)0x0155EF1C),
	((NJS_MATERIAL*)0x0155EF30),
	//Egg Hornet event model
	((NJS_MATERIAL*)0x03303B68),
	((NJS_MATERIAL*)0x03303B7C),
	((NJS_MATERIAL*)0x03303B90),
	((NJS_MATERIAL*)0x03303BA4),
	((NJS_MATERIAL*)0x03303BB8),
	((NJS_MATERIAL*)0x03303BCC),
	((NJS_MATERIAL*)0x03303BE0),
	((NJS_MATERIAL*)0x03303BF4),
	((NJS_MATERIAL*)0x03303C08),
	((NJS_MATERIAL*)0x03303C1C),
	((NJS_MATERIAL*)0x03303C30),
	((NJS_MATERIAL*)0x03303C44),
	((NJS_MATERIAL*)0x03303C58),
	((NJS_MATERIAL*)0x03303C6C),
	((NJS_MATERIAL*)0x03303C80),
	((NJS_MATERIAL*)0x03303C94),
	((NJS_MATERIAL*)0x03303CA8),
	((NJS_MATERIAL*)0x03303CBC),
	((NJS_MATERIAL*)0x03303CD0),
	((NJS_MATERIAL*)0x03303CE4),
	((NJS_MATERIAL*)0x03303CF8),
	((NJS_MATERIAL*)0x03303898),
	((NJS_MATERIAL*)0x033038AC),
	((NJS_MATERIAL*)0x03302C30),
	((NJS_MATERIAL*)0x03302C44),
	((NJS_MATERIAL*)0x03302630),
	((NJS_MATERIAL*)0x03302644),
	((NJS_MATERIAL*)0x03302658),
	((NJS_MATERIAL*)0x0330266C),
	((NJS_MATERIAL*)0x03302680),
	((NJS_MATERIAL*)0x03302694),
	((NJS_MATERIAL*)0x03302394),
	((NJS_MATERIAL*)0x033023A8),
	((NJS_MATERIAL*)0x033020C8),
	((NJS_MATERIAL*)0x033020DC),
	((NJS_MATERIAL*)0x03301460),
	((NJS_MATERIAL*)0x03301474),
	((NJS_MATERIAL*)0x03300E60),
	((NJS_MATERIAL*)0x03300E74),
	((NJS_MATERIAL*)0x03300E88),
	((NJS_MATERIAL*)0x03300E9C),
	((NJS_MATERIAL*)0x03300EB0),
	((NJS_MATERIAL*)0x03300EC4),
	((NJS_MATERIAL*)0x03300BC8),
	((NJS_MATERIAL*)0x03300BDC),
	((NJS_MATERIAL*)0x03300778),
	((NJS_MATERIAL*)0x0330078C),
	((NJS_MATERIAL*)0x033007A0),
	((NJS_MATERIAL*)0x033007B4),
	((NJS_MATERIAL*)0x033007C8),
	((NJS_MATERIAL*)0x03300150),
	((NJS_MATERIAL*)0x03300164),
	((NJS_MATERIAL*)0x03300178),
	((NJS_MATERIAL*)0x0330018C),
	((NJS_MATERIAL*)0x033001A0),
	((NJS_MATERIAL*)0x032FF9A8),
	//Chaos 2
	((NJS_MATERIAL*)0x01132B88),
	((NJS_MATERIAL*)0x01132718),
	((NJS_MATERIAL*)0x011324D4),
	((NJS_MATERIAL*)0x011320DC),
	((NJS_MATERIAL*)0x01131EAC),
	((NJS_MATERIAL*)0x01131AB8),
	((NJS_MATERIAL*)0x01131648),
	((NJS_MATERIAL*)0x01131404),
	((NJS_MATERIAL*)0x0113100C),
	((NJS_MATERIAL*)0x01130DDC),
	((NJS_MATERIAL*)0x011309EC),
	((NJS_MATERIAL*)0x0112F2E0),
	((NJS_MATERIAL*)0x0112ED08),
	((NJS_MATERIAL*)0x0112EAA0),
	((NJS_MATERIAL*)0x0112E5B8),
	((NJS_MATERIAL*)0x0112E0D0),
	((NJS_MATERIAL*)0x0112DAB8),
	((NJS_MATERIAL*)0x0112D5D0),
	((NJS_MATERIAL*)0x0112D0E8),
	((NJS_MATERIAL*)0x0112CC00),
	((NJS_MATERIAL*)0x0112C718),
	((NJS_MATERIAL*)0x0112C560),
	((NJS_MATERIAL*)0x0112C3AC),
	((NJS_MATERIAL*)0x0112BAA0),
	((NJS_MATERIAL*)0x0112B5B8),
	((NJS_MATERIAL*)0x0112B1D8),
	((NJS_MATERIAL*)0x0112ACF4),
	((NJS_MATERIAL*)0x0112A820),
	((NJS_MATERIAL*)0x0112A248),
	((NJS_MATERIAL*)0x01129FE0),
	((NJS_MATERIAL*)0x01129AF8),
	((NJS_MATERIAL*)0x01129610),
	((NJS_MATERIAL*)0x01128FF8),
	((NJS_MATERIAL*)0x01128B10),
	((NJS_MATERIAL*)0x01128628),
	((NJS_MATERIAL*)0x01128140),
	((NJS_MATERIAL*)0x01127C58),
	((NJS_MATERIAL*)0x01127AA0),
	((NJS_MATERIAL*)0x011278EC),
	((NJS_MATERIAL*)0x01126FE0),
	((NJS_MATERIAL*)0x01126AF8),
	((NJS_MATERIAL*)0x01126718),
	((NJS_MATERIAL*)0x01126234),
	((NJS_MATERIAL*)0x01125D64),
	((NJS_MATERIAL*)0x011235B8),
	((NJS_MATERIAL*)0x011235CC),
	((NJS_MATERIAL*)0x01122DA0),
	((NJS_MATERIAL*)0x011226D8),
	((NJS_MATERIAL*)0x011224F0),
	((NJS_MATERIAL*)0x01121F18),
	((NJS_MATERIAL*)0x01121BE0),
	//Chaos 4 main
	((NJS_MATERIAL*)0x0119D0FC),
	((NJS_MATERIAL*)0x0119B210),
	((NJS_MATERIAL*)0x0119B224),
	((NJS_MATERIAL*)0x0119ACA0),
	((NJS_MATERIAL*)0x0119A600),
	((NJS_MATERIAL*)0x0119A614),
	((NJS_MATERIAL*)0x0119A010),
	((NJS_MATERIAL*)0x01199D28),
	((NJS_MATERIAL*)0x011997B8),
	((NJS_MATERIAL*)0x01199380),
	((NJS_MATERIAL*)0x01198F4C),
	((NJS_MATERIAL*)0x01198B00),
	((NJS_MATERIAL*)0x011986C8),
	((NJS_MATERIAL*)0x01198468),
	((NJS_MATERIAL*)0x01198030),
	((NJS_MATERIAL*)0x01197DD0),
	((NJS_MATERIAL*)0x011975E8),
	((NJS_MATERIAL*)0x01197430),
	((NJS_MATERIAL*)0x011972B0),
	((NJS_MATERIAL*)0x011970F8),
	((NJS_MATERIAL*)0x01196F78),
	((NJS_MATERIAL*)0x01196254),
	((NJS_MATERIAL*)0x011958D0),
	((NJS_MATERIAL*)0x011953B8),
	((NJS_MATERIAL*)0x01195200),
	((NJS_MATERIAL*)0x01195080),
	((NJS_MATERIAL*)0x01194B68),
	((NJS_MATERIAL*)0x01194700),
	((NJS_MATERIAL*)0x011942C8),
	((NJS_MATERIAL*)0x01193EE0),
	((NJS_MATERIAL*)0x01193B4C),
	((NJS_MATERIAL*)0x01193734),
	((NJS_MATERIAL*)0x01192DB0),
	((NJS_MATERIAL*)0x01192898),
	((NJS_MATERIAL*)0x011926E0),
	((NJS_MATERIAL*)0x01192560),
	((NJS_MATERIAL*)0x01192048),
	((NJS_MATERIAL*)0x01191BD0),
	((NJS_MATERIAL*)0x01191798),
	((NJS_MATERIAL*)0x011913E0),
	((NJS_MATERIAL*)0x0119104C),
	((NJS_MATERIAL*)0x01190C30),
	//Chaos 4 cutscenes
	((NJS_MATERIAL*)0x0302EB6C),
	((NJS_MATERIAL*)0x0302CB80),
	((NJS_MATERIAL*)0x0302CB94),
	((NJS_MATERIAL*)0x0302C610),
	((NJS_MATERIAL*)0x0302BF70),
	((NJS_MATERIAL*)0x0302BF84),
	((NJS_MATERIAL*)0x0302B980),
	((NJS_MATERIAL*)0x0302B680),
	((NJS_MATERIAL*)0x0302B110),
	((NJS_MATERIAL*)0x0302ACD8),
	((NJS_MATERIAL*)0x0302A8A4),
	((NJS_MATERIAL*)0x0302A420),
	((NJS_MATERIAL*)0x03029FE8),
	((NJS_MATERIAL*)0x03029D88),
	((NJS_MATERIAL*)0x03029950),
	((NJS_MATERIAL*)0x030296F0),
	((NJS_MATERIAL*)0x03028F08),
	((NJS_MATERIAL*)0x03028D50),
	((NJS_MATERIAL*)0x03028BD0),
	((NJS_MATERIAL*)0x03028A18),
	((NJS_MATERIAL*)0x03028898),
	((NJS_MATERIAL*)0x03027A4C),
	((NJS_MATERIAL*)0x030270C8),
	((NJS_MATERIAL*)0x03026BB0),
	((NJS_MATERIAL*)0x030269F8),
	((NJS_MATERIAL*)0x03026878),
	((NJS_MATERIAL*)0x03026360),
	((NJS_MATERIAL*)0x03025EF8),
	((NJS_MATERIAL*)0x03025AC0),
	((NJS_MATERIAL*)0x030256D8),
	((NJS_MATERIAL*)0x03025344),
	((NJS_MATERIAL*)0x03024F0C),
	((NJS_MATERIAL*)0x03024588),
	((NJS_MATERIAL*)0x03024070),
	((NJS_MATERIAL*)0x03023EB8),
	((NJS_MATERIAL*)0x03023D38),
	((NJS_MATERIAL*)0x03023820),
	((NJS_MATERIAL*)0x03023388),
	((NJS_MATERIAL*)0x03022F50),
	((NJS_MATERIAL*)0x03022B98),
	((NJS_MATERIAL*)0x03022804),
	((NJS_MATERIAL*)0x030223D0),
	//Chaos puddle
	((NJS_MATERIAL*)0x02D64FD8), //Chaos 2
	((NJS_MATERIAL*)0x038D936C), //Chaos 0
	 //Chaos 6
	((NJS_MATERIAL*)0x01271BCC),
	((NJS_MATERIAL*)0x01271BE0),
	((NJS_MATERIAL*)0x012718D4),
	((NJS_MATERIAL*)0x01270910),
	((NJS_MATERIAL*)0x01270924),
	((NJS_MATERIAL*)0x01270938),
	((NJS_MATERIAL*)0x0127094C),
	((NJS_MATERIAL*)0x01270700),
	((NJS_MATERIAL*)0x012704E0),
	((NJS_MATERIAL*)0x012702C0),
	((NJS_MATERIAL*)0x012700A4),
	((NJS_MATERIAL*)0x0126FE60),
	((NJS_MATERIAL*)0x0126FBE8),
	((NJS_MATERIAL*)0x0126F970),
	((NJS_MATERIAL*)0x0126F6F4),
	((NJS_MATERIAL*)0x0126F174),
	((NJS_MATERIAL*)0x0126EB68),
	((NJS_MATERIAL*)0x0126E6EC),
	((NJS_MATERIAL*)0x0126E20C),
	((NJS_MATERIAL*)0x0126DC00),
	((NJS_MATERIAL*)0x0126D778),
	((NJS_MATERIAL*)0x0126D298),
	((NJS_MATERIAL*)0x0126CA44),
	((NJS_MATERIAL*)0x0126C51C),
	((NJS_MATERIAL*)0x0126C530),
	((NJS_MATERIAL*)0x0126C220),
	((NJS_MATERIAL*)0x0126BDBC),
	((NJS_MATERIAL*)0x0126BAE0),
	((NJS_MATERIAL*)0x0126B684),
	((NJS_MATERIAL*)0x0126B378),
	((NJS_MATERIAL*)0x0126AF14),
	((NJS_MATERIAL*)0x0126AC60),
	((NJS_MATERIAL*)0x0126A7FC),
	((NJS_MATERIAL*)0x0126A51C),
	((NJS_MATERIAL*)0x0126A000),
	((NJS_MATERIAL*)0x01269CF4),
	((NJS_MATERIAL*)0x01269800),
	((NJS_MATERIAL*)0x012694F0),
	((NJS_MATERIAL*)0x01268D80),
	((NJS_MATERIAL*)0x01267EB4),
	((NJS_MATERIAL*)0x012677A0),
	((NJS_MATERIAL*)0x012672E0),
	((NJS_MATERIAL*)0x01266BA4),
	((NJS_MATERIAL*)0x01266968),
	((NJS_MATERIAL*)0x01266488),
	((NJS_MATERIAL*)0x01265F74),
	((NJS_MATERIAL*)0x01265890),
	((NJS_MATERIAL*)0x012653D0),
	((NJS_MATERIAL*)0x01264C9C),
	((NJS_MATERIAL*)0x01264A58),
	((NJS_MATERIAL*)0x012645D0),
	((NJS_MATERIAL*)0x012640B8),
	((NJS_MATERIAL*)0x0126391C),
	((NJS_MATERIAL*)0x012633C4),
	((NJS_MATERIAL*)0x01263064),
	((NJS_MATERIAL*)0x01262B88),
	//Chaos6 transforming
		((NJS_MATERIAL*)0x01288360),
		((NJS_MATERIAL*)0x01287E10),
		((NJS_MATERIAL*)0x012878E8),
		((NJS_MATERIAL*)0x01287340),
		((NJS_MATERIAL*)0x01286DEC),
		((NJS_MATERIAL*)0x01285FE4),
		((NJS_MATERIAL*)0x01284F6C),
		((NJS_MATERIAL*)0x01284944),
		((NJS_MATERIAL*)0x01284344),
		((NJS_MATERIAL*)0x01283DA4),
		((NJS_MATERIAL*)0x01283804),
		((NJS_MATERIAL*)0x01283264),
		((NJS_MATERIAL*)0x01282CC4),
		((NJS_MATERIAL*)0x01282724),
		((NJS_MATERIAL*)0x01282184),
		((NJS_MATERIAL*)0x012817AC),
		((NJS_MATERIAL*)0x012812FC),
		((NJS_MATERIAL*)0x01280FC0),
		((NJS_MATERIAL*)0x01280AB0),
		//Chaos6 transformed
		((NJS_MATERIAL*)0x01293990),
		((NJS_MATERIAL*)0x01293528),
		((NJS_MATERIAL*)0x01292ED8),
		((NJS_MATERIAL*)0x01292C20),
		((NJS_MATERIAL*)0x01292968),
		((NJS_MATERIAL*)0x012926B0),
		((NJS_MATERIAL*)0x012923F8),
		((NJS_MATERIAL*)0x01292140),
		((NJS_MATERIAL*)0x01291E88),
		((NJS_MATERIAL*)0x01291400),
		((NJS_MATERIAL*)0x01290E54),
		((NJS_MATERIAL*)0x012909A8),
		((NJS_MATERIAL*)0x01290408),
		((NJS_MATERIAL*)0x01290114),
		((NJS_MATERIAL*)0x0128FC78),
		((NJS_MATERIAL*)0x0128F640),
		((NJS_MATERIAL*)0x0128F008),
		((NJS_MATERIAL*)0x0128E9D0),
		((NJS_MATERIAL*)0x0128E398),
		((NJS_MATERIAL*)0x0128DD60),
		((NJS_MATERIAL*)0x0128D728),
		((NJS_MATERIAL*)0x0128D4E4),
		((NJS_MATERIAL*)0x0128C42C),
		((NJS_MATERIAL*)0x0128C440),
		((NJS_MATERIAL*)0x0128C194),
		((NJS_MATERIAL*)0x0128BF4C),
		((NJS_MATERIAL*)0x0128BCB4),
		((NJS_MATERIAL*)0x0128BA6C),
		((NJS_MATERIAL*)0x0128B7F4),
		((NJS_MATERIAL*)0x0128B5AC),
		((NJS_MATERIAL*)0x0128B314),
		((NJS_MATERIAL*)0x0128B0CC),
		((NJS_MATERIAL*)0x0128AE34),
		((NJS_MATERIAL*)0x0128ABEC),
		((NJS_MATERIAL*)0x0128A954),
		((NJS_MATERIAL*)0x0128A710),
		//Perfect Chaos main
		((NJS_MATERIAL*)0x013974D0),
		((NJS_MATERIAL*)0x01396AB0),
		((NJS_MATERIAL*)0x01396AC4),
		((NJS_MATERIAL*)0x01396AD8),
		((NJS_MATERIAL*)0x01396AEC),
		((NJS_MATERIAL*)0x01395C64),
		((NJS_MATERIAL*)0x01395C78),
		((NJS_MATERIAL*)0x01395920),
		((NJS_MATERIAL*)0x01395934),
		((NJS_MATERIAL*)0x0139557C),
		((NJS_MATERIAL*)0x01395238),
		((NJS_MATERIAL*)0x0139524C),
		((NJS_MATERIAL*)0x01394E5C),
		((NJS_MATERIAL*)0x01393A70),
		((NJS_MATERIAL*)0x01393A84),
		((NJS_MATERIAL*)0x01393A98),
		((NJS_MATERIAL*)0x01393AAC),
		((NJS_MATERIAL*)0x01393158),
		((NJS_MATERIAL*)0x0139316C),
		((NJS_MATERIAL*)0x01392D30),
		((NJS_MATERIAL*)0x01392D44),
		((NJS_MATERIAL*)0x01392908),
		((NJS_MATERIAL*)0x0139291C),
		((NJS_MATERIAL*)0x013924E0),
		((NJS_MATERIAL*)0x013924F4),
		((NJS_MATERIAL*)0x013920B8),
		((NJS_MATERIAL*)0x013920CC),
		((NJS_MATERIAL*)0x013915D0),
		((NJS_MATERIAL*)0x01390EA8),
		((NJS_MATERIAL*)0x0138F6F8),
		((NJS_MATERIAL*)0x0138F330),
		((NJS_MATERIAL*)0x0138F344),
		((NJS_MATERIAL*)0x0138F150),
		((NJS_MATERIAL*)0x0138EF70),
		((NJS_MATERIAL*)0x0138DE90),
		((NJS_MATERIAL*)0x0138DEA4),
		((NJS_MATERIAL*)0x0138DEB8),
		((NJS_MATERIAL*)0x0138D7E8),
		((NJS_MATERIAL*)0x0138CB90),
		((NJS_MATERIAL*)0x0138CBA4),
		((NJS_MATERIAL*)0x0138C250),
		((NJS_MATERIAL*)0x0138BC50),
		((NJS_MATERIAL*)0x0138BC64),
		((NJS_MATERIAL*)0x0138B248),
		((NJS_MATERIAL*)0x0138AFF0),
		((NJS_MATERIAL*)0x0138A080),
		((NJS_MATERIAL*)0x01389D60),
		((NJS_MATERIAL*)0x01389A98),
		((NJS_MATERIAL*)0x01389630),
		((NJS_MATERIAL*)0x01389644),
		((NJS_MATERIAL*)0x01389368),
		((NJS_MATERIAL*)0x013890A0),
		((NJS_MATERIAL*)0x01388E7C),
		((NJS_MATERIAL*)0x01388B0C),
		((NJS_MATERIAL*)0x01388B20),
		((NJS_MATERIAL*)0x013887CC),
		((NJS_MATERIAL*)0x01388458),
		((NJS_MATERIAL*)0x01388098),
		((NJS_MATERIAL*)0x01387E74),
		((NJS_MATERIAL*)0x01387B04),
		((NJS_MATERIAL*)0x01387B18),
		((NJS_MATERIAL*)0x013877D4),
		((NJS_MATERIAL*)0x013874D0),
		((NJS_MATERIAL*)0x01387168),
		//Perfect Chaos sinking/rising
		((NJS_MATERIAL*)0x01398C98),
		((NJS_MATERIAL*)0x01398CAC),
		((NJS_MATERIAL*)0x01398CC0),
		((NJS_MATERIAL*)0x01398CD4),
		((NJS_MATERIAL*)0x01398CE8),
		((NJS_MATERIAL*)0x01398CFC),
		((NJS_MATERIAL*)0x013975B0),
		((NJS_MATERIAL*)0x013975C4),
		((NJS_MATERIAL*)0x013975D8),
};

NJS_MATERIAL* Chaos6ObjectMaterials[] = {
	//E101
	((NJS_MATERIAL*)0x014DDB58),
	((NJS_MATERIAL*)0x014DDB6C),
	((NJS_MATERIAL*)0x014DDB80),
	((NJS_MATERIAL*)0x014DD9D0),
	((NJS_MATERIAL*)0x014DD704),
	((NJS_MATERIAL*)0x014DD718),
	((NJS_MATERIAL*)0x014DD4D8),
	((NJS_MATERIAL*)0x014DD4EC),
	((NJS_MATERIAL*)0x014DD1A8),
	((NJS_MATERIAL*)0x014DD1BC),
	((NJS_MATERIAL*)0x014DD1D0),
	((NJS_MATERIAL*)0x014DD018),
	((NJS_MATERIAL*)0x014DCD60),
	((NJS_MATERIAL*)0x014DCD74),
	((NJS_MATERIAL*)0x014DC910),
	((NJS_MATERIAL*)0x014DC924),
	((NJS_MATERIAL*)0x014DC938),
	((NJS_MATERIAL*)0x014DC788),
	((NJS_MATERIAL*)0x014DC4BC),
	((NJS_MATERIAL*)0x014DC4D0),
	((NJS_MATERIAL*)0x014DC290),
	((NJS_MATERIAL*)0x014DC2A4),
	((NJS_MATERIAL*)0x014DBF60),
	((NJS_MATERIAL*)0x014DBF74),
	((NJS_MATERIAL*)0x014DBF88),
	((NJS_MATERIAL*)0x014DBDD0),
	((NJS_MATERIAL*)0x014DBB14),
	((NJS_MATERIAL*)0x014DBB28),
	((NJS_MATERIAL*)0x014DAC88),
	((NJS_MATERIAL*)0x014DAC9C),
	((NJS_MATERIAL*)0x014DACB0),
	((NJS_MATERIAL*)0x014DACC4),
	((NJS_MATERIAL*)0x014DACD8),
	((NJS_MATERIAL*)0x014DACEC),
	((NJS_MATERIAL*)0x014DAD00),
	((NJS_MATERIAL*)0x014DA548),
	((NJS_MATERIAL*)0x014DA55C),
	((NJS_MATERIAL*)0x014DA570),
	((NJS_MATERIAL*)0x014DA584),
	((NJS_MATERIAL*)0x014DA598),
	((NJS_MATERIAL*)0x014DA290),
	((NJS_MATERIAL*)0x014DA0FC),
	((NJS_MATERIAL*)0x014D99C0),
	((NJS_MATERIAL*)0x014D99D4),
	((NJS_MATERIAL*)0x014D99E8),
	((NJS_MATERIAL*)0x014D99FC),
	((NJS_MATERIAL*)0x014D9A10),
	((NJS_MATERIAL*)0x014D96A0),
	((NJS_MATERIAL*)0x014D950C),
	((NJS_MATERIAL*)0x014D88B0),
	((NJS_MATERIAL*)0x014D88C4),
	((NJS_MATERIAL*)0x014D88D8),
	((NJS_MATERIAL*)0x014D88EC),
	((NJS_MATERIAL*)0x014D8900),
	((NJS_MATERIAL*)0x014D8914),
	((NJS_MATERIAL*)0x014D8928),
	((NJS_MATERIAL*)0x014D893C),
	((NJS_MATERIAL*)0x014D85B0),
	((NJS_MATERIAL*)0x014D85C4),
	((NJS_MATERIAL*)0x014D8184),
	((NJS_MATERIAL*)0x014D8198),
	((NJS_MATERIAL*)0x014D81AC),
	((NJS_MATERIAL*)0x014D79F4),
	((NJS_MATERIAL*)0x014D67B0),
	((NJS_MATERIAL*)0x014D67C4),
	((NJS_MATERIAL*)0x014D67D8),
	((NJS_MATERIAL*)0x014D67EC),
	((NJS_MATERIAL*)0x014D6800),
	((NJS_MATERIAL*)0x014D6538),
	((NJS_MATERIAL*)0x014D654C),
	((NJS_MATERIAL*)0x014D6128),
	((NJS_MATERIAL*)0x014D613C),
	((NJS_MATERIAL*)0x014D6150),
	((NJS_MATERIAL*)0x014D6164),
	((NJS_MATERIAL*)0x014D5EB0),
	//Lilypad
	((NJS_MATERIAL*)0x011E2C00),
	((NJS_MATERIAL*)0x011E2C14),
	//Chandelier
	((NJS_MATERIAL*)0x0117C940),
	((NJS_MATERIAL*)0x0117C954),
	((NJS_MATERIAL*)0x0117C968),
	((NJS_MATERIAL*)0x0117C97C),
	((NJS_MATERIAL*)0x0117C990),
	((NJS_MATERIAL*)0x0117C9A4),
	((NJS_MATERIAL*)0x0117C9B8),
	((NJS_MATERIAL*)0x0117C9CC),
};

#pragma warning(pop)
