// RBotFirmware
// Rob Dobson 2016-2018

#include "RobotConfigurations.h"

const char *RobotConfigurations::_robotConfigs[] = {

// Living Room Scara Sand Table

"{\"robotType\":\"CoffeeTableSCARA\",\"cmdsAtStart\":\"\",\"webui\":\"cnc\",\"evaluators\":{\"thrContinue\":0},\"robotGeom\":{\"model\":\"SingleArmScara\",\"motionController\":{\"chip\":\"TMC2208\",\"TX1\":\"32\",\"TX2\":\"33\",\"driver_TOFF\":5,\"run_current\":600,\"microsteps\":16,\"stealthChop\":1},\"homing\":{\"homingSeq\":\"A-10000n;B10000;#;A+10000N;B-10000;#;A+20;B-20;#;B+10000n;#;B-10000N;#;B400;#;A=h;B=h;$\",\"maxHomingSecs\":120},\"blockDistanceMM\":1,\"allowOutOfBounds\":0,\"stepEnablePin\":\"25\",\"stepEnLev\":0,\"stepDisableSecs\":30,\"axis0\":{\"maxSpeed\":30,\"maxAcc\":15,\"maxRPM\":5,\"stepsPerRot\":4800,\"maxVal\":190.5,\"stepPin\":\"27\",\"dirnPin\":\"14\",\"dirnRev\":1,\"endStop0\":{\"sensePin\":\"21\",\"actLvl\":1,\"inputType\":\"INPUT\"}},\"axis1\":{\"maxSpeed\":30,\"maxAcc\":15,\"maxRPM\":5,\"stepsPerRot\":4800,\"maxVal\":190.5,\"stepPin\":\"12\",\"dirnPin\":\"13\",\"dirnRev\":0,\"endStop0\":{\"sensePin\":\"22\",\"actLvl\":1,\"inputType\":\"INPUT\"}}},\"ledStrip\":{\"ledPin\":\"4\",\"ledCount\":\"154\"},\"fileManager\":{\"spiffsEnabled\":1,\"spiffsFormatIfCorrupt\":1,\"sdEnabled\":1,\"sdMOSI\":\"23\",\"sdMISO\":\"19\",\"sdCLK\":\"18\",\"sdCS\":\"5\"}}",
"{\"robotType\":\"TabletopRotary\",\"cmdsAtStart\":\"\",\"webui\":\"cnc\",\"evaluators\":{\"thrContinue\":0},\"robotGeom\":{\"model\":\"SandBotRotary\",\"motionController\":{\"chip\":\"TMC2130\",\"TX1\":32,\"TX2\":33,\"driver_TOFF\":5,\"run_current\":1000,\"microsteps\":16,\"stealthChop\":0},\"homing\":{\"homingSeq\":\"FR5;A+38080n;B+3200;#;A+38080N;B+3200;#;A+230;B+19;#;B-30000N;#;A=h;B=h;$\",\"maxHomingSecs\":120},\"blockDistanceMM\":1,\"allowOutOfBounds\":0,\"stepEnablePin\":\"25\",\"stepEnLev\":0,\"stepDisableSecs\":10,\"axis0\":{\"maxSpeed\":100,\"maxAcc\":150,\"maxRPM\":5,\"stepsPerRot\":38100,\"stepPin\":\"27\",\"dirnPin\":\"14\",\"dirnRev\":\"1\",\"endStop0\":{\"sensePin\":\"22\",\"actLvl\":0,\"inputType\":\"INPUT\"}},\"axis1\":{\"maxSpeed\":1000,\"maxAcc\":150,\"maxRPM\":20,\"stepsPerRot\":3200,\"unitsPerRot\":40.4,\"maxVal\":145.5,\"stepPin\":\"12\",\"dirnRev\":\"1\",\"dirnPin\":\"13\",\"endStop0\":{\"sensePin\":\"21\",\"actLvl\":0,\"inputType\":\"INPUT\"}}},\"fileManager\":{\"spiffsEnabled\":1,\"spiffsFormatIfCorrupt\":1,\"sdEnabled\":1,\"sdMOSI\":\"23\",\"sdMISO\":\"19\",\"sdCLK\":\"18\",\"sdCS\":\"5\"},\"ledStrip\":{\"ledPin\":\"4\",\"ledCount\":\"60\",\"tslEnabled\":\"1\",\"tslSDA\":\"16\",\"tslSCL\":\"17\"}}"

// Sand Table Scara Pi Hat 3.6
/*
"{"
" \"robotType\": \"SandTableScaraPiHat3.6\","
" \"cmdsAtStart\": \"\","
" \"webui\":\"sand\","
" \"evaluators\":"
" {"
"   \"thrContinue\": 0"
" }"
" ,"
" \"robotGeom\":"
" {"
"   \"model\": \"SingleArmScara\","
"   \"homing\":"
"   {"
"     \"homingSeq\": \"FR10;A-10000n;B10000;#;A+10000N;B-10000;#;A+500;B-500;#;B+10000n;#;B-10000N;#;B-1050;#;A=h;B=h;$\","
"     \"maxHomingSecs\": 120"
"   }"
"   ,"
"   \"blockDistanceMM\": 1,"
"   \"allowOutOfBounds\": 0,"
"   \"stepEnablePin\": \"21\","
"   \"stepEnLev\": 0,"
"   \"stepDisableSecs\": 10,"
"   \"axis0\":"
"   {"
"     \"maxSpeed\": 50,"
"     \"maxAcc\": 50,"
"     \"maxRPM\": 30,"
"     \"stepsPerRot\": 9600,"
"     \"maxVal\": 92.5,"
"     \"stepPin\": \"27\","
"     \"dirnPin\": \"33\","
"     \"endStop0\":"
"     {"
"       \"sensePin\": \"39\","
"       \"actLvl\": 0,"
"       \"inputType\": \"INPUT_PULLUP\""
"     }"
"   }"
"   ,"
"   \"axis1\":"
"   {"
"     \"maxSpeed\": 50,"
"     \"maxAcc\": 50,"
"     \"maxRPM\": 30,"
"     \"stepsPerRot\": 9600,"
"     \"maxVal\": 92.5,"
"     \"stepPin\": \"12\","
"     \"dirnPin\": \"16\","
"     \"endStop0\":"
"     {"
"       \"sensePin\": \"36\","
"       \"actLvl\": 0,"
"       \"inputType\": \"INPUT_PULLUP\""
"     }"
"   }"
" }"
" ,"
" \"fileManager\":"
" {"
"   \"spiffsEnabled\": 1,"
"   \"spiffsFormatIfCorrupt\": 1,"
"   \"sdEnabled\": 1,"
"   \"sdMOSI\": \"23\","
"   \"sdMISO\": \"19\","
"   \"sdCLK\": \"18\","
"   \"sdCS\": \"4\""
" }"
" ,"
" \"wifiLed\":"
" {"
"   \"hwPin\": \"14\","
"   \"onLevel\": 1,"
"   \"onMs\": 200,"
"   \"shortOffMs\": 200,"
"   \"longOffMs\": 750"
" }"
" ,"
" \"ledStrip\":"
" {"
"   \"ledPin\": \"25\","
"   \"sensorPin\": \"-1\""
" }"
"}"
,

// Sand Table Scara Pi Hat 4

"{"
" \"robotType\": \"SandTableScaraPiHat4\","
" \"cmdsAtStart\": \"\","
" \"webui\":\"sand\","
" \"evaluators\":"
" {"
"   \"thrContinue\": 0"
" }"
" ,"
" \"robotGeom\":"
" {"
"   \"model\": \"SingleArmScara\",\n"
"   \"motionController\":"
"   {"
"     \"chip\":\"TMC5072\","
"     \"MOSI\":\"23\","
"     \"MISO\":\"19\","
"     \"CLK\":\"18\","
"     \"CS1\":\"5\","
"     \"CS2\":\"17\""
"   },\n"
"   \"homing\":"
"   {"
"     \"homingSeq\": \"FR10;A-10000n;B10000;#;A+10000N;B-10000;#;A+500;B-500;#;B+10000n;#;B-10000N;#;B-1050;#;A=h;B=h;$\","
"     \"maxHomingSecs\": 120"
"   }"
"   ,"
"   \"blockDistanceMM\": 1,"
"   \"allowOutOfBounds\": 0,"
"   \"stepEnablePin\": \"21\","
"   \"stepEnLev\": 0,"
"   \"stepDisableSecs\": 10,\n"
"   \"axis0\":"
"   {"
"     \"maxSpeed\": 50,"
"     \"maxAcc\": 50,"
"     \"maxRPM\": 30,"
"     \"stepsPerRot\": 9600,"
"     \"unitsPerRot\": 628.318,"
"     \"maxRPM\": 60,"
"     \"maxVal\": 92.5,"
"     \"ctrlElem\": 0,"
"     \"endStop0\":"
"     {"
"       \"sensePin\": \"36\","
"       \"actLvl\": 0,"
"       \"inputType\": \"INPUT_PULLUP\""
"     }"
"   }"
"   ,\n"
"   \"axis1\":"
"   {"
"     \"maxSpeed\": 50,"
"     \"maxAcc\": 50,"
"     \"maxRPM\": 30,"
"     \"stepsPerRot\": 9600,"
"     \"unitsPerRot\": 628.318,"
"     \"maxRPM\": 60,"
"     \"maxVal\": 92.5,"
"     \"ctrlElem\": 1,"
"     \"endStop0\":"
"     {"
"       \"sensePin\": \"39\","
"       \"actLvl\": 0,"
"       \"inputType\": \"INPUT_PULLUP\""
"     }"
"   }"
" }"
" ,\n"
" \"fileManager\":"
" {"
"   \"spiffsEnabled\": 1,"
"   \"spiffsFormatIfCorrupt\": 1"
" }"
" ,\n"
" \"wifiLed\":"
" {"
"   \"hwPin\": \"14\","
"   \"onLevel\": 1,"
"   \"onMs\": 200,"
"   \"shortOffMs\": 200,"
"   \"longOffMs\": 750"
" }"
"}"
,

// Sand Table Scara Matt

"{"
" \"robotType\": \"SandTableScaraMatt\","
" \"cmdsAtStart\": \"\","
" \"webui\":\"sand\","
" \"evaluators\":"
" {"
"   \"thrContinue\": 0"
" }"
" ,"
" \"robotGeom\":"
" {"
"   \"model\": \"SingleArmScara\","
"   \"homing\":"
"   {"
"     \"homingSeq\":\"FR3;A-10000N;B+10000;#;A-10000n;B+10000;#;A+460;B-460;#;B-10000N;#;B-10000n;#;B+850;#;A=h;B=h;$\","
"     \"maxHomingSecs\": 120"
"   }"
"   ,"
"   \"blockDistanceMM\": 1,"
"   \"allowOutOfBounds\": 0,"
"   \"stepEnablePin\": \"12\","
"   \"stepEnLev\": 0,"
"   \"stepDisableSecs\": 10,"
"   \"axis0\":"
"   {"
"     \"maxSpeed\": 25,"
"     \"maxAcc\": 50,"
"     \"maxRPM\": 20,"
"     \"stepsPerRot\": 9600,"
"     \"unitsPerRot\": 628.318,"
"     \"maxVal\": 190,"
"     \"stepPin\": \"14\","
"     \"dirnPin\": \"32\","
"     \"endStop0\":"
"     {"
"       \"sensePin\": \"36\","
"       \"actLvl\": 0,"
"       \"inputType\": \"INPUT_PULLUP\""
"     }"
"   }"
"   ,"
"   \"axis1\":"
"   {"
"     \"maxSpeed\": 25,"
"     \"maxAcc\": 50,"
"     \"stepsPerRot\": 9600,"
"     \"unitsPerRot\": 628.318,"
"     \"maxRPM\": 20,"
"     \"maxVal\": 190,"
"     \"stepPin\": \"33\","
"     \"dirnPin\": \"15\","
"     \"endStop0\":"
"     {"
"       \"sensePin\": \"39\","
"       \"actLvl\": 0,"
"       \"inputType\": \"INPUT_PULLUP\""
"     }"
"   }"
" }"
" ,"
" \"fileManager\":"
" {"
"   \"spiffsEnabled\": 1,"
"   \"spiffsFormatIfCorrupt\": 1,"
"   \"sdEnabled\": 1,"
"   \"sdMOSI\": \"18\","
"   \"sdMISO\": \"19\","
"   \"sdCLK\": \"5\","
"   \"sdCS\": \"21\""
" }"
" ,"
" \"wifiLed\":"
" {"
"   \"hwPin\": \"14\","
"   \"onLevel\": 1,"
"   \"onMs\": 200,"
"   \"shortOffMs\": 200,"
"   \"longOffMs\": 750"
" }"
" ,"
" \"ledStrip\":"
" {"
"   \"ledPin\": \"4\","
"   \"sensorPin\": \"34\""
" }"
"}"
,

// NEJE Master using Pi Hat 3.6

"{"
" \"robotType\": \"NejeMasterPiHat3.6\","
" \"cmdsAtStart\": \"\","
" \"webui\":\"cnc\","
" \"evaluators\":"
" {"
"   \"thrContinue\": 0"
" }"
" ,"
" \"robotGeom\":"
" {"
"   \"model\": \"XYBot\","
"   \"homing\":"
"   {"
"     \"homingSeq\": \"A-10000n;B-10000;#;A=h;B=h;$\","
"     \"maxHomingSecs\": 10"
"   }"
"   ,"
"   \"blockDistanceMM\": 1,"
"   \"allowOutOfBounds\": 0,"
"   \"stepEnablePin\": \"21\","
"   \"stepEnLev\": 0,"
"   \"stepDisableSecs\": 10,"
"   \"axis0\":"
"   {"
"     \"maxSpeed\": 50,"
"     \"maxAcc\": 50,"
"     \"stepsPerRot\": 3200,"
"     \"unitsPerRot\": 16,"
"     \"maxRPM\": 200,"
"     \"maxVal\": 200,"
"     \"stepPin\": \"27\","
"     \"dirnPin\": \"33\","
"     \"dirnRev\": 1,"
"     \"endStop0\":"
"     {"
"       \"sensePin\": \"39\","
"       \"actLvl\": 0,"
"       \"inputType\": \"INPUT_PULLUP\""
"     }"
"   }"
"   ,"
"   \"axis1\":"
"   {"
"     \"maxSpeed\": 50,"
"     \"maxAcc\": 50,"
"     \"stepsPerRot\": 3200,"
"     \"unitsPerRot\": 16,"
"     \"maxRPM\": 200,"
"     \"maxVal\": 200,"
"     \"stepPin\": \"12\","
"     \"dirnPin\": \"16\","
"     \"dirnRev\": 1,"
"     \"endStop0\":"
"     {"
"       \"sensePin\": \"36\","
"       \"actLvl\": 0,"
"       \"inputType\": \"INPUT_PULLUP\""
"     }"
"   }"
" }"
" ,"
" \"fileManager\":"
" {"
"   \"spiffsEnabled\": 1,"
"   \"spiffsFormatIfCorrupt\": 1,"
"   \"sdEnabled\": 1,"
"   \"sdMOSI\": \"23\","
"   \"sdMISO\": \"19\","
"   \"sdCLK\": \"18\","
"   \"sdCS\": \"4\""
" }"
" ,"
" \"wifiLed\":"
" {"
"   \"hwPin\": \"14\","
"   \"onLevel\": 1,"
"   \"onMs\": 200,"
"   \"shortOffMs\": 200,"
"   \"longOffMs\": 750"
" }"
"}",

// NEJE Master using Pi Hat 3.9

"{"
" \"robotType\": \"NejeMasterPiHat3.9\","
" \"cmdsAtStart\": \"\","
" \"webui\":\"cnc\",\n"
" \"evaluators\":"
" {"
"   \"thrContinue\": 0"
" }"
" ,\n"
" \"robotGeom\":"
" {"
"   \"model\": \"XYBot\","
"   \"homing\":"
"   {"
"     \"homingSeq\": \"A-10000n;B-10000;#;A=h;B=h;$\","
"     \"maxHomingSecs\": 10"
"   }"
"   ,\n"
"   \"motionController\":"
"   {"
"     \"chip\":\"TMC2130\","
"     \"MOSI\":\"33\","
"     \"MISO\":\"5\","
"     \"CLK\":\"16\","
"     \"MUX1\":\"13\","
"     \"MUX2\":\"14\","
"     \"MUX3\":\"15\","
"     \"MUX_CS_1\":0,"
"     \"MUX_CS_2\":1,"
"     \"MUX_CS_3\":2"
"   },\n"
"   \"blockDistanceMM\": 1,"
"   \"allowOutOfBounds\": 0,"
"   \"stepEnablePin\": \"21\","
"   \"stepEnLev\": 0,"
"   \"stepDisableSecs\": 10,\n"
"   \"axis0\":"
"   {"
"     \"maxSpeed\": 50,"
"     \"maxAcc\": 50,"
"     \"stepsPerRot\": 3200,"
"     \"unitsPerRot\": 16,"
"     \"maxRPM\": 200,"
"     \"maxVal\": 200,"
"     \"stepPin\": \"27\","
"     \"muxPin1\": \"13\", \"muxPin2\": \"14\", \"muxPin3\": \"15\", \"muxDirnIdx\": \"5\","
"     \"dirnRev\": 1,"
"     \"endStop0\":"
"     {"
"       \"sensePin\": \"39\","
"       \"actLvl\": 0,"
"       \"inputType\": \"INPUT\""
"     }"
"   }"
"   ,\n"
"   \"axis1\":"
"   {"
"     \"maxSpeed\": 50,"
"     \"maxAcc\": 50,"
"     \"stepsPerRot\": 3200,"
"     \"unitsPerRot\": 16,"
"     \"maxRPM\": 200,"
"     \"maxVal\": 200,"
"     \"stepPin\": \"12\","
"     \"muxPin1\": \"13\", \"muxPin2\": \"14\", \"muxPin3\": \"15\", \"muxDirnIdx\": \"6\","
"     \"dirnRev\": 1,"
"     \"endStop0\":"
"     {"
"       \"sensePin\": \"36\","
"       \"actLvl\": 0,"
"       \"inputType\": \"INPUT\""
"     }"
"   },\n"
"   \"axis1\":"
"   {"
"     \"maxSpeed\": 50,"
"     \"maxAcc\": 50,"
"     \"stepsPerRot\": 3200,"
"     \"unitsPerRot\": 16,"
"     \"maxRPM\": 200,"
"     \"maxVal\": 200,"
"     \"stepPin\": \"22\","
"     \"muxPin1\": \"13\", \"muxPin2\": \"14\", \"muxPin3\": \"15\", \"muxDirnIdx\": \"7\","
"     \"dirnRev\": 1,"
"     \"endStop0\":"
"     {"
"       \"sensePin\": \"35\","
"       \"actLvl\": 0,"
"       \"inputType\": \"INPUT\""
"     }"
"   }\n"
" }"
" ,\n"
" \"fileManager\":"
" {"
"   \"spiffsEnabled\": 1,"
"   \"spiffsFormatIfCorrupt\": 1,"
"   \"sdEnabled\": 1,"
"   \"sdMOSI\": \"23\","
"   \"sdMISO\": \"19\","
"   \"sdCLK\": \"18\","
"   \"sdCS\": \"4\""
" }"
" ,\n"
" \"wifiLed\":"
" {"
"   \"hwPin\": \"25\","
"   \"onLevel\": 1,"
"   \"onMs\": 200,"
"   \"shortOffMs\": 200,"
"   \"longOffMs\": 750"
" }"
"}",

// Neje Master Pi Hat 4

"{"
" \"robotType\": \"NejeMasterPiHat4\","
" \"cmdsAtStart\": \"\","
" \"webui\":\"cnc\","
" \"evaluators\":"
" {"
"   \"thrContinue\": 0"
" }"
" ,"
" \"robotGeom\":"
" {"
"   \"model\": \"XYBot\",\n"
"   \"motionController\":"
"   {"
"     \"chip\":\"TMC5072\","
"     \"MOSI\":\"23\","
"     \"MISO\":\"19\","
"     \"CLK\":\"18\","
"     \"CS1\":\"5\","
"     \"CS2\":\"17\""
"   },\n"
"   \"homing\":"
"   {"
"     \"homingSeq\": \"FR10;A-10000n;B10000;#;A+10000N;B-10000;#;A+500;B-500;#;B+10000n;#;B-10000N;#;B-1050;#;A=h;B=h;$\","
"     \"maxHomingSecs\": 120"
"   }"
"   ,"
"   \"blockDistanceMM\": 1,"
"   \"allowOutOfBounds\": 0,"
"   \"stepEnablePin\": \"21\","
"   \"stepEnLev\": 0,"
"   \"stepDisableSecs\": 10,\n"
"   \"axis0\":"
"   {"
"     \"maxSpeed\": 50,"
"     \"maxAcc\": 50,"
"     \"maxRPM\": 30,"
"     \"stepsPerRot\": 51200,"
"     \"unitsPerRot\": 16,"
"     \"maxRPM\": 60,"
"     \"maxVal\": 92.5,"
"     \"ctrlElem\": 0,"
"     \"endStop0\":"
"     {"
"       \"sensePin\": \"36\","
"       \"actLvl\": 0,"
"       \"inputType\": \"INPUT_PULLUP\""
"     }"
"   }"
"   ,\n"
"   \"axis1\":"
"   {"
"     \"maxSpeed\": 50,"
"     \"maxAcc\": 50,"
"     \"maxRPM\": 30,"
"     \"stepsPerRot\": 51200,"
"     \"unitsPerRot\": 16,"
"     \"maxRPM\": 60,"
"     \"maxVal\": 92.5,"
"     \"ctrlElem\": 1,"
"     \"endStop0\":"
"     {"
"       \"sensePin\": \"39\","
"       \"actLvl\": 0,"
"       \"inputType\": \"INPUT_PULLUP\""
"     }"
"   }"
" }"
" ,\n"
" \"fileManager\":"
" {"
"   \"spiffsEnabled\": 1,"
"   \"spiffsFormatIfCorrupt\": 1"
" }"
" ,\n"
" \"wifiLed\":"
" {"
"   \"hwPin\": \"14\","
"   \"onLevel\": 1,"
"   \"onMs\": 200,"
"   \"shortOffMs\": 200,"
"   \"longOffMs\": 750"
" }"
"}"
,

// XYBot

"{"
" \"robotType\": \"XYBot\","
" \"cmdsAtStart\": \"\","
" \"webui\":\"cnc\","
" \"robotGeom\":"
" {"
"   \"model\": \"Cartesian\","
"   \"blockDistanceMM\": 1,"
"   \"allowOutOfBounds\": 0,"
"   \"stepEnablePin\": \"21\","
"   \"stepEnLev\": 0,"
"   \"stepDisableSecs\": 10,"
"   \"axis0\":"
"   {"
"     \"maxSpeed\": 50,"
"     \"maxAcc\": 50,"
"     \"stepsPerRot\": 3200,"
"     \"unitsPerRot\": 16,"
"     \"maxRPM\": 200,"
"     \"maxVal\": 200,"
"     \"stepPin\": \"27\","
"     \"dirnPin\": \"33\","
"     \"endStop0\":"
"     {"
"       \"sensePin\": \"39\","
"       \"actLvl\": 0,"
"       \"inputType\": \"INPUT_PULLUP\""
"     }"
"   }"
"   ,"
"   \"axis1\":"
"   {"
"     \"maxSpeed\": 50,"
"     \"maxAcc\": 50,"
"     \"stepsPerRot\": 3200,"
"     \"unitsPerRot\": 16,"
"     \"maxRPM\": 200,"
"     \"maxVal\": 200,"
"     \"stepPin\": \"12\","
"     \"dirnPin\": \"16\","
"     \"endStop0\":"
"     {"
"       \"sensePin\": \"36\","
"       \"actLvl\": 0,"
"       \"inputType\": \"INPUT_PULLUP\""
"     }"
"   }"
" }"
" ,"
" \"fileManager\":"
" {"
"   \"spiffsEnabled\": 1,"
"   \"spiffsFormatIfCorrupt\": 1,"
"   \"sdEnabled\": 1,"
"   \"sdMOSI\": \"23\","
"   \"sdMISO\": \"19\","
"   \"sdCLK\": \"18\","
"   \"sdCS\": \"4\""
" }"
" ,"
" \"wifiLed\":"
" {"
"   \"hwPin\": \"14\","
"   \"onLevel\": 1,"
"   \"onMs\": 200,"
"   \"shortOffMs\": 200,"
"   \"longOffMs\": 750"
" }"
"}"

//     "{"
//     "\"robotType\":\"MugBot\","
//     "\"robotGeom\":\"MugBot\","
//     "\"robotBoard\":\"PiHat3\","
//     "\"fileManager\":{\"spiffsEnabled\":1,\"spiffsFormatIfCorrupt\":1,"
//             "\"sdEnabled\":1,\"sdMOSI\":\"23\",\"sdMISO\":\"19\",\"sdCLK\":\"18\",\"sdCS\":\"4\"},"
//     "\"wifiLed\":{\"hwPin\":\"14\",\"onLevel\":1,\"onMs\":200,\"shortOffMs\":200,\"longOffMs\":750},"
//     "\"homingSeq\":\"B-x;B+r9X;B-1.0;B=h$\","
//     "\"cmdsAtStart\":\"\","
//     "\"stepEnablePin\":\"A2\",\"stepEnLev\":1,\"stepDisableSecs\":60.0,"
//     "\"axis0\":{\"stepPin\":\"D2\",\"dirnPin\":\"D3\",\"maxSpeed\":10.0,\"maxAcc\":5.0,"
//     "\"stepsPerRot\":6400,\"unitsPerRot\":360,\"minVal\":-360,\"maxVal\":360},"
//     "\"axis1\":{\"stepPin\":\"D4\",\"dirnPin\":\"D5\",\"maxSpeed\":5.0,\"maxAcc\":5.0,"
//     "\"stepsPerRot\":3200,\"unitsPerRot\":2.0,\"minVal\":0,\"maxVal\":100,"
//     "\"homeOffsetVal\":100,"
//     "\"endStop1\":{\"sensePin\":\"A7\",\"actLvl\":0,\"inputType\":\"INPUT_PULLUP\"}},"
//     "\"axis2\":{\"servoPin\":\"D0\",\"isServoAxis\":1,\"isPrimaryAxis\": 0,\"homeOffsetVal\":180,\"homeOffSteps\":2500,"
//     "\"minVal\":0,\"maxVal\":180,\"stepsPerRot\":2000,\"unitsPerRot\":360}"
//     "}",

//     "{"
//     "\"robotType\":\"GeistBot\","
//     "\"robotGeom\":\"GeistBot\","
//     "\"robotBoard\":\"PiHat3\","
    //     "{\"robotType\":\"GeistBot\","
    // "\"fileManager\":{\"spiffsEnabled\":1,\"spiffsFormatIfCorrupt\":1,"
    //         "\"sdEnabled\":1,\"sdMOSI\":\"23\",\"sdMISO\":\"19\",\"sdCLK\":\"18\",\"sdCS\":\"4\"},"
    // "\"wifiLed\":{\"hwPin\":\"14\",\"onLevel\":1,\"onMs\":200,\"shortOffMs\":200,\"longOffMs\":750},"
    //     " \"stepEnablePin\":\"A2\",\"stepEnLev\":1,\"stepDisableSecs\":1.0,"
    //     " \"maxHomingSecs\":120,\"homingLinOffsetDegs\":70,\"homingCentreOffsetMM\":4,"
    //     " \"homingRotCentreDegs\":3.7,\"cmdsAtStart\":\"G28;ModSpiral\", "
    //     " \"axis0\": { \"stepPin\":\"D2\",\"dirnPin\":\"D3\",\"maxSpeed\":75.0,\"maxAcc\":5.0,"
    //     " \"stepsPerRot\":12000,\"unitsPerRot\":360,\"isDominantAxis\":1,"
    //     " \"endStop0\": { \"sensePin\":\"A6\",\"actLvl\":1,\"inputType\":\"INPUT_PULLUP\"}},"
    //     " \"axis1\": { \"stepPin\":\"D4\",\"dirnPin\":\"D5\",\"maxSpeed\":75.0,\"maxAcc\":5.0,"
    //     " \"stepsPerRot\":12000,\"unitsPerRot\":44.8,\"minVal\":0,\"maxVal\":195, "
    //     " \"endStop0\": { \"sensePin\":\"A7\",\"actLvl\":0,\"inputType\":\"INPUT_PULLUP\"}},"
    //     "}",

    // "{"
    // "\"robotType\":\"SandTableScaraPiHat3\","
    // "\"robotGeom\":\"SingleArmScara\","
    // "\"robotBoard\":\"PiHat3\","
    // "\"fileManager\":{\"spiffsEnabled\":1,\"spiffsFormatIfCorrupt\":1,"
    //         "\"sdEnabled\":1,\"sdMOSI\":\"23\",\"sdMISO\":\"19\",\"sdCLK\":\"18\",\"sdCS\":\"4\"},"
    // "\"wifiLed\":{\"hwPin\":\"14\",\"onLevel\":1,\"onMs\":200,\"shortOffMs\":200,\"longOffMs\":750},"
    // "\"cmdsAtStart\":\"\","
    // "\"homingSeq\":\"A-10000n;B10000;#;A+10000N;B-10000;#;A+500;B-500;#;B+10000n;#;B-10000N;#;B-1050;#;A=h;B=h;$\","
    // // "\"homingSeq\":\"A-10000n;B10000;#;A=h;B=h;$\","
    // "\"maxHomingSecs\":120,"
    // "\"stepEnablePin\":\"4\",\"stepEnLev\":1,\"stepDisableSecs\":10,"
    // "\"blockDistanceMM\":1,\"allowOutOfBounds\":1,"
    // "\"axis0\":{\"stepPin\":\"14\",\"dirnPin\":\"13\",\"maxSpeed\":75,\"maxAcc\":50,"
    // "\"stepsPerRot\":9600,\"unitsPerRot\":628.318,\"maxVal\":185,"
    // "\"endStop0\":{\"sensePin\":\"36\",\"actLvl\":0,\"inputType\":\"INPUT_PULLUP\"}},"
    // "\"axis1\":{\"stepPin\":\"15\",\"dirnPin\":\"21\",\"maxSpeed\":75,\"maxAcc\":50,"
    // "\"stepsPerRot\":9600,\"unitsPerRot\":628.318,\"maxVal\":185,"
    // "\"endStop0\":{\"sensePin\":\"39\",\"actLvl\":0,\"inputType\":\"INPUT_PULLUP\"}}"
    // "}",

//     "{"
//     "\"robotType\":\"SandTableScaraPiHat4\","
//     "\"robotGeom\":\"SingleArmScara\","
//     "\"robotBoard\":\"PiHat4\","
//     "\"fileManager\":{\"spiffsEnabled\":1,\"spiffsFormatIfCorrupt\":1,"
//             "\"sdEnabled\":1,\"sdMOSI\":\"23\",\"sdMISO\":\"19\",\"sdCLK\":\"18\",\"sdCS\":\"4\"},"
//     "\"wifiLed\":{\"hwPin\":\"14\",\"onLevel\":1,\"onMs\":200,\"shortOffMs\":200,\"longOffMs\":750},"
//     "\"cmdsAtStart\":\"\","
//     "\"homingSeq\":\"A-10000n;B10000;#;A+10000N;B-10000;#;A+500;B-500;#;B+10000n;#;B-10000N;#;B-1050;#;A=h;B=h;$\","
//     "\"maxHomingSecs\":120,"
//     // "\"stepEnablePin\":\"4\",\"stepEnLev\":1,\"stepDisableSecs\":10,"
//     "\"blockDistanceMM\":1,\"allowOutOfBounds\":1,"
//     "\"axis0\":{\"tmc5072channel\":\"0\",\"maxSpeed\":75,\"maxAcc\":50,"
//     "\"stepsPerRot\":9600,\"unitsPerRot\":628.318,\"maxVal\":185,"
//     "\"endStop0\":{\"sensePin\":\"36\",\"actLvl\":0,\"inputType\":\"INPUT_PULLUP\"}},"
//     "\"axis1\":{\"tmc5072channel\":\"1\",\"maxSpeed\":75,\"maxAcc\":50,"
//     "\"stepsPerRot\":9600,\"unitsPerRot\":628.318,\"maxVal\":185,"
//     "\"endStop0\":{\"sensePin\":\"39\",\"actLvl\":0,\"inputType\":\"INPUT_PULLUP\"}}"
//     "}",

//     "{"
//     "\"robotType\":\"HockeyBot\","
//     "\"robotGeom\":\"HBot\","
//     "\"robotBoard\":\"PiHat3\","
    // "\"fileManager\":{\"spiffsEnabled\":1,\"spiffsFormatIfCorrupt\":1,"
    //         "\"sdEnabled\":1,\"sdMOSI\":\"23\",\"sdMISO\":\"19\",\"sdCLK\":\"18\",\"sdCS\":\"4\"},"
    // "\"wifiLed\":{\"hwPin\":\"14\",\"onLevel\":1,\"onMs\":200,\"shortOffMs\":200,\"longOffMs\":750},"
    //     " \"stepEnablePin\":\"A2\",\"stepEnLev\":1,\"stepDisableSecs\":1.0,"
    //     " \"cmdsAtStart\":\"\", "
    //     " \"axis0\": { \"stepPin\":\"D2\",\"dirnPin\":\"D3\",\"maxSpeed\":5000.0,\"maxAcc\":5000.0,"
    //     " \"stepsPerRot\":3200,\"unitsPerRot\":62},"
    //     " \"axis1\": { \"stepPin\":\"D4\",\"dirnPin\":\"D5\",\"maxSpeed\":5000.0,\"maxAcc\":5000.0,"
    //     " \"stepsPerRot\":3200,\"unitsPerRot\":62}"
    //     "}",

//     "{"
//     "\"robotType\":\"XYBot\","
//     "\"robotGeom\":\"Cartesian\","
//     "\"robotBoard\":\"PiHat3\","
//     "\"fileManager\":{\"spiffsEnabled\":1,\"spiffsFormatIfCorrupt\":1,"
//             "\"sdEnabled\":1,\"sdMOSI\":\"23\",\"sdMISO\":\"19\",\"sdCLK\":\"18\",\"sdCS\":\"4\"},"
//     "\"wifiLed\":{\"hwPin\":\"14\",\"onLevel\":1,\"onMs\":200,\"shortOffMs\":200,\"longOffMs\":750},"
//     "\"stepEnablePin\":\"A2\",\"stepEnLev\":1,\"stepDisableSecs\":1.0,"
//     "\"cmdsAtStart\":\"\", "
//     "\"axis0\":{\"stepPin\":\"D2\",\"dirnPin\":\"D3\",\"maxSpeed\":100.0,\"maxAcc\":10.0,"
//     "\"stepsPerRot\":3200,\"unitsPerRot\":32},"
//     "\"axis1\":{\"stepPin\":\"D4\",\"dirnPin\":\"D5\",\"maxSpeed\":100.0,\"maxAcc\":10.0,"
//     "\"stepsPerRot\":3200,\"unitsPerRot\":32},"
//     "\"workItemQueue\":{\"maxLen\":50}"
//     "}"
*/
};

const int RobotConfigurations::_numRobotConfigurations = sizeof(RobotConfigurations::_robotConfigs) / sizeof(const char *);
