/*
    Copyright 2021 Paul Colby

    This file is part of QtFit.

    QtFit is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtFit is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with QtFit.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTFIT_TYPES_H
#define QTFIT_TYPES_H

#include "QtFit_global.h"

#include <QtGlobal>

QTFIT_BEGIN_NAMESPACE

typedef quint8  quint8z;
typedef quint16 quint16z;
typedef quint32 quint32z;
typedef quint64 quint64z;

enum class File {
    Device            =    1, ///< Read only, single file. Must be in root directory.
    Settings          =    2, ///< Read/write, single file. Directory=Settings
    Sport             =    3, ///< Read/write, multiple files, file number = sport type. Directory=Sports
    Activity          =    4, ///< Read/erase, multiple files. Directory=Activities
    Workout           =    5, ///< Read/write/erase, multiple files. Directory=Workouts
    Course            =    6, ///< Read/write/erase, multiple files. Directory=Courses
    Schedules         =    7, ///< Read/write, single file. Directory=Schedules
    Weight            =    9, ///< Read only, single file. Circular buffer. All message definitions at start of file. Directory=Weight
    Totals            =   10, ///< Read only, single file. Directory=Totals
    Goals             =   11, ///< Read/write, single file. Directory=Goals
    BloodPressure     =   14, ///< Read only. Directory=Blood Pressure
    MonitoringA       =   15, ///< Read only. Directory=Monitoring. File number=sub type.
    ActivitySummary   =   20, ///< Read/erase, multiple files. Directory=Activities
    MonitoringDaily   =   28,
    MonitoringB       =   32, ///< Read only. Directory=Monitoring. File number=identifier
    Segment           =   34, ///< Read/write/erase. Multiple Files.  Directory=Segments
    SegmentList       =   35, ///< Read/write/erase. Single File.  Directory=Segments
    ExdConfiguration  =   40, ///< Read/write/erase. Single File. Directory=Settings
    MfgRangeMin       = 0xF7, ///< 0xF7 - 0xFE reserved for manufacturer specific file types
    MfgRangeMax       = 0xFE, ///< 0xF7 - 0xFE reserved for manufacturer specific file types
};

enum class MesgNum : quint16 {
    FileId                         =      0,
    Capabilities                   =      1,
    DeviceSettings                 =      2,
    UserProfile                    =      3,
    HrmProfile                     =      4,
    SdmProfile                     =      5,
    BikeProfile                    =      6,
    ZonesTarget                    =      7,
    HrZone                         =      8,
    PowerZone                      =      9,
    MetZone                        =     10,
    Sport                          =     12,
    Goal                           =     15,
    Session                        =     18,
    Lap                            =     19,
    Record                         =     20,
    Event                          =     21,
    DeviceInfo                     =     23,
    Workout                        =     26,
    WorkoutStep                    =     27,
    Schedule                       =     28,
    WeightScale                    =     30,
    Course                         =     31,
    CoursePoint                    =     32,
    Totals                         =     33,
    Activity                       =     34,
    Software                       =     35,
    FileCapabilities               =     37,
    MesgCapabilities               =     38,
    FieldCapabilities              =     39,
    FileCreator                    =     49,
    BloodPressure                  =     51,
    SpeedZone                      =     53,
    Monitoring                     =     55,
    TrainingFile                   =     72,
    Hrv                            =     78,
    AntRx                          =     80,
    AntTx                          =     81,
    AntChannelId                   =     82,
    Length                         =    101,
    MonitoringInfo                 =    103,
    Pad                            =    105,
    SlaveDevice                    =    106,
    Connectivity                   =    127,
    WeatherConditions              =    128,
    WeatherAlert                   =    129,
    CadenceZone                    =    131,
    Hr                             =    132,
    SegmentLap                     =    142,
    MemoGlob                       =    145,
    SegmentId                      =    148,
    SegmentLeaderboardEntry        =    149,
    SegmentPoint                   =    150,
    SegmentFile                    =    151,
    WorkoutSession                 =    158,
    WatchfaceSettings              =    159,
    GpsMetadata                    =    160,
    CameraEvent                    =    161,
    TimestampCorrelation           =    162,
    GyroscopeData                  =    164,
    AccelerometerData              =    165,
    ThreeDSensorCalibration        =    167,
    VideoFrame                     =    169,
    ObdiiData                      =    174,
    NmeaSentence                   =    177,
    AviationAttitude               =    178,
    Video                          =    184,
    VideoTitle                     =    185,
    VideoDescription               =    186,
    VideoClip                      =    187,
    OhrSettings                    =    188,
    ExdScreenConfiguration         =    200,
    ExdDataFieldConfiguration      =    201,
    ExdDataConceptConfiguration    =    202,
    FieldDescription               =    206,
    DeveloperDataId                =    207,
    MagnetometerData               =    208,
    BarometerData                  =    209,
    OneDSensorCalibration          =    210,
    Set                            =    225,
    StressLevel                    =    227,
    DiveSettings                   =    258,
    DiveGas                        =    259,
    DiveAlarm                      =    262,
    ExerciseTitle                  =    264,
    DiveSummary                    =    268,
    Jump                           =    285,
    ClimbPro                       =    317,
    MfgRangeMin                    = 0xFF00, ///< 0xFF00 - 0xFFFE reserved for manufacturer specific messages
    MfgRangeMax                    = 0xFFFE, ///< 0xFF00 - 0xFFFE reserved for manufacturer specific messages
};

enum class Checksum : quint8 {
    Clear = 0, ///< Allows clear of checksum for flash memory where can only write 1 to 0 without erasing sector.
    Ok    = 1, ///< Set to mark checksum as valid if computes to invalid values 0 or 0xFF.  Checksum can also be set to ok to save encoding computation time.
};

enum class FileFlags : quint8z {
    Read  = 0x02,
    Write = 0x04,
    Erase = 0x08,
};

enum class MesgCount {
    NumPerFile        = 0,
    MaxPerFile        = 1,
    MaxPerFileType    = 2,
};

/// seconds since UTC 00:00 Dec 31 1989
enum class DateTime : quint32 {
    Min = 0x10000000, ///< if date_time is < 0x10000000 then it is system time (seconds from device power on)
};

/// seconds since 00:00 Dec 31 1989 in local time zone
enum class LocalDateTime : quint32 {
    Min = 0x10000000, ///< if date_time is < 0x10000000 then it is system time (seconds from device power on)
};

enum class MessageIndex : quint16 {
    Selected = 0x8000, ///< message is selected if set
    Reserved = 0x7000, ///< reserved (default 0)
    Mask     = 0x0FFF, ///< index
};

enum class DeviceIndex : quint8 {
    Creator = 0, ///< Creator of the file is always device index 0.
};

enum class Gender {
    Female = 0,
    Male   = 1,
};

enum class Language {
    English              =   0,
    French               =   1,
    Italian              =   2,
    German               =   3,
    Spanish              =   4,
    Croatian             =   5,
    Czech                =   6,
    Danish               =   7,
    Dutch                =   8,
    Finnish              =   9,
    Greek                =  10,
    Hungarian            =  11,
    Norwegian            =  12,
    Polish               =  13,
    Portuguese           =  14,
    Slovakian            =  15,
    Slovenian            =  16,
    Swedish              =  17,
    Russian              =  18,
    Turkish              =  19,
    Latvian              =  20,
    Ukrainian            =  21,
    Arabic               =  22,
    Farsi                =  23,
    Bulgarian            =  24,
    Romanian             =  25,
    Chinese              =  26,
    Japanese             =  27,
    Korean               =  28,
    Taiwanese            =  29,
    Thai                 =  30,
    Hebrew               =  31,
    BrazilianPortuguese  =  32,
    Indonesian           =  33,
    Malaysian            =  34,
    Vietnamese           =  35,
    Burmese              =  36,
    Mongolian            =  37,
    Custom               = 254,
};

/// Bit field corresponding to language enum type (1 << language).
enum class LanguageBits0 : quint8z {
    English  = 0x01,
    French   = 0x02,
    Italian  = 0x04,
    German   = 0x08,
    Spanish  = 0x10,
    Croatian = 0x20,
    Czech    = 0x40,
    Danish   = 0x80,
};

enum class LanguageBits1 : quint8z {
    Dutch      = 0x01,
    Finnish    = 0x02,
    Greek      = 0x04,
    Hungarian  = 0x08,
    Norwegian  = 0x10,
    Polish     = 0x20,
    Portuguese = 0x40,
    Slovakian  = 0x80,
};

enum class LanguageBits2 : quint8z {
    Slovenian = 0x01,
    Swedish   = 0x02,
    Russian   = 0x04,
    Turkish   = 0x08,
    Latvian   = 0x10,
    Ukrainian = 0x20,
    Arabic    = 0x40,
    Farsi     = 0x80,
};

enum class LanguageBits3 : quint8z {
    Bulgarian = 0x01,
    Romanian  = 0x02,
    Chinese   = 0x04,
    Japanese  = 0x08,
    Korean    = 0x10,
    Taiwanese = 0x20,
    Thai      = 0x40,
    Hebrew    = 0x80,
};

enum class LanguageBits4 : quint8z {
    BrazilianPortuguese  = 0x01,
    Indonesian           = 0x02,
    Malaysian            = 0x04,
    Vietnamese           = 0x08,
    Burmese              = 0x10,
    Mongolian            = 0x20,
};

enum class TimeZone {
    Almaty                    =   0,
    Bangkok                   =   1,
    Bombay                    =   2,
    Brasilia                  =   3,
    Cairo                     =   4,
    CapeVerdeIs               =   5,
    Darwin                    =   6,
    Eniwetok                  =   7,
    Fiji                      =   8,
    HongKong                  =   9,
    Islamabad                 =  10,
    Kabul                     =  11,
    Magadan                   =  12,
    MidAtlantic               =  13,
    Moscow                    =  14,
    Muscat                    =  15,
    Newfoundland              =  16,
    Samoa                     =  17,
    Sydney                    =  18,
    Tehran                    =  19,
    Tokyo                     =  20,
    UsAlaska                  =  21,
    UsAtlantic                =  22,
    UsCentral                 =  23,
    UsEastern                 =  24,
    UsHawaii                  =  25,
    UsMountain                =  26,
    UsPacific                 =  27,
    Other                     =  28,
    Auckland                  =  29,
    Kathmandu                 =  30,
    EuropeWesternWet          =  31,
    EuropeCentralCet          =  32,
    EuropeEasternEet          =  33,
    Jakarta                   =  34,
    Perth                     =  35,
    Adelaide                  =  36,
    Brisbane                  =  37,
    Tasmania                  =  38,
    Iceland                   =  39,
    Amsterdam                 =  40,
    Athens                    =  41,
    Barcelona                 =  42,
    Berlin                    =  43,
    Brussels                  =  44,
    Budapest                  =  45,
    Copenhagen                =  46,
    Dublin                    =  47,
    Helsinki                  =  48,
    Lisbon                    =  49,
    London                    =  50,
    Madrid                    =  51,
    Munich                    =  52,
    Oslo                      =  53,
    Paris                     =  54,
    Prague                    =  55,
    Reykjavik                 =  56,
    Rome                      =  57,
    Stockholm                 =  58,
    Vienna                    =  59,
    Warsaw                    =  60,
    Zurich                    =  61,
    Quebec                    =  62,
    Ontario                   =  63,
    Manitoba                  =  64,
    Saskatchewan              =  65,
    Alberta                   =  66,
    BritishColumbia           =  67,
    Boise                     =  68,
    Boston                    =  69,
    Chicago                   =  70,
    Dallas                    =  71,
    Denver                    =  72,
    KansasCity                =  73,
    LasVegas                  =  74,
    LosAngeles                =  75,
    Miami                     =  76,
    Minneapolis               =  77,
    NewYork                   =  78,
    NewOrleans                =  79,
    Phoenix                   =  80,
    SantaFe                   =  81,
    Seattle                   =  82,
    WashingtonDc              =  83,
    UsArizona                 =  84,
    Chita                     =  85,
    Ekaterinburg              =  86,
    Irkutsk                   =  87,
    Kaliningrad               =  88,
    Krasnoyarsk               =  89,
    Novosibirsk               =  90,
    PetropavlovskKamchatskiy  =  91,
    Samara                    =  92,
    Vladivostok               =  93,
    MexicoCentral             =  94,
    MexicoMountain            =  95,
    MexicoPacific             =  96,
    CapeTown                  =  97,
    Winkhoek                  =  98,
    Lagos                     =  99,
    Riyahd                    = 100,
    Venezuela                 = 101,
    AustraliaLh               = 102,
    Santiago                  = 103,
    Manual                    = 253,
    Automatic                 = 254,
};

enum class DisplayMeasure {
    Metric   = 0,
    Statute  = 1,
    Nautical = 2,
};

enum class DisplayHeart {
    Bpm     = 0,
    Max     = 1,
    Reserve = 2,
};

enum class DisplayPower {
    Watts       = 0,
    PercentFtp  = 1,
};

enum class DisplayPosition {
    Degree                 =  0, ///< dd.dddddd
    DegreeMinute           =  1, ///< dddmm.mmm
    DegreeMinuteSecond     =  2, ///< dddmmss
    AustrianGrid           =  3, ///< Austrian Grid (BMN)
    BritishGrid            =  4, ///< British National Grid
    DutchGrid              =  5, ///< Dutch grid system
    HungarianGrid          =  6, ///< Hungarian grid system
    FinnishGrid            =  7, ///< Finnish grid system Zone3 KKJ27
    GermanGrid             =  8, ///< Gausss Krueger (German)
    IcelandicGrid          =  9, ///< Icelandic Grid
    IndonesianEquatorial   = 10, ///< Indonesian Equatorial LCO
    IndonesianIrian        = 11, ///< Indonesian Irian LCO
    IndonesianSouthern     = 12, ///< Indonesian Southern LCO
    IndiaZone0             = 13, ///< India zone 0
    IndiaZoneIa            = 14, ///< India zone IA
    IndiaZoneIb            = 15, ///< India zone IB
    IndiaZoneIia           = 16, ///< India zone IIA
    IndiaZoneIib           = 17, ///< India zone IIB
    IndiaZoneIiia          = 18, ///< India zone IIIA
    IndiaZoneIiib          = 19, ///< India zone IIIB
    IndiaZoneIva           = 20, ///< India zone IVA
    IndiaZoneIvb           = 21, ///< India zone IVB
    IrishTransverse        = 22, ///< Irish Transverse Mercator
    IrishGrid              = 23, ///< Irish Grid
    Loran                  = 24, ///< Loran TD
    MaidenheadGrid         = 25, ///< Maidenhead grid system
    MgrsGrid               = 26, ///< MGRS grid system
    NewZealandGrid         = 27, ///< New Zealand grid system
    NewZealandTransverse   = 28, ///< New Zealand Transverse Mercator
    QatarGrid              = 29, ///< Qatar National Grid
    ModifiedSwedishGrid    = 30, ///< Modified RT-90 (Sweden)
    SwedishGrid            = 31, ///< RT-90 (Sweden)
    SouthAfricanGrid       = 32, ///< South African Grid
    SwissGrid              = 33, ///< Swiss CH-1903 grid
    TaiwanGrid             = 34, ///< Taiwan Grid
    UnitedStatesGrid       = 35, ///< United States National Grid
    UtmUpsGrid             = 36, ///< UTM/UPS grid system
    WestMalayan            = 37, ///< West Malayan RSO
    BorneoRso              = 38, ///< Borneo RSO
    EstonianGrid           = 39, ///< Estonian grid system
    LatvianGrid            = 40, ///< Latvian Transverse Mercator
    SwedishRef99Grid       = 41, ///< Reference Grid 99 TM (Swedish)
};

enum class Switch {
    Off  = 0,
    On   = 1,
    Auto = 2,
};

enum class Sport {
    Generic                 =   0,
    Running                 =   1,
    Cycling                 =   2,
    Transition              =   3, ///< Mulitsport transition
    FitnessEquipment        =   4,
    Swimming                =   5,
    Basketball              =   6,
    Soccer                  =   7,
    Tennis                  =   8,
    AmericanFootball        =   9,
    Training                =  10,
    Walking                 =  11,
    CrossCountrySkiing      =  12,
    AlpineSkiing            =  13,
    Snowboarding            =  14,
    Rowing                  =  15,
    Mountaineering          =  16,
    Hiking                  =  17,
    Multisport              =  18,
    Paddling                =  19,
    Flying                  =  20,
    EBiking                 =  21,
    Motorcycling            =  22,
    Boating                 =  23,
    Driving                 =  24,
    Golf                    =  25,
    HangGliding             =  26,
    HorsebackRiding         =  27,
    Hunting                 =  28,
    Fishing                 =  29,
    InlineSkating           =  30,
    RockClimbing            =  31,
    Sailing                 =  32,
    IceSkating              =  33,
    SkyDiving               =  34,
    Snowshoeing             =  35,
    Snowmobiling            =  36,
    StandUpPaddleboarding   =  37,
    Surfing                 =  38,
    Wakeboarding            =  39,
    WaterSkiing             =  40,
    Kayaking                =  41,
    Rafting                 =  42,
    Windsurfing             =  43,
    Kitesurfing             =  44,
    Tactical                =  45,
    Jumpmaster              =  46,
    Boxing                  =  47,
    FloorClimbing           =  48,
    Diving                  =  53,
    All                     = 254, ///< All is for goals only to include all sports.
};

/// Bit field corresponding to sport enum type (1 << sport).
enum class SportBits0 : quint8z {
    Generic           = 0x01,
    Running           = 0x02,
    Cycling           = 0x04,
    Transition        = 0x08, ///< Mulitsport transition
    FitnessEquipment  = 0x10,
    Swimming          = 0x20,
    Basketball        = 0x40,
    Soccer            = 0x80,
};

/// Bit field corresponding to sport enum type (1 << (sport-8)).
enum class SportBits1 : quint8z {
    Tennis               = 0x01,
    AmericanFootball     = 0x02,
    Training             = 0x04,
    Walking              = 0x08,
    CrossCountrySkiing   = 0x10,
    AlpineSkiing         = 0x20,
    Snowboarding         = 0x40,
    Rowing               = 0x80,
};

/// Bit field corresponding to sport enum type (1 << (sport-16)).
enum class SportBits2 : quint8z {
    Mountaineering = 0x01,
    Hiking         = 0x02,
    Multisport     = 0x04,
    Paddling       = 0x08,
    Flying         = 0x10,
    EBiking        = 0x20,
    Motorcycling   = 0x40,
    Boating        = 0x80,
};

/// Bit field corresponding to sport enum type (1 << (sport-24)).
enum class SportBits3 : quint8z {
    Driving          = 0x01,
    Golf             = 0x02,
    HangGliding      = 0x04,
    HorsebackRiding  = 0x08,
    Hunting          = 0x10,
    Fishing          = 0x20,
    InlineSkating    = 0x40,
    RockClimbing     = 0x80,
};

/// Bit field corresponding to sport enum type (1 << (sport-32)).
enum class SportBits4 : quint8z {
    Sailing                 = 0x01,
    IceSkating              = 0x02,
    SkyDiving               = 0x04,
    Snowshoeing             = 0x08,
    Snowmobiling            = 0x10,
    StandUpPaddleboarding   = 0x20,
    Surfing                 = 0x40,
    Wakeboarding            = 0x80,
};

/// Bit field corresponding to sport enum type (1 << (sport-40)).
enum class SportBits5 : quint8z {
    WaterSkiing  = 0x01,
    Kayaking     = 0x02,
    Rafting      = 0x04,
    Windsurfing  = 0x08,
    Kitesurfing  = 0x10,
    Tactical     = 0x20,
    Jumpmaster   = 0x40,
    Boxing       = 0x80,
};

/// Bit field corresponding to sport enum type (1 << (sport-48)).
enum class SportBits6 : quint8z {
    FloorClimbing  = 0x01,
};

enum class SubSport {
    Generic                 =   0,
    Treadmill               =   1, ///< Run/Fitness Equipment
    Street                  =   2, ///< Run
    Trail                   =   3, ///< Run
    Track                   =   4, ///< Run
    Spin                    =   5, ///< Cycling
    IndoorCycling           =   6, ///< Cycling/Fitness Equipment
    Road                    =   7, ///< Cycling
    Mountain                =   8, ///< Cycling
    Downhill                =   9, ///< Cycling
    Recumbent               =  10, ///< Cycling
    Cyclocross              =  11, ///< Cycling
    HandCycling             =  12, ///< Cycling
    TrackCycling            =  13, ///< Cycling
    IndoorRowing            =  14, ///< Fitness Equipment
    Elliptical              =  15, ///< Fitness Equipment
    StairClimbing           =  16, ///< Fitness Equipment
    LapSwimming             =  17, ///< Swimming
    OpenWater               =  18, ///< Swimming
    FlexibilityTraining     =  19, ///< Training
    StrengthTraining        =  20, ///< Training
    WarmUp                  =  21, ///< Tennis
    Match                   =  22, ///< Tennis
    Exercise                =  23, ///< Tennis
    Challenge               =  24,
    IndoorSkiing            =  25, ///< Fitness Equipment
    CardioTraining          =  26, ///< Training
    IndoorWalking           =  27, ///< Walking/Fitness Equipment
    EBikeFitness            =  28, ///< E-Biking
    Bmx                     =  29, ///< Cycling
    CasualWalking           =  30, ///< Walking
    SpeedWalking            =  31, ///< Walking
    BikeToRunTransition     =  32, ///< Transition
    RunToBikeTransition     =  33, ///< Transition
    SwimToBikeTransition    =  34, ///< Transition
    Atv                     =  35, ///< Motorcycling
    Motocross               =  36, ///< Motorcycling
    Backcountry             =  37, ///< Alpine Skiing/Snowboarding
    Resort                  =  38, ///< Alpine Skiing/Snowboarding
    RcDrone                 =  39, ///< Flying
    Wingsuit                =  40, ///< Flying
    Whitewater              =  41, ///< Kayaking/Rafting
    SkateSkiing             =  42, ///< Cross Country Skiing
    Yoga                    =  43, ///< Training
    Pilates                 =  44, ///< Fitness Equipment
    IndoorRunning           =  45, ///< Run
    GravelCycling           =  46, ///< Cycling
    EBikeMountain           =  47, ///< Cycling
    Commuting               =  48, ///< Cycling
    MixedSurface            =  49, ///< Cycling
    Navigate                =  50,
    TrackMe                 =  51,
    Map                     =  52,
    SingleGasDiving         =  53, ///< Diving
    MultiGasDiving          =  54, ///< Diving
    GaugeDiving             =  55, ///< Diving
    ApneaDiving             =  56, ///< Diving
    ApneaHunting            =  57, ///< Diving
    VirtualActivity         =  58,
    Obstacle                =  59, ///< Used for events where participants run, crawl through mud, climb over walls, etc.
    All                     = 254,
};

enum class SportEvent {
    Uncategorized  = 0,
    Geocaching     = 1,
    Fitness        = 2,
    Recreation     = 3,
    Race           = 4,
    SpecialEvent   = 5,
    Training       = 6,
    Transportation = 7,
    Touring        = 8,
};

enum class Activity {
    Manual           = 0,
    AutoMultiSport   = 1,
};

enum class Intensity {
    Active   = 0,
    Rest     = 1,
    Warmup   = 2,
    Cooldown = 3,
    Recovery = 4,
    Interval = 5,
    Other    = 6,
};

enum class SessionTrigger {
    ActivityEnd       = 0,
    Manual            = 1, ///< User changed sport.
    AutoMultiSport    = 2, ///< Auto multi-sport feature is enabled and user pressed lap button to advance session.
    FitnessEquipment  = 3, ///< Auto sport change caused by user linking to fitness equipment.
};

enum class AutolapTrigger {
    Time              = 0,
    Distance          = 1,
    PositionStart     = 2,
    PositionLap       = 3,
    PositionWaypoint  = 4,
    PositionMarked    = 5,
    Off               = 6,
};

enum class LapTrigger {
    Manual            = 0,
    Time              = 1,
    Distance          = 2,
    PositionStart     = 3,
    PositionLap       = 4,
    PositionWaypoint  = 5,
    PositionMarked    = 6,
    SessionEnd        = 7,
    FitnessEquipment  = 8,
};

enum class TimeMode {
    Hour12               = 0,
    Hour24               = 1, ///< Does not use a leading zero and has a colon
    Military             = 2, ///< Uses a leading zero and does not have a colon
    Hour12WithSeconds    = 3,
    Hour24WithSeconds    = 4,
    Utc                  = 5,
};

enum class BacklightMode {
    Off                                      = 0,
    Manual                                   = 1,
    KeyAndMessages                           = 2,
    AutoBrightness                           = 3,
    SmartNotifications                       = 4,
    KeyAndMessagesNight                      = 5,
    KeyAndMessagesAndSmartNotifications      = 6,
};

enum class DateMode {
    DayMonth  = 0,
    MonthDay  = 1,
};

/// Timeout in seconds.
enum class BacklightTimeout : quint8 {
    Infinite = 0, ///< Backlight stays on forever.
};

enum class Event {
    Timer                   =  0, ///< Group 0.  Start / stop_all
    Workout                 =  3, ///< start / stop
    WorkoutStep             =  4, ///< Start at beginning of workout.  Stop at end of each step.
    PowerDown               =  5, ///< stop_all group 0
    PowerUp                 =  6, ///< stop_all group 0
    OffCourse               =  7, ///< start / stop group 0
    Session                 =  8, ///< Stop at end of each session.
    Lap                     =  9, ///< Stop at end of each lap.
    CoursePoint             = 10, ///< marker
    Battery                 = 11, ///< marker
    VirtualPartnerPace      = 12, ///< Group 1. Start at beginning of activity if VP enabled, when VP pace is changed during activity or VP enabled mid activity.  stop_disable when VP disabled.
    HrHighAlert             = 13, ///< Group 0.  Start / stop when in alert condition.
    HrLowAlert              = 14, ///< Group 0.  Start / stop when in alert condition.
    SpeedHighAlert          = 15, ///< Group 0.  Start / stop when in alert condition.
    SpeedLowAlert           = 16, ///< Group 0.  Start / stop when in alert condition.
    CadHighAlert            = 17, ///< Group 0.  Start / stop when in alert condition.
    CadLowAlert             = 18, ///< Group 0.  Start / stop when in alert condition.
    PowerHighAlert          = 19, ///< Group 0.  Start / stop when in alert condition.
    PowerLowAlert           = 20, ///< Group 0.  Start / stop when in alert condition.
    RecoveryHr              = 21, ///< marker
    BatteryLow              = 22, ///< marker
    TimeDurationAlert       = 23, ///< Group 1.  Start if enabled mid activity (not required at start of activity). Stop when duration is reached.  stop_disable if disabled.
    DistanceDurationAlert   = 24, ///< Group 1.  Start if enabled mid activity (not required at start of activity). Stop when duration is reached.  stop_disable if disabled.
    CalorieDurationAlert    = 25, ///< Group 1.  Start if enabled mid activity (not required at start of activity). Stop when duration is reached.  stop_disable if disabled.
    Activity                = 26, ///< Group 1..  Stop at end of activity.
    FitnessEquipment        = 27, ///< marker
    Length                  = 28, ///< Stop at end of each length.
    UserMarker              = 32, ///< marker
    SportPoint              = 33, ///< marker
    Calibration             = 36, ///< start/stop/marker
    FrontGearChange         = 42, ///< marker
    RearGearChange          = 43, ///< marker
    RiderPositionChange     = 44, ///< marker
    ElevHighAlert           = 45, ///< Group 0.  Start / stop when in alert condition.
    ElevLowAlert            = 46, ///< Group 0.  Start / stop when in alert condition.
    CommTimeout             = 47, ///< marker
    RadarThreatAlert        = 75, ///< start/stop/marker
};

enum class EventType {
    Start                   = 0,
    Stop                    = 1,
    ConsecutiveDepreciated  = 2,
    Marker                  = 3,
    StopAll                 = 4,
    BeginDepreciated        = 5,
    EndDepreciated          = 6,
    EndAllDepreciated       = 7,
    StopDisable             = 8,
    StopDisableAll          = 9,
};

/// timer event data
enum class TimerTrigger {
    Manual            = 0,
    Auto              = 1,
    FitnessEquipment  = 2,
};

/// fitness equipment event data
enum class FitnessEquipmentState {
    Ready   = 0,
    InUse   = 1,
    Paused  = 2,
    Unknown = 3, ///< lost connection to fitness equipment
};

enum class Tone {
    Off              = 0,
    Tone             = 1,
    Vibrate          = 2,
    ToneAndVibrate   = 3,
};

enum class Autoscroll {
    None   = 0,
    Slow   = 1,
    Medium = 2,
    Fast   = 3,
};

enum class ActivityClass {
    Level     = 0x7F, ///< 0 to 100
    LevelMax  =  100,
    Athlete   = 0x80,
};

enum class HrZoneCalc {
    Custom         = 0,
    PercentMaxHr   = 1,
    PercentHrr     = 2,
};

enum class PwrZoneCalc {
    Custom      = 0,
    PercentFtp  = 1,
};

enum class WktStepDuration {
    Time                                      =  0,
    Distance                                  =  1,
    HrLessThan                                =  2,
    HrGreaterThan                             =  3,
    Calories                                  =  4,
    Open                                      =  5,
    RepeatUntilStepsCmplt                     =  6,
    RepeatUntilTime                           =  7,
    RepeatUntilDistance                       =  8,
    RepeatUntilCalories                       =  9,
    RepeatUntilHrLessThan                     = 10,
    RepeatUntilHrGreaterThan                  = 11,
    RepeatUntilPowerLessThan                  = 12,
    RepeatUntilPowerGreaterThan               = 13,
    PowerLessThan                             = 14,
    PowerGreaterThan                          = 15,
    TrainingPeaksTss                          = 16,
    RepeatUntilPowerLastLapLessThan           = 17,
    RepeatUntilMaxPowerLastLapLessThan        = 18,
    Power3sLessThan                           = 19,
    Power10sLessThan                          = 20,
    Power30sLessThan                          = 21,
    Power3sGreaterThan                        = 22,
    Power10sGreaterThan                       = 23,
    Power30sGreaterThan                       = 24,
    PowerLapLessThan                          = 25,
    PowerLapGreaterThan                       = 26,
    RepeatUntilTrainingPeaksTss               = 27,
    RepetitionTime                            = 28,
    Reps                                      = 29,
    TimeOnly                                  = 31,
};

enum class WktStepTarget {
    Speed          =  0,
    HeartRate      =  1,
    Open           =  2,
    Cadence        =  3,
    Power          =  4,
    Grade          =  5,
    Resistance     =  6,
    Power3s        =  7,
    Power10s       =  8,
    Power30s       =  9,
    PowerLap       = 10,
    SwimStroke     = 11,
    SpeedLap       = 12,
    HeartRateLap   = 13,
};

enum class Goal {
    Time           = 0,
    Distance       = 1,
    Calories       = 2,
    Frequency      = 3,
    Steps          = 4,
    Ascent         = 5,
    ActiveMinutes  = 6,
};

enum class GoalRecurrence {
    Off     = 0,
    Daily   = 1,
    Weekly  = 2,
    Monthly = 3,
    Yearly  = 4,
    Custom  = 5,
};

enum class GoalSource {
    Auto      = 0, ///< Device generated
    Community = 1, ///< Social network sourced goal
    User      = 2, ///< Manually generated
};

enum class Schedule {
    Workout = 0,
    Course  = 1,
};

enum class CoursePoint {
    Generic         =  0,
    Summit          =  1,
    Valley          =  2,
    Water           =  3,
    Food            =  4,
    Danger          =  5,
    Left            =  6,
    Right           =  7,
    Straight        =  8,
    FirstAid        =  9,
    FourthCategory  = 10,
    ThirdCategory   = 11,
    SecondCategory  = 12,
    FirstCategory   = 13,
    HorsCategory    = 14,
    Sprint          = 15,
    LeftFork        = 16,
    RightFork       = 17,
    MiddleFork      = 18,
    SlightLeft      = 19,
    SharpLeft       = 20,
    SlightRight     = 21,
    SharpRight      = 22,
    UTurn           = 23,
    SegmentStart    = 24,
    SegmentEnd      = 25,
};

enum class Manufacturer : quint16 {
    Garmin                   =    1,
    GarminFr405Antfs         =    2, ///< Do not use.  Used by FR405 for ANTFS man id.
    Zephyr                   =    3,
    Dayton                   =    4,
    Idt                      =    5,
    Srm                      =    6,
    Quarq                    =    7,
    Ibike                    =    8,
    Saris                    =    9,
    SparkHk                  =   10,
    Tanita                   =   11,
    Echowell                 =   12,
    DynastreamOem            =   13,
    Nautilus                 =   14,
    Dynastream               =   15,
    Timex                    =   16,
    Metrigear                =   17,
    Xelic                    =   18,
    Beurer                   =   19,
    Cardiosport              =   20,
    AAndD                    =   21,
    Hmm                      =   22,
    Suunto                   =   23,
    ThitaElektronik          =   24,
    Gpulse                   =   25,
    CleanMobile              =   26,
    PedalBrain               =   27,
    Peaksware                =   28,
    Saxonar                  =   29,
    LemondFitness            =   30,
    Dexcom                   =   31,
    WahooFitness             =   32,
    OctaneFitness            =   33,
    Archinoetics             =   34,
    TheHurtBox               =   35,
    CitizenSystems           =   36,
    Magellan                 =   37,
    Osynce                   =   38,
    Holux                    =   39,
    Concept2                 =   40,
    Shimano                  =   41,
    OneGiantLeap             =   42,
    AceSensor                =   43,
    BrimBrothers             =   44,
    Xplova                   =   45,
    PerceptionDigital        =   46,
    Bf1systems               =   47,
    Pioneer                  =   48,
    Spantec                  =   49,
    Metalogics               =   50,
    Fouriiiis                =   51,
    SeikoEpson               =   52,
    SeikoEpsonOem            =   53,
    IforPowell               =   54,
    MaxwellGuider            =   55,
    StarTrac                 =   56,
    Breakaway                =   57,
    AlatechTechnologyLtd     =   58,
    MioTechnologyEurope      =   59,
    Rotor                    =   60,
    Geonaute                 =   61,
    IdBike                   =   62,
    Specialized              =   63,
    Wtek                     =   64,
    PhysicalEnterprises      =   65,
    NorthPoleEngineering     =   66,
    Bkool                    =   67,
    Cateye                   =   68,
    StagesCycling            =   69,
    Sigmasport               =   70,
    Tomtom                   =   71,
    Peripedal                =   72,
    Wattbike                 =   73,
    Moxy                     =   76,
    Ciclosport               =   77,
    Powerbahn                =   78,
    AcornProjectsAps         =   79,
    Lifebeam                 =   80,
    Bontrager                =   81,
    Wellgo                   =   82,
    Scosche                  =   83,
    Magura                   =   84,
    Woodway                  =   85,
    Elite                    =   86,
    NielsenKellerman         =   87,
    DkCity                   =   88,
    Tacx                     =   89,
    DirectionTechnology      =   90,
    Magtonic                 =   91,
    Onepartcarbon            =   92,
    InsideRideTechnologies   =   93,
    SoundOfMotion            =   94,
    Stryd                    =   95,
    Icg                      =   96, ///< Indoorcycling Group
    Mipulse                  =   97,
    BsxAthletics             =   98,
    Look                     =   99,
    CampagnoloSrl            =  100,
    BodyBikeSmart            =  101,
    Praxisworks              =  102,
    LimitsTechnology         =  103, ///< Limits Technology Ltd.
    TopactionTechnology      =  104, ///< TopAction Technology Inc.
    Cosinuss                 =  105,
    Fitcare                  =  106,
    Magene                   =  107,
    GiantManufacturingCo     =  108,
    Tigrasport               =  109, ///< Tigrasport
    Salutron                 =  110,
    Technogym                =  111,
    BrytonSensors            =  112,
    LatitudeLimited          =  113,
    SoaringTechnology        =  114,
    Igpsport                 =  115,
    Thinkrider               =  116,
    GopherSport              =  117,
    Waterrower               =  118,
    Orangetheory             =  119,
    Inpeak                   =  120,
    Kinetic                  =  121,
    JohnsonHealthTech        =  122,
    PolarElectro             =  123,
    Seesense                 =  124,
    NciTechnology            =  125,
    Iqsquare                 =  126,
    Leomo                    =  127,
    IfitCom                  =  128,
    CorosByte                =  129,
    VersaDesign              =  130,
    Chileaf                  =  131,
    Cycplus                  =  132,
    GravaaByte               =  133,
    Sigeyi                   =  134,
    Coospo                   =  135,
    Development              =  255,
    Healthandlife            =  257,
    Lezyne                   =  258,
    ScribeLabs               =  259,
    Zwift                    =  260,
    Watteam                  =  261,
    Recon                    =  262,
    FaveroElectronics        =  263,
    Dynovelo                 =  264,
    Strava                   =  265,
    Precor                   =  266, ///< Amer Sports
    Bryton                   =  267,
    Sram                     =  268,
    Navman                   =  269, ///< MiTAC Global Corporation (Mio Technology)
    Cobi                     =  270, ///< COBI GmbH
    Spivi                    =  271,
    MioMagellan              =  272,
    Evesports                =  273,
    SensitivusGauge          =  274,
    Podoon                   =  275,
    LifeTimeFitness          =  276,
    FalcoEMotors             =  277, ///< Falco eMotors Inc.
    Minoura                  =  278,
    Cycliq                   =  279,
    Luxottica                =  280,
    TrainerRoad              =  281,
    TheSufferfest            =  282,
    Fullspeedahead           =  283,
    Virtualtraining          =  284,
    Feedbacksports           =  285,
    Omata                    =  286,
    Vdo                      =  287,
    Magneticdays             =  288,
    Hammerhead               =  289,
    KineticByKurt            =  290,
    Shapelog                 =  291,
    Dabuziduo                =  292,
    Jetblack                 =  293,
    Coros                    =  294,
    Virtugo                  =  295,
    Velosense                =  296,
    Cycligentinc             =  297,
    Trailforks               =  298,
    MahleEbikemotion         =  299,
    Nurvv                    =  300,
    Microprogram             =  301,
    Zone5cloud               =  302,
    Greenteg                 =  303,
    YamahaMotors             =  304,
    Whoop                    =  305,
    Gravaa                   =  306,
    Onelap                   =  307,
    MonarkExercise           =  308,
    Form                     =  309,
    Decathlon                =  310,
    Syncros                  =  311,
    Actigraphcorp            = 5759,
};

enum class GarminProduct : quint16 {
    Hrm1                            =     1,
    Axh01                           =     2, ///< AXH01 HRM chipset
    Axb01                           =     3,
    Axb02                           =     4,
    Hrm2ss                          =     5,
    DsiAlf02                        =     6,
    Hrm3ss                          =     7,
    HrmRunSingleByteProductId       =     8, ///< hrm_run model for HRM ANT+ messaging
    Bsm                             =     9, ///< BSM model for ANT+ messaging
    Bcm                             =    10, ///< BCM model for ANT+ messaging
    Axs01                           =    11, ///< AXS01 HRM Bike Chipset model for ANT+ messaging
    HrmTriSingleByteProductId       =    12, ///< hrm_tri model for HRM ANT+ messaging
    Hrm4RunSingleByteProductId      =    13, ///< hrm4 run model for HRM ANT+ messaging
    Fr225SingleByteProductId        =    14, ///< fr225 model for HRM ANT+ messaging
    Gen3BsmSingleByteProductId      =    15, ///< gen3_bsm model for Bike Speed ANT+ messaging
    Gen3BcmSingleByteProductId      =    16, ///< gen3_bcm model for Bike Cadence ANT+ messaging
    Fr301China                      =   473,
    Fr301Japan                      =   474,
    Fr301Korea                      =   475,
    Fr301Taiwan                     =   494,
    Fr405                           =   717, ///< Forerunner 405
    Fr50                            =   782, ///< Forerunner 50
    Fr405Japan                      =   987,
    Fr60                            =   988, ///< Forerunner 60
    DsiAlf01                        =  1011,
    Fr310xt                         =  1018, ///< Forerunner 310
    Edge500                         =  1036,
    Fr110                           =  1124, ///< Forerunner 110
    Edge800                         =  1169,
    Edge500Taiwan                   =  1199,
    Edge500Japan                    =  1213,
    Chirp                           =  1253,
    Fr110Japan                      =  1274,
    Edge200                         =  1325,
    Fr910xt                         =  1328,
    Edge800Taiwan                   =  1333,
    Edge800Japan                    =  1334,
    Alf04                           =  1341,
    Fr610                           =  1345,
    Fr210Japan                      =  1360,
    VectorSs                        =  1380,
    VectorCp                        =  1381,
    Edge800China                    =  1386,
    Edge500China                    =  1387,
    ApproachG10                     =  1405,
    Fr610Japan                      =  1410,
    Edge500Korea                    =  1422,
    Fr70                            =  1436,
    Fr310xt4t                       =  1446,
    Amx                             =  1461,
    Fr10                            =  1482,
    Edge800Korea                    =  1497,
    Swim                            =  1499,
    Fr910xtChina                    =  1537,
    Fenix                           =  1551,
    Edge200Taiwan                   =  1555,
    Edge510                         =  1561,
    Edge810                         =  1567,
    Tempe                           =  1570,
    Fr910xtJapan                    =  1600,
    Fr620                           =  1623,
    Fr220                           =  1632,
    Fr910xtKorea                    =  1664,
    Fr10Japan                       =  1688,
    Edge810Japan                    =  1721,
    VirbElite                       =  1735,
    EdgeTouring                     =  1736, ///< Also Edge Touring Plus
    Edge510Japan                    =  1742,
    HrmTri                          =  1743, ///< Also HRM-Swim
    HrmRun                          =  1752,
    Fr920xt                         =  1765,
    Edge510Asia                     =  1821,
    Edge810China                    =  1822,
    Edge810Taiwan                   =  1823,
    Edge1000                        =  1836,
    VivoFit                         =  1837,
    VirbRemote                      =  1853,
    VivoKi                          =  1885,
    Fr15                            =  1903,
    VivoActive                      =  1907,
    Edge510Korea                    =  1918,
    Fr620Japan                      =  1928,
    Fr620China                      =  1929,
    Fr220Japan                      =  1930,
    Fr220China                      =  1931,
    ApproachS6                      =  1936,
    VivoSmart                       =  1956,
    Fenix2                          =  1967,
    Epix                            =  1988,
    Fenix3                          =  2050,
    Edge1000Taiwan                  =  2052,
    Edge1000Japan                   =  2053,
    Fr15Japan                       =  2061,
    Edge520                         =  2067,
    Edge1000China                   =  2070,
    Fr620Russia                     =  2072,
    Fr220Russia                     =  2073,
    VectorS                         =  2079,
    Edge1000Korea                   =  2100,
    Fr920xtTaiwan                   =  2130,
    Fr920xtChina                    =  2131,
    Fr920xtJapan                    =  2132,
    Virbx                           =  2134,
    VivoSmartApac                   =  2135,
    EtrexTouch                      =  2140,
    Edge25                          =  2147,
    Fr25                            =  2148,
    VivoFit2                        =  2150,
    Fr225                           =  2153,
    Fr630                           =  2156,
    Fr230                           =  2157,
    Fr735xt                         =  2158,
    VivoActiveApac                  =  2160,
    Vector2                         =  2161,
    Vector2s                        =  2162,
    Virbxe                          =  2172,
    Fr620Taiwan                     =  2173,
    Fr220Taiwan                     =  2174,
    Truswing                        =  2175,
    D2airvenu                       =  2187,
    Fenix3China                     =  2188,
    Fenix3Twn                       =  2189,
    VariaHeadlight                  =  2192,
    VariaTaillightOld               =  2193,
    EdgeExplore1000                 =  2204,
    Fr225Asia                       =  2219,
    VariaRadarTaillight             =  2225,
    VariaRadarDisplay               =  2226,
    Edge20                          =  2238,
    Edge520Asia                     =  2260,
    Edge520Japan                    =  2261,
    D2Bravo                         =  2262,
    ApproachS20                     =  2266,
    VivoSmart2                      =  2271,
    Edge1000Thai                    =  2274,
    VariaRemote                     =  2276,
    Edge25Asia                      =  2288,
    Edge25Jpn                       =  2289,
    Edge20Asia                      =  2290,
    ApproachX40                     =  2292,
    Fenix3Japan                     =  2293,
    VivoSmartEmea                   =  2294,
    Fr630Asia                       =  2310,
    Fr630Jpn                        =  2311,
    Fr230Jpn                        =  2313,
    Hrm4Run                         =  2327,
    EpixJapan                       =  2332,
    VivoActiveHr                    =  2337,
    VivoSmartGpsHr                  =  2347,
    VivoSmartHr                     =  2348,
    VivoSmartHrAsia                 =  2361,
    VivoSmartGpsHrAsia              =  2362,
    VivoMove                        =  2368,
    VariaTaillight                  =  2379,
    Fr235Asia                       =  2396,
    Fr235Japan                      =  2397,
    VariaVision                     =  2398,
    VivoFit3                        =  2406,
    Fenix3Korea                     =  2407,
    Fenix3Sea                       =  2408,
    Fenix3Hr                        =  2413,
    VirbUltra30                     =  2417,
    IndexSmartScale                 =  2429,
    Fr235                           =  2431,
    Fenix3Chronos                   =  2432,
    Oregon7xx                       =  2441,
    Rino7xx                         =  2444,
    EpixKorea                       =  2457,
    Fenix3HrChn                     =  2473,
    Fenix3HrTwn                     =  2474,
    Fenix3HrJpn                     =  2475,
    Fenix3HrSea                     =  2476,
    Fenix3HrKor                     =  2477,
    Nautix                          =  2496,
    VivoActiveHrApac                =  2497,
    Oregon7xxWw                     =  2512,
    Edge820                         =  2530,
    EdgeExplore820                  =  2531,
    Fr735xtApac                     =  2533,
    Fr735xtJapan                    =  2534,
    Fenix5s                         =  2544,
    D2BravoTitanium                 =  2547,
    VariaUt800                      =  2567, ///< Varia UT 800 SW
    RunningDynamicsPod              =  2593,
    Edge820China                    =  2599,
    Edge820Japan                    =  2600,
    Fenix5x                         =  2604,
    VivoFitJr                       =  2606,
    VivoSmart3                      =  2622,
    VivoSport                       =  2623,
    Edge820Taiwan                   =  2628,
    Edge820Korea                    =  2629,
    Edge820Sea                      =  2630,
    Fr35Hebrew                      =  2650,
    ApproachS60                     =  2656,
    Fr35Apac                        =  2667,
    Fr35Japan                       =  2668,
    Fenix3ChronosAsia               =  2675,
    Virb360                         =  2687,
    Fr935                           =  2691,
    Fenix5                          =  2697,
    Vivoactive3                     =  2700,
    Fr235ChinaNfc                   =  2733,
    Foretrex601701                  =  2769,
    VivoMoveHr                      =  2772,
    Edge1030                        =  2713,
    Vector3                         =  2787,
    Fenix5Asia                      =  2796,
    Fenix5sAsia                     =  2797,
    Fenix5xAsia                     =  2798,
    ApproachZ80                     =  2806,
    Fr35Korea                       =  2814,
    D2charlie                       =  2819,
    VivoSmart3Apac                  =  2831,
    VivoSportApac                   =  2832,
    Fr935Asia                       =  2833,
    Descent                         =  2859,
    VivoFit4                        =  2878,
    Fr645                           =  2886,
    Fr645m                          =  2888,
    Fr30                            =  2891,
    Fenix5sPlus                     =  2900,
    Edge130                         =  2909,
    Edge1030Asia                    =  2924,
    Vivosmart4                      =  2927,
    VivoMoveHrAsia                  =  2945,
    ApproachX10                     =  2962,
    Fr30Asia                        =  2977,
    Vivoactive3mW                   =  2988,
    Fr645Asia                       =  3003,
    Fr645mAsia                      =  3004,
    EdgeExplore                     =  3011,
    Gpsmap66                        =  3028,
    ApproachS10                     =  3049,
    Vivoactive3mL                   =  3066,
    ApproachG80                     =  3085,
    Edge130Asia                     =  3092,
    Edge1030Bontrager               =  3095,
    Fenix5Plus                      =  3110,
    Fenix5xPlus                     =  3111,
    Edge520Plus                     =  3112,
    Fr945                           =  3113,
    Edge530                         =  3121,
    Edge830                         =  3122,
    InstinctEsports                 =  3126,
    Fenix5sPlusApac                 =  3134,
    Fenix5xPlusApac                 =  3135,
    Edge520PlusApac                 =  3142,
    Fr235lAsia                      =  3144,
    Fr245Asia                       =  3145,
    VivoActive3mApac                =  3163,
    Gen3Bsm                         =  3192, ///< gen3 bike speed sensor
    Gen3Bcm                         =  3193, ///< gen3 bike cadence sensor
    VivoSmart4Asia                  =  3218,
    Vivoactive4Small                =  3224,
    Vivoactive4Large                =  3225,
    Venu                            =  3226,
    MarqDriver                      =  3246,
    MarqAviator                     =  3247,
    MarqCaptain                     =  3248,
    MarqCommander                   =  3249,
    MarqExpedition                  =  3250,
    MarqAthlete                     =  3251,
    DescentMk2                      =  3258,
    Gpsmap66i                       =  3284,
    Fenix6sSport                    =  3287,
    Fenix6s                         =  3288,
    Fenix6Sport                     =  3289,
    Fenix6                          =  3290,
    Fenix6x                         =  3291,
    HrmDual                         =  3299, ///< HRM-Dual
    HrmPro                          =  3300, ///< HRM-Pro
    VivoMove3Premium                =  3308,
    ApproachS40                     =  3314,
    Fr245mAsia                      =  3321,
    Edge530Apac                     =  3349,
    Edge830Apac                     =  3350,
    VivoMove3                       =  3378,
    VivoActive4SmallAsia            =  3387,
    VivoActive4LargeAsia            =  3388,
    VivoActive4OledAsia             =  3389,
    Swim2                           =  3405,
    MarqDriverAsia                  =  3420,
    MarqAviatorAsia                 =  3421,
    VivoMove3Asia                   =  3422,
    Fr945Asia                       =  3441,
    VivoActive3tChn                 =  3446,
    MarqCaptainAsia                 =  3448,
    MarqCommanderAsia               =  3449,
    MarqExpeditionAsia              =  3450,
    MarqAthleteAsia                 =  3451,
    Fr45Asia                        =  3469,
    Vivoactive3Daimler              =  3473,
    LegacyRey                       =  3498,
    LegacyDarthVader                =  3499,
    LegacyCaptainMarvel             =  3500,
    LegacyFirstAvenger              =  3501,
    Fenix6sSportAsia                =  3512,
    Fenix6sAsia                     =  3513,
    Fenix6SportAsia                 =  3514,
    Fenix6Asia                      =  3515,
    Fenix6xAsia                     =  3516,
    LegacyCaptainMarvelAsia         =  3535,
    LegacyFirstAvengerAsia          =  3536,
    LegacyReyAsia                   =  3537,
    LegacyDarthVaderAsia            =  3538,
    Edge130Plus                     =  3558,
    Edge1030Plus                    =  3570,
    Rally200                        =  3578, ///< Rally 100/200 Power Meter Series
    Fr745                           =  3589,
    Venusq                          =  3600,
    Lily                            =  3615,
    MarqAdventurer                  =  3624,
    Enduro                          =  3638,
    MarqAdventurerAsia              =  3648,
    Swim2Apac                       =  3639,
    DescentMk2Asia                  =  3702, ///< Mk2 and Mk2i
    Venu2                           =  3703,
    Venu2s                          =  3704,
    VenuDaimlerAsia                 =  3737,
    MarqGolfer                      =  3739,
    VenuDaimler                     =  3740,
    Fr745Asia                       =  3794,
    LilyAsia                        =  3809,
    Edge1030PlusAsia                =  3812,
    Edge130PlusAsia                 =  3813,
    ApproachS12                     =  3823,
    EnduroAsia                      =  3872,
    VenusqAsia                      =  3837,
    MarqGolferAsia                  =  3850,
    ApproachG12                     =  3927,
    ApproachS42                     =  3934,
    Venu2sAsia                      =  3949,
    Venu2Asia                       =  3950,
    ApproachS12Asia                 =  3986,
    ApproachG12Asia                 =  4001,
    ApproachS42Asia                 =  4002,
    Sdm4                            = 10007, ///< SDM4 footpod
    EdgeRemote                      = 10014,
    TacxTrainingAppWin              = 20533,
    TacxTrainingAppMac              = 20534,
    TrainingCenter                  = 20119,
    TacxTrainingAppAndroid          = 30045,
    TacxTrainingAppIos              = 30046,
    TacxTrainingAppLegacy           = 30047,
    ConnectiqSimulator              = 65531,
    AndroidAntplusPlugin            = 65532,
    Connect                         = 65534, ///< Garmin Connect website
};

enum class AntplusDeviceType : quint8 {
    Antfs                      =   1,
    BikePower                  =  11,
    EnvironmentSensorLegacy    =  12,
    MultiSportSpeedDistance    =  15,
    Control                    =  16,
    FitnessEquipment           =  17,
    BloodPressure              =  18,
    GeocacheNode               =  19,
    LightElectricVehicle       =  20,
    EnvSensor                  =  25,
    Racquet                    =  26,
    ControlHub                 =  27,
    MuscleOxygen               =  31,
    BikeLightMain              =  35,
    BikeLightShared            =  36,
    Exd                        =  38,
    BikeRadar                  =  40,
    BikeAero                   =  46,
    WeightScale                = 119,
    HeartRate                  = 120,
    BikeSpeedCadence           = 121,
    BikeCadence                = 122,
    BikeSpeed                  = 123,
    StrideSpeedDistance        = 124,
};

enum class AntNetwork {
    Public  = 0,
    Antplus = 1,
    Antfs   = 2,
    Private = 3,
};

enum class WorkoutCapabilities : quint32z {
    Interval          = 0x00000001,
    Custom            = 0x00000002,
    FitnessEquipment  = 0x00000004,
    Firstbeat         = 0x00000008,
    NewLeaf           = 0x00000010,
    Tcx               = 0x00000020, ///< For backwards compatibility.  Watch should add missing id fields then clear flag.
    Speed             = 0x00000080, ///< Speed source required for workout step.
    HeartRate         = 0x00000100, ///< Heart rate source required for workout step.
    Distance          = 0x00000200, ///< Distance source required for workout step.
    Cadence           = 0x00000400, ///< Cadence source required for workout step.
    Power             = 0x00000800, ///< Power source required for workout step.
    Grade             = 0x00001000, ///< Grade source required for workout step.
    Resistance        = 0x00002000, ///< Resistance source required for workout step.
    Protected         = 0x00004000,
};

enum class BatteryStatus : quint8 {
    New      = 1,
    Good     = 2,
    Ok       = 3,
    Low      = 4,
    Critical = 5,
    Charging = 6,
    Unknown  = 7,
};

enum class HrType {
    Normal    = 0,
    Irregular = 1,
};

enum class CourseCapabilities : quint32z {
    Processed  = 0x00000001,
    Valid      = 0x00000002,
    Time       = 0x00000004,
    Distance   = 0x00000008,
    Position   = 0x00000010,
    HeartRate  = 0x00000020,
    Power      = 0x00000040,
    Cadence    = 0x00000080,
    Training   = 0x00000100,
    Navigation = 0x00000200,
    Bikeway    = 0x00000400,
};

enum class Weight : quint16 {
    Calculating = 0xFFFE,
};

/// 0 - 100 indicates% of max hr; >100 indicates bpm (255 max) plus 100
enum class WorkoutHr : quint32 {
    BpmOffset  = 100,
};

/// 0 - 1000 indicates % of functional threshold power; >1000 indicates watts plus 1000.
enum class WorkoutPower : quint32 {
    WattsOffset  = 1000,
};

enum class BpStatus {
    NoError                    = 0,
    ErrorIncompleteData        = 1,
    ErrorNoMeasurement         = 2,
    ErrorDataOutOfRange        = 3,
    ErrorIrregularHeartRate    = 4,
};

enum class UserLocalId : quint16 {
    LocalMin       = 0x0000,
    LocalMax       = 0x000F,
    StationaryMin  = 0x0010,
    StationaryMax  = 0x00FF,
    PortableMin    = 0x0100,
    PortableMax    = 0xFFFE,
};

enum class SwimStroke {
    Freestyle    = 0,
    Backstroke   = 1,
    Breaststroke = 2,
    Butterfly    = 3,
    Drill        = 4,
    Mixed        = 5,
    Im           = 6, ///< IM is a mixed interval containing the same number of lengths for each of: Butterfly, Backstroke, Breaststroke, Freestyle, swam in that order.
};

enum class ActivityType {
    Generic           =   0,
    Running           =   1,
    Cycling           =   2,
    Transition        =   3, ///< Mulitsport transition
    FitnessEquipment  =   4,
    Swimming          =   5,
    Walking           =   6,
    Sedentary         =   8,
    All               = 254, ///< All is for goals only to include all sports.
};

enum class ActivitySubtype {
    Generic        =   0,
    Treadmill      =   1, ///< Run
    Street         =   2, ///< Run
    Trail          =   3, ///< Run
    Track          =   4, ///< Run
    Spin           =   5, ///< Cycling
    IndoorCycling  =   6, ///< Cycling
    Road           =   7, ///< Cycling
    Mountain       =   8, ///< Cycling
    Downhill       =   9, ///< Cycling
    Recumbent      =  10, ///< Cycling
    Cyclocross     =  11, ///< Cycling
    HandCycling    =  12, ///< Cycling
    TrackCycling   =  13, ///< Cycling
    IndoorRowing   =  14, ///< Fitness Equipment
    Elliptical     =  15, ///< Fitness Equipment
    StairClimbing  =  16, ///< Fitness Equipment
    LapSwimming    =  17, ///< Swimming
    OpenWater      =  18, ///< Swimming
    All            = 254,
};

enum class ActivityLevel {
    Low    = 0,
    Medium = 1,
    High   = 2,
};

enum class Side {
    Right = 0,
    Left  = 1,
};

enum class LeftRightBalance : quint8 {
    Mask  = 0x7F, ///< % contribution
    Right = 0x80, ///< data corresponds to right if set, otherwise unknown
};

enum class LeftRightBalance100 : quint16 {
    Mask  = 0x3FFF, ///< % contribution scaled by 100
    Right = 0x8000, ///< data corresponds to right if set, otherwise unknown
};

enum class LengthType {
    Idle   = 0, ///< Rest period. Length with no strokes
    Active = 1, ///< Length with strokes.
};

enum class DayOfWeek {
    Sunday    = 0,
    Monday    = 1,
    Tuesday   = 2,
    Wednesday = 3,
    Thursday  = 4,
    Friday    = 5,
    Saturday  = 6,
};

enum class ConnectivityCapabilities : quint32z {
    Bluetooth                           = 0x00000001,
    BluetoothLe                         = 0x00000002,
    Ant                                 = 0x00000004,
    ActivityUpload                      = 0x00000008,
    CourseDownload                      = 0x00000010,
    WorkoutDownload                     = 0x00000020,
    LiveTrack                           = 0x00000040,
    WeatherConditions                   = 0x00000080,
    WeatherAlerts                       = 0x00000100,
    GpsEphemerisDownload                = 0x00000200,
    ExplicitArchive                     = 0x00000400,
    SetupIncomplete                     = 0x00000800,
    ContinueSyncAfterSoftwareUpdate     = 0x00001000,
    ConnectIqAppDownload                = 0x00002000,
    GolfCourseDownload                  = 0x00004000,
    DeviceInitiatesSync                 = 0x00008000, ///< Indicates device is in control of initiating all syncs
    ConnectIqWatchAppDownload           = 0x00010000,
    ConnectIqWidgetDownload             = 0x00020000,
    ConnectIqWatchFaceDownload          = 0x00040000,
    ConnectIqDataFieldDownload          = 0x00080000,
    ConnectIqAppManagment               = 0x00100000, ///< Device supports delete and reorder of apps via GCM
    SwingSensor                         = 0x00200000,
    SwingSensorRemote                   = 0x00400000,
    IncidentDetection                   = 0x00800000, ///< Device supports incident detection
    AudioPrompts                        = 0x01000000,
    WifiVerification                    = 0x02000000, ///< Device supports reporting wifi verification via GCM
    TrueUp                              = 0x04000000, ///< Device supports True Up
    FindMyWatch                         = 0x08000000, ///< Device supports Find My Watch
    RemoteManualSync                    = 0x10000000,
    LiveTrackAutoStart                  = 0x20000000, ///< Device supports LiveTrack auto start
    LiveTrackMessaging                  = 0x40000000, ///< Device supports LiveTrack Messaging
    InstantInput                        = 0x80000000, ///< Device supports instant input feature
};

enum class WeatherReport {
    Current         = 0,
    Forecast        = 1, ///< Deprecated use hourly_forecast instead
    HourlyForecast  = 1,
    DailyForecast   = 2,
};

enum class WeatherStatus {
    Clear                   =  0,
    PartlyCloudy            =  1,
    MostlyCloudy            =  2,
    Rain                    =  3,
    Snow                    =  4,
    Windy                   =  5,
    Thunderstorms           =  6,
    WintryMix               =  7,
    Fog                     =  8,
    Hazy                    = 11,
    Hail                    = 12,
    ScatteredShowers        = 13,
    ScatteredThunderstorms  = 14,
    UnknownPrecipitation    = 15,
    LightRain               = 16,
    HeavyRain               = 17,
    LightSnow               = 18,
    HeavySnow               = 19,
    LightRainSnow           = 20,
    HeavyRainSnow           = 21,
    Cloudy                  = 22,
};

enum class WeatherSeverity {
    Unknown   = 0,
    Warning   = 1,
    Watch     = 2,
    Advisory  = 3,
    Statement = 4,
};

enum class WeatherSevereType {
    Unspecified                =  0,
    Tornado                    =  1,
    Tsunami                    =  2,
    Hurricane                  =  3,
    ExtremeWind                =  4,
    Typhoon                    =  5,
    InlandHurricane            =  6,
    HurricaneForceWind         =  7,
    Waterspout                 =  8,
    SevereThunderstorm         =  9,
    WreckhouseWinds            = 10,
    LesSuetesWind              = 11,
    Avalanche                  = 12,
    FlashFlood                 = 13,
    TropicalStorm              = 14,
    InlandTropicalStorm        = 15,
    Blizzard                   = 16,
    IceStorm                   = 17,
    FreezingRain               = 18,
    DebrisFlow                 = 19,
    FlashFreeze                = 20,
    DustStorm                  = 21,
    HighWind                   = 22,
    WinterStorm                = 23,
    HeavyFreezingSpray         = 24,
    ExtremeCold                = 25,
    WindChill                  = 26,
    ColdWave                   = 27,
    HeavySnowAlert             = 28,
    LakeEffectBlowingSnow      = 29,
    SnowSquall                 = 30,
    LakeEffectSnow             = 31,
    WinterWeather              = 32,
    Sleet                      = 33,
    Snowfall                   = 34,
    SnowAndBlowingSnow         = 35,
    BlowingSnow                = 36,
    SnowAlert                  = 37,
    ArcticOutflow              = 38,
    FreezingDrizzle            = 39,
    Storm                      = 40,
    StormSurge                 = 41,
    Rainfall                   = 42,
    ArealFlood                 = 43,
    CoastalFlood               = 44,
    LakeshoreFlood             = 45,
    ExcessiveHeat              = 46,
    Heat                       = 47,
    Weather                    = 48,
    HighHeatAndHumidity        = 49,
    HumidexAndHealth           = 50,
    Humidex                    = 51,
    Gale                       = 52,
    FreezingSpray              = 53,
    SpecialMarine              = 54,
    Squall                     = 55,
    StrongWind                 = 56,
    LakeWind                   = 57,
    MarineWeather              = 58,
    Wind                       = 59,
    SmallCraftHazardousSeas    = 60,
    HazardousSeas              = 61,
    SmallCraft                 = 62,
    SmallCraftWinds            = 63,
    SmallCraftRoughBar         = 64,
    HighWaterLevel             = 65,
    Ashfall                    = 66,
    FreezingFog                = 67,
    DenseFog                   = 68,
    DenseSmoke                 = 69,
    BlowingDust                = 70,
    HardFreeze                 = 71,
    Freeze                     = 72,
    Frost                      = 73,
    FireWeather                = 74,
    Flood                      = 75,
    RipTide                    = 76,
    HighSurf                   = 77,
    Smog                       = 78,
    AirQuality                 = 79,
    BriskWind                  = 80,
    AirStagnation              = 81,
    LowWater                   = 82,
    Hydrological               = 83,
    SpecialWeather             = 84,
};

/// number of seconds into the day since 00:00:00 UTC
enum class TimeIntoDay : quint32 {
};

/// number of seconds into the day since local 00:00:00
enum class LocaltimeIntoDay : quint32 {
};

enum class StrokeType {
    NoEvent  = 0,
    Other    = 1, ///< stroke was detected but cannot be identified
    Serve    = 2,
    Forehand = 3,
    Backhand = 4,
    Smash    = 5,
};

enum class BodyLocation {
    LeftLeg                 =  0,
    LeftCalf                =  1,
    LeftShin                =  2,
    LeftHamstring           =  3,
    LeftQuad                =  4,
    LeftGlute               =  5,
    RightLeg                =  6,
    RightCalf               =  7,
    RightShin               =  8,
    RightHamstring          =  9,
    RightQuad               = 10,
    RightGlute              = 11,
    TorsoBack               = 12,
    LeftLowerBack           = 13,
    LeftUpperBack           = 14,
    RightLowerBack          = 15,
    RightUpperBack          = 16,
    TorsoFront              = 17,
    LeftAbdomen             = 18,
    LeftChest               = 19,
    RightAbdomen            = 20,
    RightChest              = 21,
    LeftArm                 = 22,
    LeftShoulder            = 23,
    LeftBicep               = 24,
    LeftTricep              = 25,
    LeftBrachioradialis     = 26, ///< Left anterior forearm
    LeftForearmExtensors    = 27, ///< Left posterior forearm
    RightArm                = 28,
    RightShoulder           = 29,
    RightBicep              = 30,
    RightTricep             = 31,
    RightBrachioradialis    = 32, ///< Right anterior forearm
    RightForearmExtensors   = 33, ///< Right posterior forearm
    Neck                    = 34,
    Throat                  = 35,
    WaistMidBack            = 36,
    WaistFront              = 37,
    WaistLeft               = 38,
    WaistRight              = 39,
};

enum class SegmentLapStatus {
    End  = 0,
    Fail = 1,
};

enum class SegmentLeaderboardType {
    Overall       =  0,
    PersonalBest  =  1,
    Connections   =  2,
    Group         =  3,
    Challenger    =  4,
    Kom           =  5,
    Qom           =  6,
    Pr            =  7,
    Goal          =  8,
    Rival         =  9,
    ClubLeader    = 10,
};

enum class SegmentDeleteStatus {
    DoNotDelete   = 0,
    DeleteOne     = 1,
    DeleteAll     = 2,
};

enum class SegmentSelectionType {
    Starred   = 0,
    Suggested = 1,
};

enum class SourceType {
    Ant                  = 0, ///< External device connected with ANT
    Antplus              = 1, ///< External device connected with ANT+
    Bluetooth            = 2, ///< External device connected with BT
    BluetoothLowEnergy   = 3, ///< External device connected with BLE
    Wifi                 = 4, ///< External device connected with Wifi
    Local                = 5, ///< Onboard device
};

enum class LocalDeviceType : quint8 {
};

enum class DisplayOrientation {
    Auto              = 0, ///< automatic if the device supports it
    Portrait          = 1,
    Landscape         = 2,
    PortraitFlipped   = 3, ///< portrait mode but rotated 180 degrees
    LandscapeFlipped  = 4, ///< landscape mode but rotated 180 degrees
};

enum class WorkoutEquipment {
    None           = 0,
    SwimFins       = 1,
    SwimKickboard  = 2,
    SwimPaddles    = 3,
    SwimPullBuoy   = 4,
    SwimSnorkel    = 5,
};

enum class WatchfaceMode {
    Digital    = 0,
    Analog     = 1,
    ConnectIq  = 2,
    Disabled   = 3,
};

enum class DigitalWatchfaceLayout {
    Traditional = 0,
    Modern      = 1,
    Bold        = 2,
};

enum class AnalogWatchfaceLayout {
    Minimal     = 0,
    Traditional = 1,
    Modern      = 2,
};

enum class RiderPositionType {
    Seated                 = 0,
    Standing               = 1,
    TransitionToSeated     = 2,
    TransitionToStanding   = 3,
};

enum class PowerPhaseType {
    PowerPhaseStartAngle    = 0,
    PowerPhaseEndAngle      = 1,
    PowerPhaseArcLength     = 2,
    PowerPhaseCenter        = 3,
};

enum class CameraEventType {
    VideoStart                      =  0, ///< Start of video recording
    VideoSplit                      =  1, ///< Mark of video file split (end of one file, beginning of the other)
    VideoEnd                        =  2, ///< End of video recording
    PhotoTaken                      =  3, ///< Still photo taken
    VideoSecondStreamStart          =  4,
    VideoSecondStreamSplit          =  5,
    VideoSecondStreamEnd            =  6,
    VideoSplitStart                 =  7, ///< Mark of video file split start
    VideoSecondStreamSplitStart     =  8,
    VideoPause                      = 11, ///< Mark when a video recording has been paused
    VideoSecondStreamPause          = 12,
    VideoResume                     = 13, ///< Mark when a video recording has been resumed
    VideoSecondStreamResume         = 14,
};

enum class SensorType {
    Accelerometer = 0,
    Gyroscope     = 1,
    Compass       = 2, ///< Magnetometer
    Barometer     = 3,
};

enum class BikeLightNetworkConfigType {
    Auto            = 0,
    Individual      = 4,
    HighVisibility  = 5,
    Trail           = 6,
};

enum class CommTimeoutType : quint16 {
    WildcardPairingTimeout   = 0, ///< Timeout pairing to any device
    PairingTimeout           = 1, ///< Timeout pairing to previously paired device
    ConnectionLost           = 2, ///< Temporary loss of communications
    ConnectionTimeout        = 3, ///< Connection closed due to extended bad communications
};

enum class CameraOrientationType {
    CameraOrientation0     = 0,
    CameraOrientation90    = 1,
    CameraOrientation180   = 2,
    CameraOrientation270   = 3,
};

enum class AttitudeStage {
    Failed   = 0,
    Aligning = 1,
    Degraded = 2,
    Valid    = 3,
};

enum class AttitudeValidity : quint16 {
    TrackAngleHeadingValid    = 0x0001,
    PitchValid                = 0x0002,
    RollValid                 = 0x0004,
    LateralBodyAccelValid     = 0x0008,
    NormalBodyAccelValid      = 0x0010,
    TurnRateValid             = 0x0020,
    HwFail                    = 0x0040,
    MagInvalid                = 0x0080,
    NoGps                     = 0x0100,
    GpsInvalid                = 0x0200,
    SolutionCoasting          = 0x0400,
    TrueTrackAngle            = 0x0800,
    MagneticHeading           = 0x1000,
};

enum class AutoSyncFrequency {
    Never        = 0,
    Occasionally = 1,
    Frequent     = 2,
    OnceADay     = 3,
    Remote       = 4,
};

enum class ExdLayout {
    FullScreen                   = 0,
    HalfVertical                 = 1,
    HalfHorizontal               = 2,
    HalfVerticalRightSplit       = 3,
    HalfHorizontalBottomSplit    = 4,
    FullQuarterSplit             = 5,
    HalfVerticalLeftSplit        = 6,
    HalfHorizontalTopSplit       = 7,
    Dynamic                      = 8, ///< The EXD may display the configured concepts in any layout it sees fit.
};

enum class ExdDisplayType {
    Numerical           =  0,
    Simple              =  1,
    Graph               =  2,
    Bar                 =  3,
    CircleGraph         =  4,
    VirtualPartner      =  5,
    Balance             =  6,
    StringList          =  7,
    String              =  8,
    SimpleDynamicIcon   =  9,
    Gauge               = 10,
};

enum class ExdDataUnits {
    NoUnits                             =  0,
    Laps                                =  1,
    MilesPerHour                        =  2,
    KilometersPerHour                   =  3,
    FeetPerHour                         =  4,
    MetersPerHour                       =  5,
    DegreesCelsius                      =  6,
    DegreesFarenheit                    =  7,
    Zone                                =  8,
    Gear                                =  9,
    Rpm                                 = 10,
    Bpm                                 = 11,
    Degrees                             = 12,
    Millimeters                         = 13,
    Meters                              = 14,
    Kilometers                          = 15,
    Feet                                = 16,
    Yards                               = 17,
    Kilofeet                            = 18,
    Miles                               = 19,
    Time                                = 20,
    EnumTurnType                        = 21,
    Percent                             = 22,
    Watts                               = 23,
    WattsPerKilogram                    = 24,
    EnumBatteryStatus                   = 25,
    EnumBikeLightBeamAngleMode          = 26,
    EnumBikeLightBatteryStatus          = 27,
    EnumBikeLightNetworkConfigType      = 28,
    Lights                              = 29,
    Seconds                             = 30,
    Minutes                             = 31,
    Hours                               = 32,
    Calories                            = 33,
    Kilojoules                          = 34,
    Milliseconds                        = 35,
    SecondPerMile                       = 36,
    SecondPerKilometer                  = 37,
    Centimeter                          = 38,
    EnumCoursePoint                     = 39,
    Bradians                            = 40,
    EnumSport                           = 41,
    InchesHg                            = 42,
    MmHg                                = 43,
    Mbars                               = 44,
    HectoPascals                        = 45,
    FeetPerMin                          = 46,
    MetersPerMin                        = 47,
    MetersPerSec                        = 48,
    EightCardinal                       = 49,
};

enum class ExdQualifiers {
    NoQualifier                 =   0,
    Instantaneous               =   1,
    Average                     =   2,
    Lap                         =   3,
    Maximum                     =   4,
    MaximumAverage              =   5,
    MaximumLap                  =   6,
    LastLap                     =   7,
    AverageLap                  =   8,
    ToDestination               =   9,
    ToGo                        =  10,
    ToNext                      =  11,
    NextCoursePoint             =  12,
    Total                       =  13,
    ThreeSecondAverage          =  14,
    TenSecondAverage            =  15,
    ThirtySecondAverage         =  16,
    PercentMaximum              =  17,
    PercentMaximumAverage       =  18,
    LapPercentMaximum           =  19,
    Elapsed                     =  20,
    Sunrise                     =  21,
    Sunset                      =  22,
    ComparedToVirtualPartner    =  23,
    Maximum24h                  =  24,
    Minimum24h                  =  25,
    Minimum                     =  26,
    First                       =  27,
    Second                      =  28,
    Third                       =  29,
    Shifter                     =  30,
    LastSport                   =  31,
    Moving                      =  32,
    Stopped                     =  33,
    EstimatedTotal              =  34,
    Zone9                       = 242,
    Zone8                       = 243,
    Zone7                       = 244,
    Zone6                       = 245,
    Zone5                       = 246,
    Zone4                       = 247,
    Zone3                       = 248,
    Zone2                       = 249,
    Zone1                       = 250,
};

enum class ExdDescriptors {
    BikeLightBatteryStatus               =  0,
    BeamAngleStatus                      =  1,
    BateryLevel                          =  2,
    LightNetworkMode                     =  3,
    NumberLightsConnected                =  4,
    Cadence                              =  5,
    Distance                             =  6,
    EstimatedTimeOfArrival               =  7,
    Heading                              =  8,
    Time                                 =  9,
    BatteryLevel                         = 10,
    TrainerResistance                    = 11,
    TrainerTargetPower                   = 12,
    TimeSeated                           = 13,
    TimeStanding                         = 14,
    Elevation                            = 15,
    Grade                                = 16,
    Ascent                               = 17,
    Descent                              = 18,
    VerticalSpeed                        = 19,
    Di2BatteryLevel                      = 20,
    FrontGear                            = 21,
    RearGear                             = 22,
    GearRatio                            = 23,
    HeartRate                            = 24,
    HeartRateZone                        = 25,
    TimeInHeartRateZone                  = 26,
    HeartRateReserve                     = 27,
    Calories                             = 28,
    GpsAccuracy                          = 29,
    GpsSignalStrength                    = 30,
    Temperature                          = 31,
    TimeOfDay                            = 32,
    Balance                              = 33,
    PedalSmoothness                      = 34,
    Power                                = 35,
    FunctionalThresholdPower             = 36,
    IntensityFactor                      = 37,
    Work                                 = 38,
    PowerRatio                           = 39,
    NormalizedPower                      = 40,
    TrainingStressScore                  = 41,
    TimeOnZone                           = 42,
    Speed                                = 43,
    Laps                                 = 44,
    Reps                                 = 45,
    WorkoutStep                          = 46,
    CourseDistance                       = 47,
    NavigationDistance                   = 48,
    CourseEstimatedTimeOfArrival         = 49,
    NavigationEstimatedTimeOfArrival     = 50,
    CourseTime                           = 51,
    NavigationTime                       = 52,
    CourseHeading                        = 53,
    NavigationHeading                    = 54,
    PowerZone                            = 55,
    TorqueEffectiveness                  = 56,
    TimerTime                            = 57,
    PowerWeightRatio                     = 58,
    LeftPlatformCenterOffset             = 59,
    RightPlatformCenterOffset            = 60,
    LeftPowerPhaseStartAngle             = 61,
    RightPowerPhaseStartAngle            = 62,
    LeftPowerPhaseFinishAngle            = 63,
    RightPowerPhaseFinishAngle           = 64,
    Gears                                = 65, ///< Combined gear information
    Pace                                 = 66,
    TrainingEffect                       = 67,
    VerticalOscillation                  = 68,
    VerticalRatio                        = 69,
    GroundContactTime                    = 70,
    LeftGroundContactTimeBalance         = 71,
    RightGroundContactTimeBalance        = 72,
    StrideLength                         = 73,
    RunningCadence                       = 74,
    PerformanceCondition                 = 75,
    CourseType                           = 76,
    TimeInPowerZone                      = 77,
    NavigationTurn                       = 78,
    CourseLocation                       = 79,
    NavigationLocation                   = 80,
    Compass                              = 81,
    GearCombo                            = 82,
    MuscleOxygen                         = 83,
    Icon                                 = 84,
    CompassHeading                       = 85,
    GpsHeading                           = 86,
    GpsElevation                         = 87,
    AnaerobicTrainingEffect              = 88,
    Course                               = 89,
    OffCourse                            = 90,
    GlideRatio                           = 91,
    VerticalDistance                     = 92,
    Vmg                                  = 93,
    AmbientPressure                      = 94,
    Pressure                             = 95,
    Vam                                  = 96,
};

enum class AutoActivityDetect : quint32 {
    None       = 0x00000000,
    Running    = 0x00000001,
    Cycling    = 0x00000002,
    Swimming   = 0x00000004,
    Walking    = 0x00000008,
    Elliptical = 0x00000020,
    Sedentary  = 0x00000400,
};

enum class SupportedExdScreenLayouts : quint32z {
    FullScreen                   = 0x00000001,
    HalfVertical                 = 0x00000002,
    HalfHorizontal               = 0x00000004,
    HalfVerticalRightSplit       = 0x00000008,
    HalfHorizontalBottomSplit    = 0x00000010,
    FullQuarterSplit             = 0x00000020,
    HalfVerticalLeftSplit        = 0x00000040,
    HalfHorizontalTopSplit       = 0x00000080,
};

enum class FitBaseType : quint8 {
    Enum    =   0,
    Sint8   =   1,
    Uint8   =   2,
    Sint16  = 131,
    Uint16  = 132,
    Sint32  = 133,
    Uint32  = 134,
    String  =   7,
    Float32 = 136,
    Float64 = 137,
    Uint8z  =  10,
    Uint16z = 139,
    Uint32z = 140,
    Byte    =  13,
    Sint64  = 142,
    Uint64  = 143,
    Uint64z = 144,
};

enum class TurnType {
    ArrivingIdx                =  0,
    ArrivingLeftIdx            =  1,
    ArrivingRightIdx           =  2,
    ArrivingViaIdx             =  3,
    ArrivingViaLeftIdx         =  4,
    ArrivingViaRightIdx        =  5,
    BearKeepLeftIdx            =  6,
    BearKeepRightIdx           =  7,
    ContinueIdx                =  8,
    ExitLeftIdx                =  9,
    ExitRightIdx               = 10,
    FerryIdx                   = 11,
    Roundabout45Idx            = 12,
    Roundabout90Idx            = 13,
    Roundabout135Idx           = 14,
    Roundabout180Idx           = 15,
    Roundabout225Idx           = 16,
    Roundabout270Idx           = 17,
    Roundabout315Idx           = 18,
    Roundabout360Idx           = 19,
    RoundaboutNeg45Idx         = 20,
    RoundaboutNeg90Idx         = 21,
    RoundaboutNeg135Idx        = 22,
    RoundaboutNeg180Idx        = 23,
    RoundaboutNeg225Idx        = 24,
    RoundaboutNeg270Idx        = 25,
    RoundaboutNeg315Idx        = 26,
    RoundaboutNeg360Idx        = 27,
    RoundaboutGenericIdx       = 28,
    RoundaboutNegGenericIdx    = 29,
    SharpTurnLeftIdx           = 30,
    SharpTurnRightIdx          = 31,
    TurnLeftIdx                = 32,
    TurnRightIdx               = 33,
    UturnLeftIdx               = 34,
    UturnRightIdx              = 35,
    IconInvIdx                 = 36,
    IconIdxCnt                 = 37,
};

enum class BikeLightBeamAngleMode : quint8 {
    Manual = 0,
    Auto   = 1,
};

enum class FitBaseUnit : quint16 {
    Other    = 0,
    Kilogram = 1,
    Pound    = 2,
};

enum class SetType : quint8 {
    Rest   = 0,
    Active = 1,
};

enum class ExerciseCategory : quint16 {
    BenchPress         =     0,
    CalfRaise          =     1,
    Cardio             =     2,
    Carry              =     3,
    Chop               =     4,
    Core               =     5,
    Crunch             =     6,
    Curl               =     7,
    Deadlift           =     8,
    Flye               =     9,
    HipRaise           =    10,
    HipStability       =    11,
    HipSwing           =    12,
    Hyperextension     =    13,
    LateralRaise       =    14,
    LegCurl            =    15,
    LegRaise           =    16,
    Lunge              =    17,
    OlympicLift        =    18,
    Plank              =    19,
    Plyo               =    20,
    PullUp             =    21,
    PushUp             =    22,
    Row                =    23,
    ShoulderPress      =    24,
    ShoulderStability  =    25,
    Shrug              =    26,
    SitUp              =    27,
    Squat              =    28,
    TotalBody          =    29,
    TricepsExtension   =    30,
    WarmUp             =    31,
    Run                =    32,
    Unknown            = 65534,
};

enum class BenchPressExerciseName : quint16 {
    AlternatingDumbbellChestPressOnSwissBall       =  0,
    BarbellBenchPress                              =  1,
    BarbellBoardBenchPress                         =  2,
    BarbellFloorPress                              =  3,
    CloseGripBarbellBenchPress                     =  4,
    DeclineDumbbellBenchPress                      =  5,
    DumbbellBenchPress                             =  6,
    DumbbellFloorPress                             =  7,
    InclineBarbellBenchPress                       =  8,
    InclineDumbbellBenchPress                      =  9,
    InclineSmithMachineBenchPress                  = 10,
    IsometricBarbellBenchPress                     = 11,
    KettlebellChestPress                           = 12,
    NeutralGripDumbbellBenchPress                  = 13,
    NeutralGripDumbbellInclineBenchPress           = 14,
    OneArmFloorPress                               = 15,
    WeightedOneArmFloorPress                       = 16,
    PartialLockout                                 = 17,
    ReverseGripBarbellBenchPress                   = 18,
    ReverseGripInclineBenchPress                   = 19,
    SingleArmCableChestPress                       = 20,
    SingleArmDumbbellBenchPress                    = 21,
    SmithMachineBenchPress                         = 22,
    SwissBallDumbbellChestPress                    = 23,
    TripleStopBarbellBenchPress                    = 24,
    WideGripBarbellBenchPress                      = 25,
    AlternatingDumbbellChestPress                  = 26,
};

enum class CalfRaiseExerciseName : quint16 {
    ThreeWayCalfRaise                        =  0,
    ThreeWayWeightedCalfRaise                =  1,
    ThreeWaySingleLegCalfRaise               =  2,
    ThreeWayWeightedSingleLegCalfRaise       =  3,
    DonkeyCalfRaise                          =  4,
    WeightedDonkeyCalfRaise                  =  5,
    SeatedCalfRaise                          =  6,
    WeightedSeatedCalfRaise                  =  7,
    SeatedDumbbellToeRaise                   =  8,
    SingleLegBentKneeCalfRaise               =  9,
    WeightedSingleLegBentKneeCalfRaise       = 10,
    SingleLegDeclinePushUp                   = 11,
    SingleLegDonkeyCalfRaise                 = 12,
    WeightedSingleLegDonkeyCalfRaise         = 13,
    SingleLegHipRaiseWithKneeHold            = 14,
    SingleLegStandingCalfRaise               = 15,
    SingleLegStandingDumbbellCalfRaise       = 16,
    StandingBarbellCalfRaise                 = 17,
    StandingCalfRaise                        = 18,
    WeightedStandingCalfRaise                = 19,
    StandingDumbbellCalfRaise                = 20,
};

enum class CardioExerciseName : quint16 {
    BobAndWeaveCircle             =  0,
    WeightedBobAndWeaveCircle     =  1,
    CardioCoreCrawl               =  2,
    WeightedCardioCoreCrawl       =  3,
    DoubleUnder                   =  4,
    WeightedDoubleUnder           =  5,
    JumpRope                      =  6,
    WeightedJumpRope              =  7,
    JumpRopeCrossover             =  8,
    WeightedJumpRopeCrossover     =  9,
    JumpRopeJog                   = 10,
    WeightedJumpRopeJog           = 11,
    JumpingJacks                  = 12,
    WeightedJumpingJacks          = 13,
    SkiMoguls                     = 14,
    WeightedSkiMoguls             = 15,
    SplitJacks                    = 16,
    WeightedSplitJacks            = 17,
    SquatJacks                    = 18,
    WeightedSquatJacks            = 19,
    TripleUnder                   = 20,
    WeightedTripleUnder           = 21,
};

enum class CarryExerciseName : quint16 {
    BarHolds             = 0,
    FarmersWalk          = 1,
    FarmersWalkOnToes    = 2,
    HexDumbbellHold      = 3,
    OverheadCarry        = 4,
};

enum class ChopExerciseName : quint16 {
    CablePullThrough                       =  0,
    CableRotationalLift                    =  1,
    CableWoodchop                          =  2,
    CrossChopToKnee                        =  3,
    WeightedCrossChopToKnee                =  4,
    DumbbellChop                           =  5,
    HalfKneelingRotation                   =  6,
    WeightedHalfKneelingRotation           =  7,
    HalfKneelingRotationalChop             =  8,
    HalfKneelingRotationalReverseChop      =  9,
    HalfKneelingStabilityChop              = 10,
    HalfKneelingStabilityReverseChop       = 11,
    KneelingRotationalChop                 = 12,
    KneelingRotationalReverseChop          = 13,
    KneelingStabilityChop                  = 14,
    KneelingWoodchopper                    = 15,
    MedicineBallWoodChops                  = 16,
    PowerSquatChops                        = 17,
    WeightedPowerSquatChops                = 18,
    StandingRotationalChop                 = 19,
    StandingSplitRotationalChop            = 20,
    StandingSplitRotationalReverseChop     = 21,
    StandingStabilityReverseChop           = 22,
};

enum class CoreExerciseName : quint16 {
    AbsJabs                              =  0,
    WeightedAbsJabs                      =  1,
    AlternatingPlateReach                =  2,
    BarbellRollout                       =  3,
    WeightedBarbellRollout               =  4,
    BodyBarObliqueTwist                  =  5,
    CableCorePress                       =  6,
    CableSideBend                        =  7,
    SideBend                             =  8,
    WeightedSideBend                     =  9,
    CrescentCircle                       = 10,
    WeightedCrescentCircle               = 11,
    CyclingRussianTwist                  = 12,
    WeightedCyclingRussianTwist          = 13,
    ElevatedFeetRussianTwist             = 14,
    WeightedElevatedFeetRussianTwist     = 15,
    HalfTurkishGetUp                     = 16,
    KettlebellWindmill                   = 17,
    KneelingAbWheel                      = 18,
    WeightedKneelingAbWheel              = 19,
    ModifiedFrontLever                   = 20,
    OpenKneeTucks                        = 21,
    WeightedOpenKneeTucks                = 22,
    SideAbsLegLift                       = 23,
    WeightedSideAbsLegLift               = 24,
    SwissBallJackknife                   = 25,
    WeightedSwissBallJackknife           = 26,
    SwissBallPike                        = 27,
    WeightedSwissBallPike                = 28,
    SwissBallRollout                     = 29,
    WeightedSwissBallRollout             = 30,
    TriangleHipPress                     = 31,
    WeightedTriangleHipPress             = 32,
    TrxSuspendedJackknife                = 33,
    WeightedTrxSuspendedJackknife        = 34,
    UBoat                                = 35,
    WeightedUBoat                        = 36,
    WindmillSwitches                     = 37,
    WeightedWindmillSwitches             = 38,
    AlternatingSlideOut                  = 39,
    WeightedAlternatingSlideOut          = 40,
    GhdBackExtensions                    = 41,
    WeightedGhdBackExtensions            = 42,
    OverheadWalk                         = 43,
    Inchworm                             = 44,
    WeightedModifiedFrontLever           = 45,
    RussianTwist                         = 46,
    AbdominalLegRotations                = 47, ///< Deprecated do not use
    ArmAndLegExtensionOnKnees            = 48,
    Bicycle                              = 49,
    BicepCurlWithLegExtension            = 50,
    CatCow                               = 51,
    Corkscrew                            = 52,
    CrissCross                           = 53,
    CrissCrossWithBall                   = 54, ///< Deprecated do not use
    DoubleLegStretch                     = 55,
    KneeFolds                            = 56,
    LowerLift                            = 57,
    NeckPull                             = 58,
    PelvicClocks                         = 59,
    RollOver                             = 60,
    RollUp                               = 61,
    Rolling                              = 62,
    Rowing1                              = 63,
    Rowing2                              = 64,
    Scissors                             = 65,
    SingleLegCircles                     = 66,
    SingleLegStretch                     = 67,
    SnakeTwist1And2                      = 68, ///< Deprecated do not use
    Swan                                 = 69,
    Swimming                             = 70,
    Teaser                               = 71,
    TheHundred                           = 72,
};

enum class CrunchExerciseName : quint16 {
    BicycleCrunch                                 =  0,
    CableCrunch                                   =  1,
    CircularArmCrunch                             =  2,
    CrossedArmsCrunch                             =  3,
    WeightedCrossedArmsCrunch                     =  4,
    CrossLegReverseCrunch                         =  5,
    WeightedCrossLegReverseCrunch                 =  6,
    CrunchChop                                    =  7,
    WeightedCrunchChop                            =  8,
    DoubleCrunch                                  =  9,
    WeightedDoubleCrunch                          = 10,
    ElbowToKneeCrunch                             = 11,
    WeightedElbowToKneeCrunch                     = 12,
    FlutterKicks                                  = 13,
    WeightedFlutterKicks                          = 14,
    FoamRollerReverseCrunchOnBench                = 15,
    WeightedFoamRollerReverseCrunchOnBench        = 16,
    FoamRollerReverseCrunchWithDumbbell           = 17,
    FoamRollerReverseCrunchWithMedicineBall       = 18,
    FrogPress                                     = 19,
    HangingKneeRaiseObliqueCrunch                 = 20,
    WeightedHangingKneeRaiseObliqueCrunch         = 21,
    HipCrossover                                  = 22,
    WeightedHipCrossover                          = 23,
    HollowRock                                    = 24,
    WeightedHollowRock                            = 25,
    InclineReverseCrunch                          = 26,
    WeightedInclineReverseCrunch                  = 27,
    KneelingCableCrunch                           = 28,
    KneelingCrossCrunch                           = 29,
    WeightedKneelingCrossCrunch                   = 30,
    KneelingObliqueCableCrunch                    = 31,
    KneesToElbow                                  = 32,
    LegExtensions                                 = 33,
    WeightedLegExtensions                         = 34,
    LegLevers                                     = 35,
    McgillCurlUp                                  = 36,
    WeightedMcgillCurlUp                          = 37,
    ModifiedPilatesRollUpWithBall                 = 38,
    WeightedModifiedPilatesRollUpWithBall         = 39,
    PilatesCrunch                                 = 40,
    WeightedPilatesCrunch                         = 41,
    PilatesRollUpWithBall                         = 42,
    WeightedPilatesRollUpWithBall                 = 43,
    RaisedLegsCrunch                              = 44,
    WeightedRaisedLegsCrunch                      = 45,
    ReverseCrunch                                 = 46,
    WeightedReverseCrunch                         = 47,
    ReverseCrunchOnABench                         = 48,
    WeightedReverseCrunchOnABench                 = 49,
    ReverseCurlAndLift                            = 50,
    WeightedReverseCurlAndLift                    = 51,
    RotationalLift                                = 52,
    WeightedRotationalLift                        = 53,
    SeatedAlternatingReverseCrunch                = 54,
    WeightedSeatedAlternatingReverseCrunch        = 55,
    SeatedLegU                                    = 56,
    WeightedSeatedLegU                            = 57,
    SideToSideCrunchAndWeave                      = 58,
    WeightedSideToSideCrunchAndWeave              = 59,
    SingleLegReverseCrunch                        = 60,
    WeightedSingleLegReverseCrunch                = 61,
    SkaterCrunchCross                             = 62,
    WeightedSkaterCrunchCross                     = 63,
    StandingCableCrunch                           = 64,
    StandingSideCrunch                            = 65,
    StepClimb                                     = 66,
    WeightedStepClimb                             = 67,
    SwissBallCrunch                               = 68,
    SwissBallReverseCrunch                        = 69,
    WeightedSwissBallReverseCrunch                = 70,
    SwissBallRussianTwist                         = 71,
    WeightedSwissBallRussianTwist                 = 72,
    SwissBallSideCrunch                           = 73,
    WeightedSwissBallSideCrunch                   = 74,
    ThoracicCrunchesOnFoamRoller                  = 75,
    WeightedThoracicCrunchesOnFoamRoller          = 76,
    TricepsCrunch                                 = 77,
    WeightedBicycleCrunch                         = 78,
    WeightedCrunch                                = 79,
    WeightedSwissBallCrunch                       = 80,
    ToesToBar                                     = 81,
    WeightedToesToBar                             = 82,
    Crunch                                        = 83,
    StraightLegCrunchWithBall                     = 84,
};

enum class CurlExerciseName : quint16 {
    AlternatingDumbbellBicepsCurl                  =  0,
    AlternatingDumbbellBicepsCurlOnSwissBall       =  1,
    AlternatingInclineDumbbellBicepsCurl           =  2,
    BarbellBicepsCurl                              =  3,
    BarbellReverseWristCurl                        =  4,
    BarbellWristCurl                               =  5,
    BehindTheBackBarbellReverseWristCurl           =  6,
    BehindTheBackOneArmCableCurl                   =  7,
    CableBicepsCurl                                =  8,
    CableHammerCurl                                =  9,
    CheatingBarbellBicepsCurl                      = 10,
    CloseGripEzBarBicepsCurl                       = 11,
    CrossBodyDumbbellHammerCurl                    = 12,
    DeadHangBicepsCurl                             = 13,
    DeclineHammerCurl                              = 14,
    DumbbellBicepsCurlWithStaticHold               = 15,
    DumbbellHammerCurl                             = 16,
    DumbbellReverseWristCurl                       = 17,
    DumbbellWristCurl                              = 18,
    EzBarPreacherCurl                              = 19,
    ForwardBendBicepsCurl                          = 20,
    HammerCurlToPress                              = 21,
    InclineDumbbellBicepsCurl                      = 22,
    InclineOffsetThumbDumbbellCurl                 = 23,
    KettlebellBicepsCurl                           = 24,
    LyingConcentrationCableCurl                    = 25,
    OneArmPreacherCurl                             = 26,
    PlatePinchCurl                                 = 27,
    PreacherCurlWithCable                          = 28,
    ReverseEzBarCurl                               = 29,
    ReverseGripWristCurl                           = 30,
    ReverseGripBarbellBicepsCurl                   = 31,
    SeatedAlternatingDumbbellBicepsCurl            = 32,
    SeatedDumbbellBicepsCurl                       = 33,
    SeatedReverseDumbbellCurl                      = 34,
    SplitStanceOffsetPinkyDumbbellCurl             = 35,
    StandingAlternatingDumbbellCurls               = 36,
    StandingDumbbellBicepsCurl                     = 37,
    StandingEzBarBicepsCurl                        = 38,
    StaticCurl                                     = 39,
    SwissBallDumbbellOverheadTricepsExtension      = 40,
    SwissBallEzBarPreacherCurl                     = 41,
    TwistingStandingDumbbellBicepsCurl             = 42,
    WideGripEzBarBicepsCurl                        = 43,
};

enum class DeadliftExerciseName : quint16 {
    BarbellDeadlift                            =  0,
    BarbellStraightLegDeadlift                 =  1,
    DumbbellDeadlift                           =  2,
    DumbbellSingleLegDeadliftToRow             =  3,
    DumbbellStraightLegDeadlift                =  4,
    KettlebellFloorToShelf                     =  5,
    OneArmOneLegDeadlift                       =  6,
    RackPull                                   =  7,
    RotationalDumbbellStraightLegDeadlift      =  8,
    SingleArmDeadlift                          =  9,
    SingleLegBarbellDeadlift                   = 10,
    SingleLegBarbellStraightLegDeadlift        = 11,
    SingleLegDeadliftWithBarbell               = 12,
    SingleLegRdlCircuit                        = 13,
    SingleLegRomanianDeadliftWithDumbbell      = 14,
    SumoDeadlift                               = 15,
    SumoDeadliftHighPull                       = 16,
    TrapBarDeadlift                            = 17,
    WideGripBarbellDeadlift                    = 18,
};

enum class FlyeExerciseName : quint16 {
    CableCrossover                         = 0,
    DeclineDumbbellFlye                    = 1,
    DumbbellFlye                           = 2,
    InclineDumbbellFlye                    = 3,
    KettlebellFlye                         = 4,
    KneelingRearFlye                       = 5,
    SingleArmStandingCableReverseFlye      = 6,
    SwissBallDumbbellFlye                  = 7,
    ArmRotations                           = 8,
    HugATree                               = 9,
};

enum class HipRaiseExerciseName : quint16 {
    BarbellHipThrustOnFloor                                  =  0,
    BarbellHipThrustWithBench                                =  1,
    BentKneeSwissBallReverseHipRaise                         =  2,
    WeightedBentKneeSwissBallReverseHipRaise                 =  3,
    BridgeWithLegExtension                                   =  4,
    WeightedBridgeWithLegExtension                           =  5,
    ClamBridge                                               =  6,
    FrontKickTabletop                                        =  7,
    WeightedFrontKickTabletop                                =  8,
    HipExtensionAndCross                                     =  9,
    WeightedHipExtensionAndCross                             = 10,
    HipRaise                                                 = 11,
    WeightedHipRaise                                         = 12,
    HipRaiseWithFeetOnSwissBall                              = 13,
    WeightedHipRaiseWithFeetOnSwissBall                      = 14,
    HipRaiseWithHeadOnBosuBall                               = 15,
    WeightedHipRaiseWithHeadOnBosuBall                       = 16,
    HipRaiseWithHeadOnSwissBall                              = 17,
    WeightedHipRaiseWithHeadOnSwissBall                      = 18,
    HipRaiseWithKneeSqueeze                                  = 19,
    WeightedHipRaiseWithKneeSqueeze                          = 20,
    InclineRearLegExtension                                  = 21,
    WeightedInclineRearLegExtension                          = 22,
    KettlebellSwing                                          = 23,
    MarchingHipRaise                                         = 24,
    WeightedMarchingHipRaise                                 = 25,
    MarchingHipRaiseWithFeetOnASwissBall                     = 26,
    WeightedMarchingHipRaiseWithFeetOnASwissBall             = 27,
    ReverseHipRaise                                          = 28,
    WeightedReverseHipRaise                                  = 29,
    SingleLegHipRaise                                        = 30,
    WeightedSingleLegHipRaise                                = 31,
    SingleLegHipRaiseWithFootOnBench                         = 32,
    WeightedSingleLegHipRaiseWithFootOnBench                 = 33,
    SingleLegHipRaiseWithFootOnBosuBall                      = 34,
    WeightedSingleLegHipRaiseWithFootOnBosuBall              = 35,
    SingleLegHipRaiseWithFootOnFoamRoller                    = 36,
    WeightedSingleLegHipRaiseWithFootOnFoamRoller            = 37,
    SingleLegHipRaiseWithFootOnMedicineBall                  = 38,
    WeightedSingleLegHipRaiseWithFootOnMedicineBall          = 39,
    SingleLegHipRaiseWithHeadOnBosuBall                      = 40,
    WeightedSingleLegHipRaiseWithHeadOnBosuBall              = 41,
    WeightedClamBridge                                       = 42,
    SingleLegSwissBallHipRaiseAndLegCurl                     = 43,
    Clams                                                    = 44,
    InnerThighCircles                                        = 45, ///< Deprecated do not use
    InnerThighSideLift                                       = 46, ///< Deprecated do not use
    LegCircles                                               = 47,
    LegLift                                                  = 48,
    LegLiftInExternalRotation                                = 49,
};

enum class HipStabilityExerciseName : quint16 {
    BandSideLyingLegRaise                 =  0,
    DeadBug                               =  1,
    WeightedDeadBug                       =  2,
    ExternalHipRaise                      =  3,
    WeightedExternalHipRaise              =  4,
    FireHydrantKicks                      =  5,
    WeightedFireHydrantKicks              =  6,
    HipCircles                            =  7,
    WeightedHipCircles                    =  8,
    InnerThighLift                        =  9,
    WeightedInnerThighLift                = 10,
    LateralWalksWithBandAtAnkles          = 11,
    PretzelSideKick                       = 12,
    WeightedPretzelSideKick               = 13,
    ProneHipInternalRotation              = 14,
    WeightedProneHipInternalRotation      = 15,
    Quadruped                             = 16,
    QuadrupedHipExtension                 = 17,
    WeightedQuadrupedHipExtension         = 18,
    QuadrupedWithLegLift                  = 19,
    WeightedQuadrupedWithLegLift          = 20,
    SideLyingLegRaise                     = 21,
    WeightedSideLyingLegRaise             = 22,
    SlidingHipAdduction                   = 23,
    WeightedSlidingHipAdduction           = 24,
    StandingAdduction                     = 25,
    WeightedStandingAdduction             = 26,
    StandingCableHipAbduction             = 27,
    StandingHipAbduction                  = 28,
    WeightedStandingHipAbduction          = 29,
    StandingRearLegRaise                  = 30,
    WeightedStandingRearLegRaise          = 31,
    SupineHipInternalRotation             = 32,
    WeightedSupineHipInternalRotation     = 33,
};

enum class HipSwingExerciseName : quint16 {
    SingleArmKettlebellSwing    = 0,
    SingleArmDumbbellSwing      = 1,
    StepOutSwing                = 2,
};

enum class HyperextensionExerciseName : quint16 {
    BackExtensionWithOppositeArmAndLegReach                 =  0,
    WeightedBackExtensionWithOppositeArmAndLegReach         =  1,
    BaseRotations                                           =  2,
    WeightedBaseRotations                                   =  3,
    BentKneeReverseHyperextension                           =  4,
    WeightedBentKneeReverseHyperextension                   =  5,
    HollowHoldAndRoll                                       =  6,
    WeightedHollowHoldAndRoll                               =  7,
    Kicks                                                   =  8,
    WeightedKicks                                           =  9,
    KneeRaises                                              = 10,
    WeightedKneeRaises                                      = 11,
    KneelingSuperman                                        = 12,
    WeightedKneelingSuperman                                = 13,
    LatPullDownWithRow                                      = 14,
    MedicineBallDeadliftToReach                             = 15,
    OneArmOneLegRow                                         = 16,
    OneArmRowWithBand                                       = 17,
    OverheadLungeWithMedicineBall                           = 18,
    PlankKneeTucks                                          = 19,
    WeightedPlankKneeTucks                                  = 20,
    SideStep                                                = 21,
    WeightedSideStep                                        = 22,
    SingleLegBackExtension                                  = 23,
    WeightedSingleLegBackExtension                          = 24,
    SpineExtension                                          = 25,
    WeightedSpineExtension                                  = 26,
    StaticBackExtension                                     = 27,
    WeightedStaticBackExtension                             = 28,
    SupermanFromFloor                                       = 29,
    WeightedSupermanFromFloor                               = 30,
    SwissBallBackExtension                                  = 31,
    WeightedSwissBallBackExtension                          = 32,
    SwissBallHyperextension                                 = 33,
    WeightedSwissBallHyperextension                         = 34,
    SwissBallOppositeArmAndLegLift                          = 35,
    WeightedSwissBallOppositeArmAndLegLift                  = 36,
    SupermanOnSwissBall                                     = 37,
    Cobra                                                   = 38,
    SupineFloorBarre                                        = 39, ///< Deprecated do not use
};

enum class LateralRaiseExerciseName : quint16 {
    FortyFiveDegreeCableExternalRotation       =  0,
    AlternatingLateralRaiseWithStaticHold      =  1,
    BarMuscleUp                                =  2,
    BentOverLateralRaise                       =  3,
    CableDiagonalRaise                         =  4,
    CableFrontRaise                            =  5,
    CalorieRow                                 =  6,
    ComboShoulderRaise                         =  7,
    DumbbellDiagonalRaise                      =  8,
    DumbbellVRaise                             =  9,
    FrontRaise                                 = 10,
    LeaningDumbbellLateralRaise                = 11,
    LyingDumbbellRaise                         = 12,
    MuscleUp                                   = 13,
    OneArmCableLateralRaise                    = 14,
    OverhandGripRearLateralRaise               = 15,
    PlateRaises                                = 16,
    RingDip                                    = 17,
    WeightedRingDip                            = 18,
    RingMuscleUp                               = 19,
    WeightedRingMuscleUp                       = 20,
    RopeClimb                                  = 21,
    WeightedRopeClimb                          = 22,
    Scaption                                   = 23,
    SeatedLateralRaise                         = 24,
    SeatedRearLateralRaise                     = 25,
    SideLyingLateralRaise                      = 26,
    StandingLift                               = 27,
    SuspendedRow                               = 28,
    UnderhandGripRearLateralRaise              = 29,
    WallSlide                                  = 30,
    WeightedWallSlide                          = 31,
    ArmCircles                                 = 32,
    ShavingTheHead                             = 33,
};

enum class LegCurlExerciseName : quint16 {
    LegCurl                           =  0,
    WeightedLegCurl                   =  1,
    GoodMorning                       =  2,
    SeatedBarbellGoodMorning          =  3,
    SingleLegBarbellGoodMorning       =  4,
    SingleLegSlidingLegCurl           =  5,
    SlidingLegCurl                    =  6,
    SplitBarbellGoodMorning           =  7,
    SplitStanceExtension              =  8,
    StaggeredStanceGoodMorning        =  9,
    SwissBallHipRaiseAndLegCurl       = 10,
    ZercherGoodMorning                = 11,
};

enum class LegRaiseExerciseName : quint16 {
    HangingKneeRaise                         =  0,
    HangingLegRaise                          =  1,
    WeightedHangingLegRaise                  =  2,
    HangingSingleLegRaise                    =  3,
    WeightedHangingSingleLegRaise            =  4,
    KettlebellLegRaises                      =  5,
    LegLoweringDrill                         =  6,
    WeightedLegLoweringDrill                 =  7,
    LyingStraightLegRaise                    =  8,
    WeightedLyingStraightLegRaise            =  9,
    MedicineBallLegDrops                     = 10,
    QuadrupedLegRaise                        = 11,
    WeightedQuadrupedLegRaise                = 12,
    ReverseLegRaise                          = 13,
    WeightedReverseLegRaise                  = 14,
    ReverseLegRaiseOnSwissBall               = 15,
    WeightedReverseLegRaiseOnSwissBall       = 16,
    SingleLegLoweringDrill                   = 17,
    WeightedSingleLegLoweringDrill           = 18,
    WeightedHangingKneeRaise                 = 19,
    LateralStepover                          = 20,
    WeightedLateralStepover                  = 21,
};

enum class LungeExerciseName : quint16 {
    OverheadLunge                                        =  0,
    LungeMatrix                                          =  1,
    WeightedLungeMatrix                                  =  2,
    AlternatingBarbellForwardLunge                       =  3,
    AlternatingDumbbellLungeWithReach                    =  4,
    BackFootElevatedDumbbellSplitSquat                   =  5,
    BarbellBoxLunge                                      =  6,
    BarbellBulgarianSplitSquat                           =  7,
    BarbellCrossoverLunge                                =  8,
    BarbellFrontSplitSquat                               =  9,
    BarbellLunge                                         = 10,
    BarbellReverseLunge                                  = 11,
    BarbellSideLunge                                     = 12,
    BarbellSplitSquat                                    = 13,
    CoreControlRearLunge                                 = 14,
    DiagonalLunge                                        = 15,
    DropLunge                                            = 16,
    DumbbellBoxLunge                                     = 17,
    DumbbellBulgarianSplitSquat                          = 18,
    DumbbellCrossoverLunge                               = 19,
    DumbbellDiagonalLunge                                = 20,
    DumbbellLunge                                        = 21,
    DumbbellLungeAndRotation                             = 22,
    DumbbellOverheadBulgarianSplitSquat                  = 23,
    DumbbellReverseLungeToHighKneeAndPress               = 24,
    DumbbellSideLunge                                    = 25,
    ElevatedFrontFootBarbellSplitSquat                   = 26,
    FrontFootElevatedDumbbellSplitSquat                  = 27,
    GunslingerLunge                                      = 28,
    LawnmowerLunge                                       = 29,
    LowLungeWithIsometricAdduction                       = 30,
    LowSideToSideLunge                                   = 31,
    Lunge                                                = 32,
    WeightedLunge                                        = 33,
    LungeWithArmReach                                    = 34,
    LungeWithDiagonalReach                               = 35,
    LungeWithSideBend                                    = 36,
    OffsetDumbbellLunge                                  = 37,
    OffsetDumbbellReverseLunge                           = 38,
    OverheadBulgarianSplitSquat                          = 39,
    OverheadDumbbellReverseLunge                         = 40,
    OverheadDumbbellSplitSquat                           = 41,
    OverheadLungeWithRotation                            = 42,
    ReverseBarbellBoxLunge                               = 43,
    ReverseBoxLunge                                      = 44,
    ReverseDumbbellBoxLunge                              = 45,
    ReverseDumbbellCrossoverLunge                        = 46,
    ReverseDumbbellDiagonalLunge                         = 47,
    ReverseLungeWithReachBack                            = 48,
    WeightedReverseLungeWithReachBack                    = 49,
    ReverseLungeWithTwistAndOverheadReach                = 50,
    WeightedReverseLungeWithTwistAndOverheadReach        = 51,
    ReverseSlidingBoxLunge                               = 52,
    WeightedReverseSlidingBoxLunge                       = 53,
    ReverseSlidingLunge                                  = 54,
    WeightedReverseSlidingLunge                          = 55,
    RunnersLungeToBalance                                = 56,
    WeightedRunnersLungeToBalance                        = 57,
    ShiftingSideLunge                                    = 58,
    SideAndCrossoverLunge                                = 59,
    WeightedSideAndCrossoverLunge                        = 60,
    SideLunge                                            = 61,
    WeightedSideLunge                                    = 62,
    SideLungeAndPress                                    = 63,
    SideLungeJumpOff                                     = 64,
    SideLungeSweep                                       = 65,
    WeightedSideLungeSweep                               = 66,
    SideLungeToCrossoverTap                              = 67,
    WeightedSideLungeToCrossoverTap                      = 68,
    SideToSideLungeChops                                 = 69,
    WeightedSideToSideLungeChops                         = 70,
    SiffJumpLunge                                        = 71,
    WeightedSiffJumpLunge                                = 72,
    SingleArmReverseLungeAndPress                        = 73,
    SlidingLateralLunge                                  = 74,
    WeightedSlidingLateralLunge                          = 75,
    WalkingBarbellLunge                                  = 76,
    WalkingDumbbellLunge                                 = 77,
    WalkingLunge                                         = 78,
    WeightedWalkingLunge                                 = 79,
    WideGripOverheadBarbellSplitSquat                    = 80,
};

enum class OlympicLiftExerciseName : quint16 {
    BarbellHangPowerClean          =  0,
    BarbellHangSquatClean          =  1,
    BarbellPowerClean              =  2,
    BarbellPowerSnatch             =  3,
    BarbellSquatClean              =  4,
    CleanAndJerk                   =  5,
    BarbellHangPowerSnatch         =  6,
    BarbellHangPull                =  7,
    BarbellHighPull                =  8,
    BarbellSnatch                  =  9,
    BarbellSplitJerk               = 10,
    Clean                          = 11,
    DumbbellClean                  = 12,
    DumbbellHangPull               = 13,
    OneHandDumbbellSplitSnatch     = 14,
    PushJerk                       = 15,
    SingleArmDumbbellSnatch        = 16,
    SingleArmHangSnatch            = 17,
    SingleArmKettlebellSnatch      = 18,
    SplitJerk                      = 19,
    SquatCleanAndJerk              = 20,
};

enum class PlankExerciseName : quint16 {
    FortyFiveDegreePlank                                      =   0,
    Weighted45DegreePlank                                     =   1,
    NinetyDegreeStaticHold                                    =   2,
    Weighted90DegreeStaticHold                                =   3,
    BearCrawl                                                 =   4,
    WeightedBearCrawl                                         =   5,
    CrossBodyMountainClimber                                  =   6,
    WeightedCrossBodyMountainClimber                          =   7,
    ElbowPlankPikeJacks                                       =   8,
    WeightedElbowPlankPikeJacks                               =   9,
    ElevatedFeetPlank                                         =  10,
    WeightedElevatedFeetPlank                                 =  11,
    ElevatorAbs                                               =  12,
    WeightedElevatorAbs                                       =  13,
    ExtendedPlank                                             =  14,
    WeightedExtendedPlank                                     =  15,
    FullPlankPasseTwist                                       =  16,
    WeightedFullPlankPasseTwist                               =  17,
    InchingElbowPlank                                         =  18,
    WeightedInchingElbowPlank                                 =  19,
    InchwormToSidePlank                                       =  20,
    WeightedInchwormToSidePlank                               =  21,
    KneelingPlank                                             =  22,
    WeightedKneelingPlank                                     =  23,
    KneelingSidePlankWithLegLift                              =  24,
    WeightedKneelingSidePlankWithLegLift                      =  25,
    LateralRoll                                               =  26,
    WeightedLateralRoll                                       =  27,
    LyingReversePlank                                         =  28,
    WeightedLyingReversePlank                                 =  29,
    MedicineBallMountainClimber                               =  30,
    WeightedMedicineBallMountainClimber                       =  31,
    ModifiedMountainClimberAndExtension                       =  32,
    WeightedModifiedMountainClimberAndExtension               =  33,
    MountainClimber                                           =  34,
    WeightedMountainClimber                                   =  35,
    MountainClimberOnSlidingDiscs                             =  36,
    WeightedMountainClimberOnSlidingDiscs                     =  37,
    MountainClimberWithFeetOnBosuBall                         =  38,
    WeightedMountainClimberWithFeetOnBosuBall                 =  39,
    MountainClimberWithHandsOnBench                           =  40,
    MountainClimberWithHandsOnSwissBall                       =  41,
    WeightedMountainClimberWithHandsOnSwissBall               =  42,
    Plank                                                     =  43,
    PlankJacksWithFeetOnSlidingDiscs                          =  44,
    WeightedPlankJacksWithFeetOnSlidingDiscs                  =  45,
    PlankKneeTwist                                            =  46,
    WeightedPlankKneeTwist                                    =  47,
    PlankPikeJumps                                            =  48,
    WeightedPlankPikeJumps                                    =  49,
    PlankPikes                                                =  50,
    WeightedPlankPikes                                        =  51,
    PlankToStandUp                                            =  52,
    WeightedPlankToStandUp                                    =  53,
    PlankWithArmRaise                                         =  54,
    WeightedPlankWithArmRaise                                 =  55,
    PlankWithKneeToElbow                                      =  56,
    WeightedPlankWithKneeToElbow                              =  57,
    PlankWithObliqueCrunch                                    =  58,
    WeightedPlankWithObliqueCrunch                            =  59,
    PlyometricSidePlank                                       =  60,
    WeightedPlyometricSidePlank                               =  61,
    RollingSidePlank                                          =  62,
    WeightedRollingSidePlank                                  =  63,
    SideKickPlank                                             =  64,
    WeightedSideKickPlank                                     =  65,
    SidePlank                                                 =  66,
    WeightedSidePlank                                         =  67,
    SidePlankAndRow                                           =  68,
    WeightedSidePlankAndRow                                   =  69,
    SidePlankLift                                             =  70,
    WeightedSidePlankLift                                     =  71,
    SidePlankWithElbowOnBosuBall                              =  72,
    WeightedSidePlankWithElbowOnBosuBall                      =  73,
    SidePlankWithFeetOnBench                                  =  74,
    WeightedSidePlankWithFeetOnBench                          =  75,
    SidePlankWithKneeCircle                                   =  76,
    WeightedSidePlankWithKneeCircle                           =  77,
    SidePlankWithKneeTuck                                     =  78,
    WeightedSidePlankWithKneeTuck                             =  79,
    SidePlankWithLegLift                                      =  80,
    WeightedSidePlankWithLegLift                              =  81,
    SidePlankWithReachUnder                                   =  82,
    WeightedSidePlankWithReachUnder                           =  83,
    SingleLegElevatedFeetPlank                                =  84,
    WeightedSingleLegElevatedFeetPlank                        =  85,
    SingleLegFlexAndExtend                                    =  86,
    WeightedSingleLegFlexAndExtend                            =  87,
    SingleLegSidePlank                                        =  88,
    WeightedSingleLegSidePlank                                =  89,
    SpidermanPlank                                            =  90,
    WeightedSpidermanPlank                                    =  91,
    StraightArmPlank                                          =  92,
    WeightedStraightArmPlank                                  =  93,
    StraightArmPlankWithShoulderTouch                         =  94,
    WeightedStraightArmPlankWithShoulderTouch                 =  95,
    SwissBallPlank                                            =  96,
    WeightedSwissBallPlank                                    =  97,
    SwissBallPlankLegLift                                     =  98,
    WeightedSwissBallPlankLegLift                             =  99,
    SwissBallPlankLegLiftAndHold                              = 100,
    SwissBallPlankWithFeetOnBench                             = 101,
    WeightedSwissBallPlankWithFeetOnBench                     = 102,
    SwissBallProneJackknife                                   = 103,
    WeightedSwissBallProneJackknife                           = 104,
    SwissBallSidePlank                                        = 105,
    WeightedSwissBallSidePlank                                = 106,
    ThreeWayPlank                                             = 107,
    WeightedThreeWayPlank                                     = 108,
    TowelPlankAndKneeIn                                       = 109,
    WeightedTowelPlankAndKneeIn                               = 110,
    TStabilization                                            = 111,
    WeightedTStabilization                                    = 112,
    TurkishGetUpToSidePlank                                   = 113,
    WeightedTurkishGetUpToSidePlank                           = 114,
    TwoPointPlank                                             = 115,
    WeightedTwoPointPlank                                     = 116,
    WeightedPlank                                             = 117,
    WideStancePlankWithDiagonalArmLift                        = 118,
    WeightedWideStancePlankWithDiagonalArmLift                = 119,
    WideStancePlankWithDiagonalLegLift                        = 120,
    WeightedWideStancePlankWithDiagonalLegLift                = 121,
    WideStancePlankWithLegLift                                = 122,
    WeightedWideStancePlankWithLegLift                        = 123,
    WideStancePlankWithOppositeArmAndLegLift                  = 124,
    WeightedMountainClimberWithHandsOnBench                   = 125,
    WeightedSwissBallPlankLegLiftAndHold                      = 126,
    WeightedWideStancePlankWithOppositeArmAndLegLift          = 127,
    PlankWithFeetOnSwissBall                                  = 128,
    SidePlankToPlankWithReachUnder                            = 129,
    BridgeWithGluteLowerLift                                  = 130,
    BridgeOneLegBridge                                        = 131,
    PlankWithArmVariations                                    = 132,
    PlankWithLegLift                                          = 133,
    ReversePlankWithLegPull                                   = 134,
};

enum class PlyoExerciseName : quint16 {
    AlternatingJumpLunge                       =  0,
    WeightedAlternatingJumpLunge               =  1,
    BarbellJumpSquat                           =  2,
    BodyWeightJumpSquat                        =  3,
    WeightedJumpSquat                          =  4,
    CrossKneeStrike                            =  5,
    WeightedCrossKneeStrike                    =  6,
    DepthJump                                  =  7,
    WeightedDepthJump                          =  8,
    DumbbellJumpSquat                          =  9,
    DumbbellSplitJump                          = 10,
    FrontKneeStrike                            = 11,
    WeightedFrontKneeStrike                    = 12,
    HighBoxJump                                = 13,
    WeightedHighBoxJump                        = 14,
    IsometricExplosiveBodyWeightJumpSquat      = 15,
    WeightedIsometricExplosiveJumpSquat        = 16,
    LateralLeapAndHop                          = 17,
    WeightedLateralLeapAndHop                  = 18,
    LateralPlyoSquats                          = 19,
    WeightedLateralPlyoSquats                  = 20,
    LateralSlide                               = 21,
    WeightedLateralSlide                       = 22,
    MedicineBallOverheadThrows                 = 23,
    MedicineBallSideThrow                      = 24,
    MedicineBallSlam                           = 25,
    SideToSideMedicineBallThrows               = 26,
    SideToSideShuffleJump                      = 27,
    WeightedSideToSideShuffleJump              = 28,
    SquatJumpOntoBox                           = 29,
    WeightedSquatJumpOntoBox                   = 30,
    SquatJumpsInAndOut                         = 31,
    WeightedSquatJumpsInAndOut                 = 32,
};

enum class PullUpExerciseName : quint16 {
    BandedPullUps                        =  0,
    ThirtyDegreeLatPulldown              =  1,
    BandAssistedChinUp                   =  2,
    CloseGripChinUp                      =  3,
    WeightedCloseGripChinUp              =  4,
    CloseGripLatPulldown                 =  5,
    CrossoverChinUp                      =  6,
    WeightedCrossoverChinUp              =  7,
    EzBarPullover                        =  8,
    HangingHurdle                        =  9,
    WeightedHangingHurdle                = 10,
    KneelingLatPulldown                  = 11,
    KneelingUnderhandGripLatPulldown     = 12,
    LatPulldown                          = 13,
    MixedGripChinUp                      = 14,
    WeightedMixedGripChinUp              = 15,
    MixedGripPullUp                      = 16,
    WeightedMixedGripPullUp              = 17,
    ReverseGripPulldown                  = 18,
    StandingCablePullover                = 19,
    StraightArmPulldown                  = 20,
    SwissBallEzBarPullover               = 21,
    TowelPullUp                          = 22,
    WeightedTowelPullUp                  = 23,
    WeightedPullUp                       = 24,
    WideGripLatPulldown                  = 25,
    WideGripPullUp                       = 26,
    WeightedWideGripPullUp               = 27,
    BurpeePullUp                         = 28,
    WeightedBurpeePullUp                 = 29,
    JumpingPullUps                       = 30,
    WeightedJumpingPullUps               = 31,
    KippingPullUp                        = 32,
    WeightedKippingPullUp                = 33,
    LPullUp                              = 34,
    WeightedLPullUp                      = 35,
    SuspendedChinUp                      = 36,
    WeightedSuspendedChinUp              = 37,
    PullUp                               = 38,
};

enum class PushUpExerciseName : quint16 {
    ChestPressWithBand                               =  0,
    AlternatingStaggeredPushUp                       =  1,
    WeightedAlternatingStaggeredPushUp               =  2,
    AlternatingHandsMedicineBallPushUp               =  3,
    WeightedAlternatingHandsMedicineBallPushUp       =  4,
    BosuBallPushUp                                   =  5,
    WeightedBosuBallPushUp                           =  6,
    ClappingPushUp                                   =  7,
    WeightedClappingPushUp                           =  8,
    CloseGripMedicineBallPushUp                      =  9,
    WeightedCloseGripMedicineBallPushUp              = 10,
    CloseHandsPushUp                                 = 11,
    WeightedCloseHandsPushUp                         = 12,
    DeclinePushUp                                    = 13,
    WeightedDeclinePushUp                            = 14,
    DiamondPushUp                                    = 15,
    WeightedDiamondPushUp                            = 16,
    ExplosiveCrossoverPushUp                         = 17,
    WeightedExplosiveCrossoverPushUp                 = 18,
    ExplosivePushUp                                  = 19,
    WeightedExplosivePushUp                          = 20,
    FeetElevatedSideToSidePushUp                     = 21,
    WeightedFeetElevatedSideToSidePushUp             = 22,
    HandReleasePushUp                                = 23,
    WeightedHandReleasePushUp                        = 24,
    HandstandPushUp                                  = 25,
    WeightedHandstandPushUp                          = 26,
    InclinePushUp                                    = 27,
    WeightedInclinePushUp                            = 28,
    IsometricExplosivePushUp                         = 29,
    WeightedIsometricExplosivePushUp                 = 30,
    JudoPushUp                                       = 31,
    WeightedJudoPushUp                               = 32,
    KneelingPushUp                                   = 33,
    WeightedKneelingPushUp                           = 34,
    MedicineBallChestPass                            = 35,
    MedicineBallPushUp                               = 36,
    WeightedMedicineBallPushUp                       = 37,
    OneArmPushUp                                     = 38,
    WeightedOneArmPushUp                             = 39,
    WeightedPushUp                                   = 40,
    PushUpAndRow                                     = 41,
    WeightedPushUpAndRow                             = 42,
    PushUpPlus                                       = 43,
    WeightedPushUpPlus                               = 44,
    PushUpWithFeetOnSwissBall                        = 45,
    WeightedPushUpWithFeetOnSwissBall                = 46,
    PushUpWithOneHandOnMedicineBall                  = 47,
    WeightedPushUpWithOneHandOnMedicineBall          = 48,
    ShoulderPushUp                                   = 49,
    WeightedShoulderPushUp                           = 50,
    SingleArmMedicineBallPushUp                      = 51,
    WeightedSingleArmMedicineBallPushUp              = 52,
    SpidermanPushUp                                  = 53,
    WeightedSpidermanPushUp                          = 54,
    StackedFeetPushUp                                = 55,
    WeightedStackedFeetPushUp                        = 56,
    StaggeredHandsPushUp                             = 57,
    WeightedStaggeredHandsPushUp                     = 58,
    SuspendedPushUp                                  = 59,
    WeightedSuspendedPushUp                          = 60,
    SwissBallPushUp                                  = 61,
    WeightedSwissBallPushUp                          = 62,
    SwissBallPushUpPlus                              = 63,
    WeightedSwissBallPushUpPlus                      = 64,
    TPushUp                                          = 65,
    WeightedTPushUp                                  = 66,
    TripleStopPushUp                                 = 67,
    WeightedTripleStopPushUp                         = 68,
    WideHandsPushUp                                  = 69,
    WeightedWideHandsPushUp                          = 70,
    ParalletteHandstandPushUp                        = 71,
    WeightedParalletteHandstandPushUp                = 72,
    RingHandstandPushUp                              = 73,
    WeightedRingHandstandPushUp                      = 74,
    RingPushUp                                       = 75,
    WeightedRingPushUp                               = 76,
    PushUp                                           = 77,
    PilatesPushup                                    = 78,
};

enum class RowExerciseName : quint16 {
    BarbellStraightLegDeadliftToRow                   =  0,
    CableRowStanding                                  =  1,
    DumbbellRow                                       =  2,
    ElevatedFeetInvertedRow                           =  3,
    WeightedElevatedFeetInvertedRow                   =  4,
    FacePull                                          =  5,
    FacePullWithExternalRotation                      =  6,
    InvertedRowWithFeetOnSwissBall                    =  7,
    WeightedInvertedRowWithFeetOnSwissBall            =  8,
    KettlebellRow                                     =  9,
    ModifiedInvertedRow                               = 10,
    WeightedModifiedInvertedRow                       = 11,
    NeutralGripAlternatingDumbbellRow                 = 12,
    OneArmBentOverRow                                 = 13,
    OneLeggedDumbbellRow                              = 14,
    RenegadeRow                                       = 15,
    ReverseGripBarbellRow                             = 16,
    RopeHandleCableRow                                = 17,
    SeatedCableRow                                    = 18,
    SeatedDumbbellRow                                 = 19,
    SingleArmCableRow                                 = 20,
    SingleArmCableRowAndRotation                      = 21,
    SingleArmInvertedRow                              = 22,
    WeightedSingleArmInvertedRow                      = 23,
    SingleArmNeutralGripDumbbellRow                   = 24,
    SingleArmNeutralGripDumbbellRowAndRotation        = 25,
    SuspendedInvertedRow                              = 26,
    WeightedSuspendedInvertedRow                      = 27,
    TBarRow                                           = 28,
    TowelGripInvertedRow                              = 29,
    WeightedTowelGripInvertedRow                      = 30,
    UnderhandGripCableRow                             = 31,
    VGripCableRow                                     = 32,
    WideGripSeatedCableRow                            = 33,
};

enum class ShoulderPressExerciseName : quint16 {
    AlternatingDumbbellShoulderPress              =  0,
    ArnoldPress                                   =  1,
    BarbellFrontSquatToPushPress                  =  2,
    BarbellPushPress                              =  3,
    BarbellShoulderPress                          =  4,
    DeadCurlPress                                 =  5,
    DumbbellAlternatingShoulderPressAndTwist      =  6,
    DumbbellHammerCurlToLungeToPress              =  7,
    DumbbellPushPress                             =  8,
    FloorInvertedShoulderPress                    =  9,
    WeightedFloorInvertedShoulderPress            = 10,
    InvertedShoulderPress                         = 11,
    WeightedInvertedShoulderPress                 = 12,
    OneArmPushPress                               = 13,
    OverheadBarbellPress                          = 14,
    OverheadDumbbellPress                         = 15,
    SeatedBarbellShoulderPress                    = 16,
    SeatedDumbbellShoulderPress                   = 17,
    SingleArmDumbbellShoulderPress                = 18,
    SingleArmStepUpAndPress                       = 19,
    SmithMachineOverheadPress                     = 20,
    SplitStanceHammerCurlToPress                  = 21,
    SwissBallDumbbellShoulderPress                = 22,
    WeightPlateFrontRaise                         = 23,
};

enum class ShoulderStabilityExerciseName : quint16 {
    NinetyDegreeCableExternalRotation            =  0,
    BandExternalRotation                         =  1,
    BandInternalRotation                         =  2,
    BentArmLateralRaiseAndExternalRotation       =  3,
    CableExternalRotation                        =  4,
    DumbbellFacePullWithExternalRotation         =  5,
    FloorIRaise                                  =  6,
    WeightedFloorIRaise                          =  7,
    FloorTRaise                                  =  8,
    WeightedFloorTRaise                          =  9,
    FloorYRaise                                  = 10,
    WeightedFloorYRaise                          = 11,
    InclineIRaise                                = 12,
    WeightedInclineIRaise                        = 13,
    InclineLRaise                                = 14,
    WeightedInclineLRaise                        = 15,
    InclineTRaise                                = 16,
    WeightedInclineTRaise                        = 17,
    InclineWRaise                                = 18,
    WeightedInclineWRaise                        = 19,
    InclineYRaise                                = 20,
    WeightedInclineYRaise                        = 21,
    LyingExternalRotation                        = 22,
    SeatedDumbbellExternalRotation               = 23,
    StandingLRaise                               = 24,
    SwissBallIRaise                              = 25,
    WeightedSwissBallIRaise                      = 26,
    SwissBallTRaise                              = 27,
    WeightedSwissBallTRaise                      = 28,
    SwissBallWRaise                              = 29,
    WeightedSwissBallWRaise                      = 30,
    SwissBallYRaise                              = 31,
    WeightedSwissBallYRaise                      = 32,
};

enum class ShrugExerciseName : quint16 {
    BarbellJumpShrug                    =  0,
    BarbellShrug                        =  1,
    BarbellUprightRow                   =  2,
    BehindTheBackSmithMachineShrug      =  3,
    DumbbellJumpShrug                   =  4,
    DumbbellShrug                       =  5,
    DumbbellUprightRow                  =  6,
    InclineDumbbellShrug                =  7,
    OverheadBarbellShrug                =  8,
    OverheadDumbbellShrug               =  9,
    ScaptionAndShrug                    = 10,
    ScapularRetraction                  = 11,
    SerratusChairShrug                  = 12,
    WeightedSerratusChairShrug          = 13,
    SerratusShrug                       = 14,
    WeightedSerratusShrug               = 15,
    WideGripJumpShrug                   = 16,
};

enum class SitUpExerciseName : quint16 {
    AlternatingSitUp                         =  0,
    WeightedAlternatingSitUp                 =  1,
    BentKneeVUp                              =  2,
    WeightedBentKneeVUp                      =  3,
    ButterflySitUp                           =  4,
    WeightedButterflySitup                   =  5,
    CrossPunchRollUp                         =  6,
    WeightedCrossPunchRollUp                 =  7,
    CrossedArmsSitUp                         =  8,
    WeightedCrossedArmsSitUp                 =  9,
    GetUpSitUp                               = 10,
    WeightedGetUpSitUp                       = 11,
    HoveringSitUp                            = 12,
    WeightedHoveringSitUp                    = 13,
    KettlebellSitUp                          = 14,
    MedicineBallAlternatingVUp               = 15,
    MedicineBallSitUp                        = 16,
    MedicineBallVUp                          = 17,
    ModifiedSitUp                            = 18,
    NegativeSitUp                            = 19,
    OneArmFullSitUp                          = 20,
    RecliningCircle                          = 21,
    WeightedRecliningCircle                  = 22,
    ReverseCurlUp                            = 23,
    WeightedReverseCurlUp                    = 24,
    SingleLegSwissBallJackknife              = 25,
    WeightedSingleLegSwissBallJackknife      = 26,
    TheTeaser                                = 27,
    TheTeaserWeighted                        = 28,
    ThreePartRollDown                        = 29,
    WeightedThreePartRollDown                = 30,
    VUp                                      = 31,
    WeightedVUp                              = 32,
    WeightedRussianTwistOnSwissBall          = 33,
    WeightedSitUp                            = 34,
    XAbs                                     = 35,
    WeightedXAbs                             = 36,
    SitUp                                    = 37,
};

enum class SquatExerciseName : quint16 {
    LegPress                                                 =  0,
    BackSquatWithBodyBar                                     =  1,
    BackSquats                                               =  2,
    WeightedBackSquats                                       =  3,
    BalancingSquat                                           =  4,
    WeightedBalancingSquat                                   =  5,
    BarbellBackSquat                                         =  6,
    BarbellBoxSquat                                          =  7,
    BarbellFrontSquat                                        =  8,
    BarbellHackSquat                                         =  9,
    BarbellHangSquatSnatch                                   = 10,
    BarbellLateralStepUp                                     = 11,
    BarbellQuarterSquat                                      = 12,
    BarbellSiffSquat                                         = 13,
    BarbellSquatSnatch                                       = 14,
    BarbellSquatWithHeelsRaised                              = 15,
    BarbellStepover                                          = 16,
    BarbellStepUp                                            = 17,
    BenchSquatWithRotationalChop                             = 18,
    WeightedBenchSquatWithRotationalChop                     = 19,
    BodyWeightWallSquat                                      = 20,
    WeightedWallSquat                                        = 21,
    BoxStepSquat                                             = 22,
    WeightedBoxStepSquat                                     = 23,
    BracedSquat                                              = 24,
    CrossedArmBarbellFrontSquat                              = 25,
    CrossoverDumbbellStepUp                                  = 26,
    DumbbellFrontSquat                                       = 27,
    DumbbellSplitSquat                                       = 28,
    DumbbellSquat                                            = 29,
    DumbbellSquatClean                                       = 30,
    DumbbellStepover                                         = 31,
    DumbbellStepUp                                           = 32,
    ElevatedSingleLegSquat                                   = 33,
    WeightedElevatedSingleLegSquat                           = 34,
    FigureFourSquats                                         = 35,
    WeightedFigureFourSquats                                 = 36,
    GobletSquat                                              = 37,
    KettlebellSquat                                          = 38,
    KettlebellSwingOverhead                                  = 39,
    KettlebellSwingWithFlipToSquat                           = 40,
    LateralDumbbellStepUp                                    = 41,
    OneLeggedSquat                                           = 42,
    OverheadDumbbellSquat                                    = 43,
    OverheadSquat                                            = 44,
    PartialSingleLegSquat                                    = 45,
    WeightedPartialSingleLegSquat                            = 46,
    PistolSquat                                              = 47,
    WeightedPistolSquat                                      = 48,
    PlieSlides                                               = 49,
    WeightedPlieSlides                                       = 50,
    PlieSquat                                                = 51,
    WeightedPlieSquat                                        = 52,
    PrisonerSquat                                            = 53,
    WeightedPrisonerSquat                                    = 54,
    SingleLegBenchGetUp                                      = 55,
    WeightedSingleLegBenchGetUp                              = 56,
    SingleLegBenchSquat                                      = 57,
    WeightedSingleLegBenchSquat                              = 58,
    SingleLegSquatOnSwissBall                                = 59,
    WeightedSingleLegSquatOnSwissBall                        = 60,
    Squat                                                    = 61,
    WeightedSquat                                            = 62,
    SquatsWithBand                                           = 63,
    StaggeredSquat                                           = 64,
    WeightedStaggeredSquat                                   = 65,
    StepUp                                                   = 66,
    WeightedStepUp                                           = 67,
    SuitcaseSquats                                           = 68,
    SumoSquat                                                = 69,
    SumoSquatSlideIn                                         = 70,
    WeightedSumoSquatSlideIn                                 = 71,
    SumoSquatToHighPull                                      = 72,
    SumoSquatToStand                                         = 73,
    WeightedSumoSquatToStand                                 = 74,
    SumoSquatWithRotation                                    = 75,
    WeightedSumoSquatWithRotation                            = 76,
    SwissBallBodyWeightWallSquat                             = 77,
    WeightedSwissBallWallSquat                               = 78,
    Thrusters                                                = 79,
    UnevenSquat                                              = 80,
    WeightedUnevenSquat                                      = 81,
    WaistSlimmingSquat                                       = 82,
    WallBall                                                 = 83,
    WideStanceBarbellSquat                                   = 84,
    WideStanceGobletSquat                                    = 85,
    ZercherSquat                                             = 86,
    KbsOverhead                                              = 87, ///< Deprecated do not use
    SquatAndSideKick                                         = 88,
    SquatJumpsInNOut                                         = 89,
    PilatesPlieSquatsParallelTurnedOutFlatAndHeels           = 90,
    ReleveStraightLegAndKneeBentWithOneLegVariation          = 91,
};

enum class TotalBodyExerciseName : quint16 {
    Burpee                               =  0,
    WeightedBurpee                       =  1,
    BurpeeBoxJump                        =  2,
    WeightedBurpeeBoxJump                =  3,
    HighPullBurpee                       =  4,
    ManMakers                            =  5,
    OneArmBurpee                         =  6,
    SquatThrusts                         =  7,
    WeightedSquatThrusts                 =  8,
    SquatPlankPushUp                     =  9,
    WeightedSquatPlankPushUp             = 10,
    StandingTRotationBalance             = 11,
    WeightedStandingTRotationBalance     = 12,
};

enum class TricepsExtensionExerciseName : quint16 {
    BenchDip                                          =  0,
    WeightedBenchDip                                  =  1,
    BodyWeightDip                                     =  2,
    CableKickback                                     =  3,
    CableLyingTricepsExtension                        =  4,
    CableOverheadTricepsExtension                     =  5,
    DumbbellKickback                                  =  6,
    DumbbellLyingTricepsExtension                     =  7,
    EzBarOverheadTricepsExtension                     =  8,
    InclineDip                                        =  9,
    WeightedInclineDip                                = 10,
    InclineEzBarLyingTricepsExtension                 = 11,
    LyingDumbbellPulloverToExtension                  = 12,
    LyingEzBarTricepsExtension                        = 13,
    LyingTricepsExtensionToCloseGripBenchPress        = 14,
    OverheadDumbbellTricepsExtension                  = 15,
    RecliningTricepsPress                             = 16,
    ReverseGripPressdown                              = 17,
    ReverseGripTricepsPressdown                       = 18,
    RopePressdown                                     = 19,
    SeatedBarbellOverheadTricepsExtension             = 20,
    SeatedDumbbellOverheadTricepsExtension            = 21,
    SeatedEzBarOverheadTricepsExtension               = 22,
    SeatedSingleArmOverheadDumbbellExtension          = 23,
    SingleArmDumbbellOverheadTricepsExtension         = 24,
    SingleDumbbellSeatedOverheadTricepsExtension      = 25,
    SingleLegBenchDipAndKick                          = 26,
    WeightedSingleLegBenchDipAndKick                  = 27,
    SingleLegDip                                      = 28,
    WeightedSingleLegDip                              = 29,
    StaticLyingTricepsExtension                       = 30,
    SuspendedDip                                      = 31,
    WeightedSuspendedDip                              = 32,
    SwissBallDumbbellLyingTricepsExtension            = 33,
    SwissBallEzBarLyingTricepsExtension               = 34,
    SwissBallEzBarOverheadTricepsExtension            = 35,
    TabletopDip                                       = 36,
    WeightedTabletopDip                               = 37,
    TricepsExtensionOnFloor                           = 38,
    TricepsPressdown                                  = 39,
    WeightedDip                                       = 40,
};

enum class WarmUpExerciseName : quint16 {
    QuadrupedRocking                =  0,
    NeckTilts                       =  1,
    AnkleCircles                    =  2,
    AnkleDorsiflexionWithBand       =  3,
    AnkleInternalRotation           =  4,
    ArmCircles                      =  5,
    BentOverReachToSky              =  6,
    CatCamel                        =  7,
    ElbowToFootLunge                =  8,
    ForwardAndBackwardLegSwings     =  9,
    Groiners                        = 10,
    InvertedHamstringStretch        = 11,
    LateralDuckUnder                = 12,
    NeckRotations                   = 13,
    OppositeArmAndLegBalance        = 14,
    ReachRollAndLift                = 15,
    Scorpion                        = 16, ///< Deprecated do not use
    ShoulderCircles                 = 17,
    SideToSideLegSwings             = 18,
    SleeperStretch                  = 19,
    SlideOut                        = 20,
    SwissBallHipCrossover           = 21,
    SwissBallReachRollAndLift       = 22,
    SwissBallWindshieldWipers       = 23,
    ThoracicRotation                = 24,
    WalkingHighKicks                = 25,
    WalkingHighKnees                = 26,
    WalkingKneeHugs                 = 27,
    WalkingLegCradles               = 28,
    Walkout                         = 29,
    WalkoutFromPushUpPosition       = 30,
};

enum class RunExerciseName : quint16 {
    Run    = 0,
    Walk   = 1,
    Jog    = 2,
    Sprint = 3,
};

enum class WaterType {
    Fresh   = 0,
    Salt    = 1,
    En13319 = 2,
    Custom  = 3,
};

enum class TissueModelType {
    Zhl16c  = 0, ///< Buhlmann's decompression algorithm, version C
};

enum class DiveGasStatus {
    Disabled    = 0,
    Enabled     = 1,
    BackupOnly  = 2,
};

enum class DiveAlarmType {
    Depth = 0,
    Time  = 1,
};

enum class DiveBacklightMode {
    AtDepth   = 0,
    AlwaysOn  = 1,
};

enum class FaveroProduct : quint16 {
    AssiomaUno  = 10,
    AssiomaDuo  = 12,
};

enum class ClimbProEvent {
    Approach = 0,
    Start    = 1,
    Complete = 2,
};

enum class TapSensitivity {
    High   = 0,
    Medium = 1,
    Low    = 2,
};

enum class RadarThreatLevelType {
    ThreatUnknown           = 0,
    ThreatNone              = 1,
    ThreatApproaching       = 2,
    ThreatApproachingFast   = 3,
};

QTFIT_END_NAMESPACE

#endif // QTFIT_TYPES_H
