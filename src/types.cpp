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

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 *
 * \todo Document this.
 */

#include "types.h"

QTFIT_BEGIN_NAMESPACE

QDebug operator<<(QDebug debug, const File value)
{
    switch (value) {
    case File::Device          : debug << "Device"; break;
    case File::Settings        : debug << "Settings"; break;
    case File::Sport           : debug << "Sport"; break;
    case File::Activity        : debug << "Activity"; break;
    case File::Workout         : debug << "Workout"; break;
    case File::Course          : debug << "Course"; break;
    case File::Schedules       : debug << "Schedules"; break;
    case File::Weight          : debug << "Weight"; break;
    case File::Totals          : debug << "Totals"; break;
    case File::Goals           : debug << "Goals"; break;
    case File::BloodPressure   : debug << "BloodPressure"; break;
    case File::MonitoringA     : debug << "MonitoringA"; break;
    case File::ActivitySummary : debug << "ActivitySummary"; break;
    case File::MonitoringDaily : debug << "MonitoringDaily"; break;
    case File::MonitoringB     : debug << "MonitoringB"; break;
    case File::Segment         : debug << "Segment"; break;
    case File::SegmentList     : debug << "SegmentList"; break;
    case File::ExdConfiguration: debug << "ExdConfiguration"; break;
    case File::MfgRangeMin     : debug << "MfgRangeMin"; break;
    case File::MfgRangeMax     : debug << "MfgRangeMax"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const MesgNum value)
{
    switch (value) {
    case MesgNum::FileId                     : debug << "FileId"; break;
    case MesgNum::Capabilities               : debug << "Capabilities"; break;
    case MesgNum::DeviceSettings             : debug << "DeviceSettings"; break;
    case MesgNum::UserProfile                : debug << "UserProfile"; break;
    case MesgNum::HrmProfile                 : debug << "HrmProfile"; break;
    case MesgNum::SdmProfile                 : debug << "SdmProfile"; break;
    case MesgNum::BikeProfile                : debug << "BikeProfile"; break;
    case MesgNum::ZonesTarget                : debug << "ZonesTarget"; break;
    case MesgNum::HrZone                     : debug << "HrZone"; break;
    case MesgNum::PowerZone                  : debug << "PowerZone"; break;
    case MesgNum::MetZone                    : debug << "MetZone"; break;
    case MesgNum::Sport                      : debug << "Sport"; break;
    case MesgNum::Goal                       : debug << "Goal"; break;
    case MesgNum::Session                    : debug << "Session"; break;
    case MesgNum::Lap                        : debug << "Lap"; break;
    case MesgNum::Record                     : debug << "Record"; break;
    case MesgNum::Event                      : debug << "Event"; break;
    case MesgNum::DeviceInfo                 : debug << "DeviceInfo"; break;
    case MesgNum::Workout                    : debug << "Workout"; break;
    case MesgNum::WorkoutStep                : debug << "WorkoutStep"; break;
    case MesgNum::Schedule                   : debug << "Schedule"; break;
    case MesgNum::WeightScale                : debug << "WeightScale"; break;
    case MesgNum::Course                     : debug << "Course"; break;
    case MesgNum::CoursePoint                : debug << "CoursePoint"; break;
    case MesgNum::Totals                     : debug << "Totals"; break;
    case MesgNum::Activity                   : debug << "Activity"; break;
    case MesgNum::Software                   : debug << "Software"; break;
    case MesgNum::FileCapabilities           : debug << "FileCapabilities"; break;
    case MesgNum::MesgCapabilities           : debug << "MesgCapabilities"; break;
    case MesgNum::FieldCapabilities          : debug << "FieldCapabilities"; break;
    case MesgNum::FileCreator                : debug << "FileCreator"; break;
    case MesgNum::BloodPressure              : debug << "BloodPressure"; break;
    case MesgNum::SpeedZone                  : debug << "SpeedZone"; break;
    case MesgNum::Monitoring                 : debug << "Monitoring"; break;
    case MesgNum::TrainingFile               : debug << "TrainingFile"; break;
    case MesgNum::Hrv                        : debug << "Hrv"; break;
    case MesgNum::AntRx                      : debug << "AntRx"; break;
    case MesgNum::AntTx                      : debug << "AntTx"; break;
    case MesgNum::AntChannelId               : debug << "AntChannelId"; break;
    case MesgNum::Length                     : debug << "Length"; break;
    case MesgNum::MonitoringInfo             : debug << "MonitoringInfo"; break;
    case MesgNum::Pad                        : debug << "Pad"; break;
    case MesgNum::SlaveDevice                : debug << "SlaveDevice"; break;
    case MesgNum::Connectivity               : debug << "Connectivity"; break;
    case MesgNum::WeatherConditions          : debug << "WeatherConditions"; break;
    case MesgNum::WeatherAlert               : debug << "WeatherAlert"; break;
    case MesgNum::CadenceZone                : debug << "CadenceZone"; break;
    case MesgNum::Hr                         : debug << "Hr"; break;
    case MesgNum::SegmentLap                 : debug << "SegmentLap"; break;
    case MesgNum::MemoGlob                   : debug << "MemoGlob"; break;
    case MesgNum::SegmentId                  : debug << "SegmentId"; break;
    case MesgNum::SegmentLeaderboardEntry    : debug << "SegmentLeaderboardEntry"; break;
    case MesgNum::SegmentPoint               : debug << "SegmentPoint"; break;
    case MesgNum::SegmentFile                : debug << "SegmentFile"; break;
    case MesgNum::WorkoutSession             : debug << "WorkoutSession"; break;
    case MesgNum::WatchfaceSettings          : debug << "WatchfaceSettings"; break;
    case MesgNum::GpsMetadata                : debug << "GpsMetadata"; break;
    case MesgNum::CameraEvent                : debug << "CameraEvent"; break;
    case MesgNum::TimestampCorrelation       : debug << "TimestampCorrelation"; break;
    case MesgNum::GyroscopeData              : debug << "GyroscopeData"; break;
    case MesgNum::AccelerometerData          : debug << "AccelerometerData"; break;
    case MesgNum::ThreeDSensorCalibration    : debug << "ThreeDSensorCalibration"; break;
    case MesgNum::VideoFrame                 : debug << "VideoFrame"; break;
    case MesgNum::ObdiiData                  : debug << "ObdiiData"; break;
    case MesgNum::NmeaSentence               : debug << "NmeaSentence"; break;
    case MesgNum::AviationAttitude           : debug << "AviationAttitude"; break;
    case MesgNum::Video                      : debug << "Video"; break;
    case MesgNum::VideoTitle                 : debug << "VideoTitle"; break;
    case MesgNum::VideoDescription           : debug << "VideoDescription"; break;
    case MesgNum::VideoClip                  : debug << "VideoClip"; break;
    case MesgNum::OhrSettings                : debug << "OhrSettings"; break;
    case MesgNum::ExdScreenConfiguration     : debug << "ExdScreenConfiguration"; break;
    case MesgNum::ExdDataFieldConfiguration  : debug << "ExdDataFieldConfiguration"; break;
    case MesgNum::ExdDataConceptConfiguration: debug << "ExdDataConceptConfiguration"; break;
    case MesgNum::FieldDescription           : debug << "FieldDescription"; break;
    case MesgNum::DeveloperDataId            : debug << "DeveloperDataId"; break;
    case MesgNum::MagnetometerData           : debug << "MagnetometerData"; break;
    case MesgNum::BarometerData              : debug << "BarometerData"; break;
    case MesgNum::OneDSensorCalibration      : debug << "OneDSensorCalibration"; break;
    case MesgNum::Set                        : debug << "Set"; break;
    case MesgNum::StressLevel                : debug << "StressLevel"; break;
    case MesgNum::DiveSettings               : debug << "DiveSettings"; break;
    case MesgNum::DiveGas                    : debug << "DiveGas"; break;
    case MesgNum::DiveAlarm                  : debug << "DiveAlarm"; break;
    case MesgNum::ExerciseTitle              : debug << "ExerciseTitle"; break;
    case MesgNum::DiveSummary                : debug << "DiveSummary"; break;
    case MesgNum::Jump                       : debug << "Jump"; break;
    case MesgNum::ClimbPro                   : debug << "ClimbPro"; break;
    case MesgNum::MfgRangeMin                : debug << "MfgRangeMin"; break;
    case MesgNum::MfgRangeMax                : debug << "MfgRangeMax"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const Checksum value)
{
    switch (value) {
    case Checksum::Clear: debug << "Clear"; break;
    case Checksum::Ok   : debug << "Ok"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const FileFlags value)
{
    switch (value) {
    case FileFlags::Read : debug << "Read"; break;
    case FileFlags::Write: debug << "Write"; break;
    case FileFlags::Erase: debug << "Erase"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const MesgCount value)
{
    switch (value) {
    case MesgCount::NumPerFile    : debug << "NumPerFile"; break;
    case MesgCount::MaxPerFile    : debug << "MaxPerFile"; break;
    case MesgCount::MaxPerFileType: debug << "MaxPerFileType"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const DateTime value)
{
    switch (value) {
    case DateTime::Min: debug << "Min"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const LocalDateTime value)
{
    switch (value) {
    case LocalDateTime::Min: debug << "Min"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const MessageIndex value)
{
    switch (value) {
    case MessageIndex::Selected: debug << "Selected"; break;
    case MessageIndex::Reserved: debug << "Reserved"; break;
    case MessageIndex::Mask    : debug << "Mask"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const DeviceIndex value)
{
    switch (value) {
    case DeviceIndex::Creator: debug << "Creator"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const Gender value)
{
    switch (value) {
    case Gender::Female: debug << "Female"; break;
    case Gender::Male  : debug << "Male"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const Language value)
{
    switch (value) {
    case Language::English            : debug << "English"; break;
    case Language::French             : debug << "French"; break;
    case Language::Italian            : debug << "Italian"; break;
    case Language::German             : debug << "German"; break;
    case Language::Spanish            : debug << "Spanish"; break;
    case Language::Croatian           : debug << "Croatian"; break;
    case Language::Czech              : debug << "Czech"; break;
    case Language::Danish             : debug << "Danish"; break;
    case Language::Dutch              : debug << "Dutch"; break;
    case Language::Finnish            : debug << "Finnish"; break;
    case Language::Greek              : debug << "Greek"; break;
    case Language::Hungarian          : debug << "Hungarian"; break;
    case Language::Norwegian          : debug << "Norwegian"; break;
    case Language::Polish             : debug << "Polish"; break;
    case Language::Portuguese         : debug << "Portuguese"; break;
    case Language::Slovakian          : debug << "Slovakian"; break;
    case Language::Slovenian          : debug << "Slovenian"; break;
    case Language::Swedish            : debug << "Swedish"; break;
    case Language::Russian            : debug << "Russian"; break;
    case Language::Turkish            : debug << "Turkish"; break;
    case Language::Latvian            : debug << "Latvian"; break;
    case Language::Ukrainian          : debug << "Ukrainian"; break;
    case Language::Arabic             : debug << "Arabic"; break;
    case Language::Farsi              : debug << "Farsi"; break;
    case Language::Bulgarian          : debug << "Bulgarian"; break;
    case Language::Romanian           : debug << "Romanian"; break;
    case Language::Chinese            : debug << "Chinese"; break;
    case Language::Japanese           : debug << "Japanese"; break;
    case Language::Korean             : debug << "Korean"; break;
    case Language::Taiwanese          : debug << "Taiwanese"; break;
    case Language::Thai               : debug << "Thai"; break;
    case Language::Hebrew             : debug << "Hebrew"; break;
    case Language::BrazilianPortuguese: debug << "BrazilianPortuguese"; break;
    case Language::Indonesian         : debug << "Indonesian"; break;
    case Language::Malaysian          : debug << "Malaysian"; break;
    case Language::Vietnamese         : debug << "Vietnamese"; break;
    case Language::Burmese            : debug << "Burmese"; break;
    case Language::Mongolian          : debug << "Mongolian"; break;
    case Language::Custom             : debug << "Custom"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const LanguageBits0 value)
{
    switch (value) {
    case LanguageBits0::English : debug << "English"; break;
    case LanguageBits0::French  : debug << "French"; break;
    case LanguageBits0::Italian : debug << "Italian"; break;
    case LanguageBits0::German  : debug << "German"; break;
    case LanguageBits0::Spanish : debug << "Spanish"; break;
    case LanguageBits0::Croatian: debug << "Croatian"; break;
    case LanguageBits0::Czech   : debug << "Czech"; break;
    case LanguageBits0::Danish  : debug << "Danish"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const LanguageBits1 value)
{
    switch (value) {
    case LanguageBits1::Dutch     : debug << "Dutch"; break;
    case LanguageBits1::Finnish   : debug << "Finnish"; break;
    case LanguageBits1::Greek     : debug << "Greek"; break;
    case LanguageBits1::Hungarian : debug << "Hungarian"; break;
    case LanguageBits1::Norwegian : debug << "Norwegian"; break;
    case LanguageBits1::Polish    : debug << "Polish"; break;
    case LanguageBits1::Portuguese: debug << "Portuguese"; break;
    case LanguageBits1::Slovakian : debug << "Slovakian"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const LanguageBits2 value)
{
    switch (value) {
    case LanguageBits2::Slovenian: debug << "Slovenian"; break;
    case LanguageBits2::Swedish  : debug << "Swedish"; break;
    case LanguageBits2::Russian  : debug << "Russian"; break;
    case LanguageBits2::Turkish  : debug << "Turkish"; break;
    case LanguageBits2::Latvian  : debug << "Latvian"; break;
    case LanguageBits2::Ukrainian: debug << "Ukrainian"; break;
    case LanguageBits2::Arabic   : debug << "Arabic"; break;
    case LanguageBits2::Farsi    : debug << "Farsi"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const LanguageBits3 value)
{
    switch (value) {
    case LanguageBits3::Bulgarian: debug << "Bulgarian"; break;
    case LanguageBits3::Romanian : debug << "Romanian"; break;
    case LanguageBits3::Chinese  : debug << "Chinese"; break;
    case LanguageBits3::Japanese : debug << "Japanese"; break;
    case LanguageBits3::Korean   : debug << "Korean"; break;
    case LanguageBits3::Taiwanese: debug << "Taiwanese"; break;
    case LanguageBits3::Thai     : debug << "Thai"; break;
    case LanguageBits3::Hebrew   : debug << "Hebrew"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const LanguageBits4 value)
{
    switch (value) {
    case LanguageBits4::BrazilianPortuguese: debug << "BrazilianPortuguese"; break;
    case LanguageBits4::Indonesian         : debug << "Indonesian"; break;
    case LanguageBits4::Malaysian          : debug << "Malaysian"; break;
    case LanguageBits4::Vietnamese         : debug << "Vietnamese"; break;
    case LanguageBits4::Burmese            : debug << "Burmese"; break;
    case LanguageBits4::Mongolian          : debug << "Mongolian"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const TimeZone value)
{
    switch (value) {
    case TimeZone::Almaty                  : debug << "Almaty"; break;
    case TimeZone::Bangkok                 : debug << "Bangkok"; break;
    case TimeZone::Bombay                  : debug << "Bombay"; break;
    case TimeZone::Brasilia                : debug << "Brasilia"; break;
    case TimeZone::Cairo                   : debug << "Cairo"; break;
    case TimeZone::CapeVerdeIs             : debug << "CapeVerdeIs"; break;
    case TimeZone::Darwin                  : debug << "Darwin"; break;
    case TimeZone::Eniwetok                : debug << "Eniwetok"; break;
    case TimeZone::Fiji                    : debug << "Fiji"; break;
    case TimeZone::HongKong                : debug << "HongKong"; break;
    case TimeZone::Islamabad               : debug << "Islamabad"; break;
    case TimeZone::Kabul                   : debug << "Kabul"; break;
    case TimeZone::Magadan                 : debug << "Magadan"; break;
    case TimeZone::MidAtlantic             : debug << "MidAtlantic"; break;
    case TimeZone::Moscow                  : debug << "Moscow"; break;
    case TimeZone::Muscat                  : debug << "Muscat"; break;
    case TimeZone::Newfoundland            : debug << "Newfoundland"; break;
    case TimeZone::Samoa                   : debug << "Samoa"; break;
    case TimeZone::Sydney                  : debug << "Sydney"; break;
    case TimeZone::Tehran                  : debug << "Tehran"; break;
    case TimeZone::Tokyo                   : debug << "Tokyo"; break;
    case TimeZone::UsAlaska                : debug << "UsAlaska"; break;
    case TimeZone::UsAtlantic              : debug << "UsAtlantic"; break;
    case TimeZone::UsCentral               : debug << "UsCentral"; break;
    case TimeZone::UsEastern               : debug << "UsEastern"; break;
    case TimeZone::UsHawaii                : debug << "UsHawaii"; break;
    case TimeZone::UsMountain              : debug << "UsMountain"; break;
    case TimeZone::UsPacific               : debug << "UsPacific"; break;
    case TimeZone::Other                   : debug << "Other"; break;
    case TimeZone::Auckland                : debug << "Auckland"; break;
    case TimeZone::Kathmandu               : debug << "Kathmandu"; break;
    case TimeZone::EuropeWesternWet        : debug << "EuropeWesternWet"; break;
    case TimeZone::EuropeCentralCet        : debug << "EuropeCentralCet"; break;
    case TimeZone::EuropeEasternEet        : debug << "EuropeEasternEet"; break;
    case TimeZone::Jakarta                 : debug << "Jakarta"; break;
    case TimeZone::Perth                   : debug << "Perth"; break;
    case TimeZone::Adelaide                : debug << "Adelaide"; break;
    case TimeZone::Brisbane                : debug << "Brisbane"; break;
    case TimeZone::Tasmania                : debug << "Tasmania"; break;
    case TimeZone::Iceland                 : debug << "Iceland"; break;
    case TimeZone::Amsterdam               : debug << "Amsterdam"; break;
    case TimeZone::Athens                  : debug << "Athens"; break;
    case TimeZone::Barcelona               : debug << "Barcelona"; break;
    case TimeZone::Berlin                  : debug << "Berlin"; break;
    case TimeZone::Brussels                : debug << "Brussels"; break;
    case TimeZone::Budapest                : debug << "Budapest"; break;
    case TimeZone::Copenhagen              : debug << "Copenhagen"; break;
    case TimeZone::Dublin                  : debug << "Dublin"; break;
    case TimeZone::Helsinki                : debug << "Helsinki"; break;
    case TimeZone::Lisbon                  : debug << "Lisbon"; break;
    case TimeZone::London                  : debug << "London"; break;
    case TimeZone::Madrid                  : debug << "Madrid"; break;
    case TimeZone::Munich                  : debug << "Munich"; break;
    case TimeZone::Oslo                    : debug << "Oslo"; break;
    case TimeZone::Paris                   : debug << "Paris"; break;
    case TimeZone::Prague                  : debug << "Prague"; break;
    case TimeZone::Reykjavik               : debug << "Reykjavik"; break;
    case TimeZone::Rome                    : debug << "Rome"; break;
    case TimeZone::Stockholm               : debug << "Stockholm"; break;
    case TimeZone::Vienna                  : debug << "Vienna"; break;
    case TimeZone::Warsaw                  : debug << "Warsaw"; break;
    case TimeZone::Zurich                  : debug << "Zurich"; break;
    case TimeZone::Quebec                  : debug << "Quebec"; break;
    case TimeZone::Ontario                 : debug << "Ontario"; break;
    case TimeZone::Manitoba                : debug << "Manitoba"; break;
    case TimeZone::Saskatchewan            : debug << "Saskatchewan"; break;
    case TimeZone::Alberta                 : debug << "Alberta"; break;
    case TimeZone::BritishColumbia         : debug << "BritishColumbia"; break;
    case TimeZone::Boise                   : debug << "Boise"; break;
    case TimeZone::Boston                  : debug << "Boston"; break;
    case TimeZone::Chicago                 : debug << "Chicago"; break;
    case TimeZone::Dallas                  : debug << "Dallas"; break;
    case TimeZone::Denver                  : debug << "Denver"; break;
    case TimeZone::KansasCity              : debug << "KansasCity"; break;
    case TimeZone::LasVegas                : debug << "LasVegas"; break;
    case TimeZone::LosAngeles              : debug << "LosAngeles"; break;
    case TimeZone::Miami                   : debug << "Miami"; break;
    case TimeZone::Minneapolis             : debug << "Minneapolis"; break;
    case TimeZone::NewYork                 : debug << "NewYork"; break;
    case TimeZone::NewOrleans              : debug << "NewOrleans"; break;
    case TimeZone::Phoenix                 : debug << "Phoenix"; break;
    case TimeZone::SantaFe                 : debug << "SantaFe"; break;
    case TimeZone::Seattle                 : debug << "Seattle"; break;
    case TimeZone::WashingtonDc            : debug << "WashingtonDc"; break;
    case TimeZone::UsArizona               : debug << "UsArizona"; break;
    case TimeZone::Chita                   : debug << "Chita"; break;
    case TimeZone::Ekaterinburg            : debug << "Ekaterinburg"; break;
    case TimeZone::Irkutsk                 : debug << "Irkutsk"; break;
    case TimeZone::Kaliningrad             : debug << "Kaliningrad"; break;
    case TimeZone::Krasnoyarsk             : debug << "Krasnoyarsk"; break;
    case TimeZone::Novosibirsk             : debug << "Novosibirsk"; break;
    case TimeZone::PetropavlovskKamchatskiy: debug << "PetropavlovskKamchatskiy"; break;
    case TimeZone::Samara                  : debug << "Samara"; break;
    case TimeZone::Vladivostok             : debug << "Vladivostok"; break;
    case TimeZone::MexicoCentral           : debug << "MexicoCentral"; break;
    case TimeZone::MexicoMountain          : debug << "MexicoMountain"; break;
    case TimeZone::MexicoPacific           : debug << "MexicoPacific"; break;
    case TimeZone::CapeTown                : debug << "CapeTown"; break;
    case TimeZone::Winkhoek                : debug << "Winkhoek"; break;
    case TimeZone::Lagos                   : debug << "Lagos"; break;
    case TimeZone::Riyahd                  : debug << "Riyahd"; break;
    case TimeZone::Venezuela               : debug << "Venezuela"; break;
    case TimeZone::AustraliaLh             : debug << "AustraliaLh"; break;
    case TimeZone::Santiago                : debug << "Santiago"; break;
    case TimeZone::Manual                  : debug << "Manual"; break;
    case TimeZone::Automatic               : debug << "Automatic"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const DisplayMeasure value)
{
    switch (value) {
    case DisplayMeasure::Metric  : debug << "Metric"; break;
    case DisplayMeasure::Statute : debug << "Statute"; break;
    case DisplayMeasure::Nautical: debug << "Nautical"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const DisplayHeart value)
{
    switch (value) {
    case DisplayHeart::Bpm    : debug << "Bpm"; break;
    case DisplayHeart::Max    : debug << "Max"; break;
    case DisplayHeart::Reserve: debug << "Reserve"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const DisplayPower value)
{
    switch (value) {
    case DisplayPower::Watts     : debug << "Watts"; break;
    case DisplayPower::PercentFtp: debug << "PercentFtp"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const DisplayPosition value)
{
    switch (value) {
    case DisplayPosition::Degree              : debug << "Degree"; break;
    case DisplayPosition::DegreeMinute        : debug << "DegreeMinute"; break;
    case DisplayPosition::DegreeMinuteSecond  : debug << "DegreeMinuteSecond"; break;
    case DisplayPosition::AustrianGrid        : debug << "AustrianGrid"; break;
    case DisplayPosition::BritishGrid         : debug << "BritishGrid"; break;
    case DisplayPosition::DutchGrid           : debug << "DutchGrid"; break;
    case DisplayPosition::HungarianGrid       : debug << "HungarianGrid"; break;
    case DisplayPosition::FinnishGrid         : debug << "FinnishGrid"; break;
    case DisplayPosition::GermanGrid          : debug << "GermanGrid"; break;
    case DisplayPosition::IcelandicGrid       : debug << "IcelandicGrid"; break;
    case DisplayPosition::IndonesianEquatorial: debug << "IndonesianEquatorial"; break;
    case DisplayPosition::IndonesianIrian     : debug << "IndonesianIrian"; break;
    case DisplayPosition::IndonesianSouthern  : debug << "IndonesianSouthern"; break;
    case DisplayPosition::IndiaZone0          : debug << "IndiaZone0"; break;
    case DisplayPosition::IndiaZoneIa         : debug << "IndiaZoneIa"; break;
    case DisplayPosition::IndiaZoneIb         : debug << "IndiaZoneIb"; break;
    case DisplayPosition::IndiaZoneIia        : debug << "IndiaZoneIia"; break;
    case DisplayPosition::IndiaZoneIib        : debug << "IndiaZoneIib"; break;
    case DisplayPosition::IndiaZoneIiia       : debug << "IndiaZoneIiia"; break;
    case DisplayPosition::IndiaZoneIiib       : debug << "IndiaZoneIiib"; break;
    case DisplayPosition::IndiaZoneIva        : debug << "IndiaZoneIva"; break;
    case DisplayPosition::IndiaZoneIvb        : debug << "IndiaZoneIvb"; break;
    case DisplayPosition::IrishTransverse     : debug << "IrishTransverse"; break;
    case DisplayPosition::IrishGrid           : debug << "IrishGrid"; break;
    case DisplayPosition::Loran               : debug << "Loran"; break;
    case DisplayPosition::MaidenheadGrid      : debug << "MaidenheadGrid"; break;
    case DisplayPosition::MgrsGrid            : debug << "MgrsGrid"; break;
    case DisplayPosition::NewZealandGrid      : debug << "NewZealandGrid"; break;
    case DisplayPosition::NewZealandTransverse: debug << "NewZealandTransverse"; break;
    case DisplayPosition::QatarGrid           : debug << "QatarGrid"; break;
    case DisplayPosition::ModifiedSwedishGrid : debug << "ModifiedSwedishGrid"; break;
    case DisplayPosition::SwedishGrid         : debug << "SwedishGrid"; break;
    case DisplayPosition::SouthAfricanGrid    : debug << "SouthAfricanGrid"; break;
    case DisplayPosition::SwissGrid           : debug << "SwissGrid"; break;
    case DisplayPosition::TaiwanGrid          : debug << "TaiwanGrid"; break;
    case DisplayPosition::UnitedStatesGrid    : debug << "UnitedStatesGrid"; break;
    case DisplayPosition::UtmUpsGrid          : debug << "UtmUpsGrid"; break;
    case DisplayPosition::WestMalayan         : debug << "WestMalayan"; break;
    case DisplayPosition::BorneoRso           : debug << "BorneoRso"; break;
    case DisplayPosition::EstonianGrid        : debug << "EstonianGrid"; break;
    case DisplayPosition::LatvianGrid         : debug << "LatvianGrid"; break;
    case DisplayPosition::SwedishRef99Grid    : debug << "SwedishRef99Grid"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const Switch value)
{
    switch (value) {
    case Switch::Off : debug << "Off"; break;
    case Switch::On  : debug << "On"; break;
    case Switch::Auto: debug << "Auto"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const Sport value)
{
    switch (value) {
    case Sport::Generic              : debug << "Generic"; break;
    case Sport::Running              : debug << "Running"; break;
    case Sport::Cycling              : debug << "Cycling"; break;
    case Sport::Transition           : debug << "Transition"; break;
    case Sport::FitnessEquipment     : debug << "FitnessEquipment"; break;
    case Sport::Swimming             : debug << "Swimming"; break;
    case Sport::Basketball           : debug << "Basketball"; break;
    case Sport::Soccer               : debug << "Soccer"; break;
    case Sport::Tennis               : debug << "Tennis"; break;
    case Sport::AmericanFootball     : debug << "AmericanFootball"; break;
    case Sport::Training             : debug << "Training"; break;
    case Sport::Walking              : debug << "Walking"; break;
    case Sport::CrossCountrySkiing   : debug << "CrossCountrySkiing"; break;
    case Sport::AlpineSkiing         : debug << "AlpineSkiing"; break;
    case Sport::Snowboarding         : debug << "Snowboarding"; break;
    case Sport::Rowing               : debug << "Rowing"; break;
    case Sport::Mountaineering       : debug << "Mountaineering"; break;
    case Sport::Hiking               : debug << "Hiking"; break;
    case Sport::Multisport           : debug << "Multisport"; break;
    case Sport::Paddling             : debug << "Paddling"; break;
    case Sport::Flying               : debug << "Flying"; break;
    case Sport::EBiking              : debug << "EBiking"; break;
    case Sport::Motorcycling         : debug << "Motorcycling"; break;
    case Sport::Boating              : debug << "Boating"; break;
    case Sport::Driving              : debug << "Driving"; break;
    case Sport::Golf                 : debug << "Golf"; break;
    case Sport::HangGliding          : debug << "HangGliding"; break;
    case Sport::HorsebackRiding      : debug << "HorsebackRiding"; break;
    case Sport::Hunting              : debug << "Hunting"; break;
    case Sport::Fishing              : debug << "Fishing"; break;
    case Sport::InlineSkating        : debug << "InlineSkating"; break;
    case Sport::RockClimbing         : debug << "RockClimbing"; break;
    case Sport::Sailing              : debug << "Sailing"; break;
    case Sport::IceSkating           : debug << "IceSkating"; break;
    case Sport::SkyDiving            : debug << "SkyDiving"; break;
    case Sport::Snowshoeing          : debug << "Snowshoeing"; break;
    case Sport::Snowmobiling         : debug << "Snowmobiling"; break;
    case Sport::StandUpPaddleboarding: debug << "StandUpPaddleboarding"; break;
    case Sport::Surfing              : debug << "Surfing"; break;
    case Sport::Wakeboarding         : debug << "Wakeboarding"; break;
    case Sport::WaterSkiing          : debug << "WaterSkiing"; break;
    case Sport::Kayaking             : debug << "Kayaking"; break;
    case Sport::Rafting              : debug << "Rafting"; break;
    case Sport::Windsurfing          : debug << "Windsurfing"; break;
    case Sport::Kitesurfing          : debug << "Kitesurfing"; break;
    case Sport::Tactical             : debug << "Tactical"; break;
    case Sport::Jumpmaster           : debug << "Jumpmaster"; break;
    case Sport::Boxing               : debug << "Boxing"; break;
    case Sport::FloorClimbing        : debug << "FloorClimbing"; break;
    case Sport::Diving               : debug << "Diving"; break;
    case Sport::All                  : debug << "All"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const SportBits0 value)
{
    switch (value) {
    case SportBits0::Generic         : debug << "Generic"; break;
    case SportBits0::Running         : debug << "Running"; break;
    case SportBits0::Cycling         : debug << "Cycling"; break;
    case SportBits0::Transition      : debug << "Transition"; break;
    case SportBits0::FitnessEquipment: debug << "FitnessEquipment"; break;
    case SportBits0::Swimming        : debug << "Swimming"; break;
    case SportBits0::Basketball      : debug << "Basketball"; break;
    case SportBits0::Soccer          : debug << "Soccer"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const SportBits1 value)
{
    switch (value) {
    case SportBits1::Tennis            : debug << "Tennis"; break;
    case SportBits1::AmericanFootball  : debug << "AmericanFootball"; break;
    case SportBits1::Training          : debug << "Training"; break;
    case SportBits1::Walking           : debug << "Walking"; break;
    case SportBits1::CrossCountrySkiing: debug << "CrossCountrySkiing"; break;
    case SportBits1::AlpineSkiing      : debug << "AlpineSkiing"; break;
    case SportBits1::Snowboarding      : debug << "Snowboarding"; break;
    case SportBits1::Rowing            : debug << "Rowing"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const SportBits2 value)
{
    switch (value) {
    case SportBits2::Mountaineering: debug << "Mountaineering"; break;
    case SportBits2::Hiking        : debug << "Hiking"; break;
    case SportBits2::Multisport    : debug << "Multisport"; break;
    case SportBits2::Paddling      : debug << "Paddling"; break;
    case SportBits2::Flying        : debug << "Flying"; break;
    case SportBits2::EBiking       : debug << "EBiking"; break;
    case SportBits2::Motorcycling  : debug << "Motorcycling"; break;
    case SportBits2::Boating       : debug << "Boating"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const SportBits3 value)
{
    switch (value) {
    case SportBits3::Driving        : debug << "Driving"; break;
    case SportBits3::Golf           : debug << "Golf"; break;
    case SportBits3::HangGliding    : debug << "HangGliding"; break;
    case SportBits3::HorsebackRiding: debug << "HorsebackRiding"; break;
    case SportBits3::Hunting        : debug << "Hunting"; break;
    case SportBits3::Fishing        : debug << "Fishing"; break;
    case SportBits3::InlineSkating  : debug << "InlineSkating"; break;
    case SportBits3::RockClimbing   : debug << "RockClimbing"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const SportBits4 value)
{
    switch (value) {
    case SportBits4::Sailing              : debug << "Sailing"; break;
    case SportBits4::IceSkating           : debug << "IceSkating"; break;
    case SportBits4::SkyDiving            : debug << "SkyDiving"; break;
    case SportBits4::Snowshoeing          : debug << "Snowshoeing"; break;
    case SportBits4::Snowmobiling         : debug << "Snowmobiling"; break;
    case SportBits4::StandUpPaddleboarding: debug << "StandUpPaddleboarding"; break;
    case SportBits4::Surfing              : debug << "Surfing"; break;
    case SportBits4::Wakeboarding         : debug << "Wakeboarding"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const SportBits5 value)
{
    switch (value) {
    case SportBits5::WaterSkiing: debug << "WaterSkiing"; break;
    case SportBits5::Kayaking   : debug << "Kayaking"; break;
    case SportBits5::Rafting    : debug << "Rafting"; break;
    case SportBits5::Windsurfing: debug << "Windsurfing"; break;
    case SportBits5::Kitesurfing: debug << "Kitesurfing"; break;
    case SportBits5::Tactical   : debug << "Tactical"; break;
    case SportBits5::Jumpmaster : debug << "Jumpmaster"; break;
    case SportBits5::Boxing     : debug << "Boxing"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const SportBits6 value)
{
    switch (value) {
    case SportBits6::FloorClimbing: debug << "FloorClimbing"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const SubSport value)
{
    switch (value) {
    case SubSport::Generic             : debug << "Generic"; break;
    case SubSport::Treadmill           : debug << "Treadmill"; break;
    case SubSport::Street              : debug << "Street"; break;
    case SubSport::Trail               : debug << "Trail"; break;
    case SubSport::Track               : debug << "Track"; break;
    case SubSport::Spin                : debug << "Spin"; break;
    case SubSport::IndoorCycling       : debug << "IndoorCycling"; break;
    case SubSport::Road                : debug << "Road"; break;
    case SubSport::Mountain            : debug << "Mountain"; break;
    case SubSport::Downhill            : debug << "Downhill"; break;
    case SubSport::Recumbent           : debug << "Recumbent"; break;
    case SubSport::Cyclocross          : debug << "Cyclocross"; break;
    case SubSport::HandCycling         : debug << "HandCycling"; break;
    case SubSport::TrackCycling        : debug << "TrackCycling"; break;
    case SubSport::IndoorRowing        : debug << "IndoorRowing"; break;
    case SubSport::Elliptical          : debug << "Elliptical"; break;
    case SubSport::StairClimbing       : debug << "StairClimbing"; break;
    case SubSport::LapSwimming         : debug << "LapSwimming"; break;
    case SubSport::OpenWater           : debug << "OpenWater"; break;
    case SubSport::FlexibilityTraining : debug << "FlexibilityTraining"; break;
    case SubSport::StrengthTraining    : debug << "StrengthTraining"; break;
    case SubSport::WarmUp              : debug << "WarmUp"; break;
    case SubSport::Match               : debug << "Match"; break;
    case SubSport::Exercise            : debug << "Exercise"; break;
    case SubSport::Challenge           : debug << "Challenge"; break;
    case SubSport::IndoorSkiing        : debug << "IndoorSkiing"; break;
    case SubSport::CardioTraining      : debug << "CardioTraining"; break;
    case SubSport::IndoorWalking       : debug << "IndoorWalking"; break;
    case SubSport::EBikeFitness        : debug << "EBikeFitness"; break;
    case SubSport::Bmx                 : debug << "Bmx"; break;
    case SubSport::CasualWalking       : debug << "CasualWalking"; break;
    case SubSport::SpeedWalking        : debug << "SpeedWalking"; break;
    case SubSport::BikeToRunTransition : debug << "BikeToRunTransition"; break;
    case SubSport::RunToBikeTransition : debug << "RunToBikeTransition"; break;
    case SubSport::SwimToBikeTransition: debug << "SwimToBikeTransition"; break;
    case SubSport::Atv                 : debug << "Atv"; break;
    case SubSport::Motocross           : debug << "Motocross"; break;
    case SubSport::Backcountry         : debug << "Backcountry"; break;
    case SubSport::Resort              : debug << "Resort"; break;
    case SubSport::RcDrone             : debug << "RcDrone"; break;
    case SubSport::Wingsuit            : debug << "Wingsuit"; break;
    case SubSport::Whitewater          : debug << "Whitewater"; break;
    case SubSport::SkateSkiing         : debug << "SkateSkiing"; break;
    case SubSport::Yoga                : debug << "Yoga"; break;
    case SubSport::Pilates             : debug << "Pilates"; break;
    case SubSport::IndoorRunning       : debug << "IndoorRunning"; break;
    case SubSport::GravelCycling       : debug << "GravelCycling"; break;
    case SubSport::EBikeMountain       : debug << "EBikeMountain"; break;
    case SubSport::Commuting           : debug << "Commuting"; break;
    case SubSport::MixedSurface        : debug << "MixedSurface"; break;
    case SubSport::Navigate            : debug << "Navigate"; break;
    case SubSport::TrackMe             : debug << "TrackMe"; break;
    case SubSport::Map                 : debug << "Map"; break;
    case SubSport::SingleGasDiving     : debug << "SingleGasDiving"; break;
    case SubSport::MultiGasDiving      : debug << "MultiGasDiving"; break;
    case SubSport::GaugeDiving         : debug << "GaugeDiving"; break;
    case SubSport::ApneaDiving         : debug << "ApneaDiving"; break;
    case SubSport::ApneaHunting        : debug << "ApneaHunting"; break;
    case SubSport::VirtualActivity     : debug << "VirtualActivity"; break;
    case SubSport::Obstacle            : debug << "Obstacle"; break;
    case SubSport::SailRace            : debug << "SailRace"; break;
    case SubSport::All                 : debug << "All"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const SportEvent value)
{
    switch (value) {
    case SportEvent::Uncategorized : debug << "Uncategorized"; break;
    case SportEvent::Geocaching    : debug << "Geocaching"; break;
    case SportEvent::Fitness       : debug << "Fitness"; break;
    case SportEvent::Recreation    : debug << "Recreation"; break;
    case SportEvent::Race          : debug << "Race"; break;
    case SportEvent::SpecialEvent  : debug << "SpecialEvent"; break;
    case SportEvent::Training      : debug << "Training"; break;
    case SportEvent::Transportation: debug << "Transportation"; break;
    case SportEvent::Touring       : debug << "Touring"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const Activity value)
{
    switch (value) {
    case Activity::Manual        : debug << "Manual"; break;
    case Activity::AutoMultiSport: debug << "AutoMultiSport"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const Intensity value)
{
    switch (value) {
    case Intensity::Active  : debug << "Active"; break;
    case Intensity::Rest    : debug << "Rest"; break;
    case Intensity::Warmup  : debug << "Warmup"; break;
    case Intensity::Cooldown: debug << "Cooldown"; break;
    case Intensity::Recovery: debug << "Recovery"; break;
    case Intensity::Interval: debug << "Interval"; break;
    case Intensity::Other   : debug << "Other"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const SessionTrigger value)
{
    switch (value) {
    case SessionTrigger::ActivityEnd     : debug << "ActivityEnd"; break;
    case SessionTrigger::Manual          : debug << "Manual"; break;
    case SessionTrigger::AutoMultiSport  : debug << "AutoMultiSport"; break;
    case SessionTrigger::FitnessEquipment: debug << "FitnessEquipment"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const AutolapTrigger value)
{
    switch (value) {
    case AutolapTrigger::Time            : debug << "Time"; break;
    case AutolapTrigger::Distance        : debug << "Distance"; break;
    case AutolapTrigger::PositionStart   : debug << "PositionStart"; break;
    case AutolapTrigger::PositionLap     : debug << "PositionLap"; break;
    case AutolapTrigger::PositionWaypoint: debug << "PositionWaypoint"; break;
    case AutolapTrigger::PositionMarked  : debug << "PositionMarked"; break;
    case AutolapTrigger::Off             : debug << "Off"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const LapTrigger value)
{
    switch (value) {
    case LapTrigger::Manual          : debug << "Manual"; break;
    case LapTrigger::Time            : debug << "Time"; break;
    case LapTrigger::Distance        : debug << "Distance"; break;
    case LapTrigger::PositionStart   : debug << "PositionStart"; break;
    case LapTrigger::PositionLap     : debug << "PositionLap"; break;
    case LapTrigger::PositionWaypoint: debug << "PositionWaypoint"; break;
    case LapTrigger::PositionMarked  : debug << "PositionMarked"; break;
    case LapTrigger::SessionEnd      : debug << "SessionEnd"; break;
    case LapTrigger::FitnessEquipment: debug << "FitnessEquipment"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const TimeMode value)
{
    switch (value) {
    case TimeMode::Hour12           : debug << "Hour12"; break;
    case TimeMode::Hour24           : debug << "Hour24"; break;
    case TimeMode::Military         : debug << "Military"; break;
    case TimeMode::Hour12WithSeconds: debug << "Hour12WithSeconds"; break;
    case TimeMode::Hour24WithSeconds: debug << "Hour24WithSeconds"; break;
    case TimeMode::Utc              : debug << "Utc"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const BacklightMode value)
{
    switch (value) {
    case BacklightMode::Off                                : debug << "Off"; break;
    case BacklightMode::Manual                             : debug << "Manual"; break;
    case BacklightMode::KeyAndMessages                     : debug << "KeyAndMessages"; break;
    case BacklightMode::AutoBrightness                     : debug << "AutoBrightness"; break;
    case BacklightMode::SmartNotifications                 : debug << "SmartNotifications"; break;
    case BacklightMode::KeyAndMessagesNight                : debug << "KeyAndMessagesNight"; break;
    case BacklightMode::KeyAndMessagesAndSmartNotifications: debug << "KeyAndMessagesAndSmartNotifications"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const DateMode value)
{
    switch (value) {
    case DateMode::DayMonth: debug << "DayMonth"; break;
    case DateMode::MonthDay: debug << "MonthDay"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const BacklightTimeout value)
{
    switch (value) {
    case BacklightTimeout::Infinite: debug << "Infinite"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const Event value)
{
    switch (value) {
    case Event::Timer                : debug << "Timer"; break;
    case Event::Workout              : debug << "Workout"; break;
    case Event::WorkoutStep          : debug << "WorkoutStep"; break;
    case Event::PowerDown            : debug << "PowerDown"; break;
    case Event::PowerUp              : debug << "PowerUp"; break;
    case Event::OffCourse            : debug << "OffCourse"; break;
    case Event::Session              : debug << "Session"; break;
    case Event::Lap                  : debug << "Lap"; break;
    case Event::CoursePoint          : debug << "CoursePoint"; break;
    case Event::Battery              : debug << "Battery"; break;
    case Event::VirtualPartnerPace   : debug << "VirtualPartnerPace"; break;
    case Event::HrHighAlert          : debug << "HrHighAlert"; break;
    case Event::HrLowAlert           : debug << "HrLowAlert"; break;
    case Event::SpeedHighAlert       : debug << "SpeedHighAlert"; break;
    case Event::SpeedLowAlert        : debug << "SpeedLowAlert"; break;
    case Event::CadHighAlert         : debug << "CadHighAlert"; break;
    case Event::CadLowAlert          : debug << "CadLowAlert"; break;
    case Event::PowerHighAlert       : debug << "PowerHighAlert"; break;
    case Event::PowerLowAlert        : debug << "PowerLowAlert"; break;
    case Event::RecoveryHr           : debug << "RecoveryHr"; break;
    case Event::BatteryLow           : debug << "BatteryLow"; break;
    case Event::TimeDurationAlert    : debug << "TimeDurationAlert"; break;
    case Event::DistanceDurationAlert: debug << "DistanceDurationAlert"; break;
    case Event::CalorieDurationAlert : debug << "CalorieDurationAlert"; break;
    case Event::Activity             : debug << "Activity"; break;
    case Event::FitnessEquipment     : debug << "FitnessEquipment"; break;
    case Event::Length               : debug << "Length"; break;
    case Event::UserMarker           : debug << "UserMarker"; break;
    case Event::SportPoint           : debug << "SportPoint"; break;
    case Event::Calibration          : debug << "Calibration"; break;
    case Event::FrontGearChange      : debug << "FrontGearChange"; break;
    case Event::RearGearChange       : debug << "RearGearChange"; break;
    case Event::RiderPositionChange  : debug << "RiderPositionChange"; break;
    case Event::ElevHighAlert        : debug << "ElevHighAlert"; break;
    case Event::ElevLowAlert         : debug << "ElevLowAlert"; break;
    case Event::CommTimeout          : debug << "CommTimeout"; break;
    case Event::RadarThreatAlert     : debug << "RadarThreatAlert"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const EventType value)
{
    switch (value) {
    case EventType::Start                 : debug << "Start"; break;
    case EventType::Stop                  : debug << "Stop"; break;
    case EventType::ConsecutiveDepreciated: debug << "ConsecutiveDepreciated"; break;
    case EventType::Marker                : debug << "Marker"; break;
    case EventType::StopAll               : debug << "StopAll"; break;
    case EventType::BeginDepreciated      : debug << "BeginDepreciated"; break;
    case EventType::EndDepreciated        : debug << "EndDepreciated"; break;
    case EventType::EndAllDepreciated     : debug << "EndAllDepreciated"; break;
    case EventType::StopDisable           : debug << "StopDisable"; break;
    case EventType::StopDisableAll        : debug << "StopDisableAll"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const TimerTrigger value)
{
    switch (value) {
    case TimerTrigger::Manual          : debug << "Manual"; break;
    case TimerTrigger::Auto            : debug << "Auto"; break;
    case TimerTrigger::FitnessEquipment: debug << "FitnessEquipment"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const FitnessEquipmentState value)
{
    switch (value) {
    case FitnessEquipmentState::Ready  : debug << "Ready"; break;
    case FitnessEquipmentState::InUse  : debug << "InUse"; break;
    case FitnessEquipmentState::Paused : debug << "Paused"; break;
    case FitnessEquipmentState::Unknown: debug << "Unknown"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const Tone value)
{
    switch (value) {
    case Tone::Off           : debug << "Off"; break;
    case Tone::Tone          : debug << "Tone"; break;
    case Tone::Vibrate       : debug << "Vibrate"; break;
    case Tone::ToneAndVibrate: debug << "ToneAndVibrate"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const Autoscroll value)
{
    switch (value) {
    case Autoscroll::None  : debug << "None"; break;
    case Autoscroll::Slow  : debug << "Slow"; break;
    case Autoscroll::Medium: debug << "Medium"; break;
    case Autoscroll::Fast  : debug << "Fast"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const ActivityClass value)
{
    switch (value) {
    case ActivityClass::Level   : debug << "Level"; break;
    case ActivityClass::LevelMax: debug << "LevelMax"; break;
    case ActivityClass::Athlete : debug << "Athlete"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const HrZoneCalc value)
{
    switch (value) {
    case HrZoneCalc::Custom      : debug << "Custom"; break;
    case HrZoneCalc::PercentMaxHr: debug << "PercentMaxHr"; break;
    case HrZoneCalc::PercentHrr  : debug << "PercentHrr"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const PwrZoneCalc value)
{
    switch (value) {
    case PwrZoneCalc::Custom    : debug << "Custom"; break;
    case PwrZoneCalc::PercentFtp: debug << "PercentFtp"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const WktStepDuration value)
{
    switch (value) {
    case WktStepDuration::Time                              : debug << "Time"; break;
    case WktStepDuration::Distance                          : debug << "Distance"; break;
    case WktStepDuration::HrLessThan                        : debug << "HrLessThan"; break;
    case WktStepDuration::HrGreaterThan                     : debug << "HrGreaterThan"; break;
    case WktStepDuration::Calories                          : debug << "Calories"; break;
    case WktStepDuration::Open                              : debug << "Open"; break;
    case WktStepDuration::RepeatUntilStepsCmplt             : debug << "RepeatUntilStepsCmplt"; break;
    case WktStepDuration::RepeatUntilTime                   : debug << "RepeatUntilTime"; break;
    case WktStepDuration::RepeatUntilDistance               : debug << "RepeatUntilDistance"; break;
    case WktStepDuration::RepeatUntilCalories               : debug << "RepeatUntilCalories"; break;
    case WktStepDuration::RepeatUntilHrLessThan             : debug << "RepeatUntilHrLessThan"; break;
    case WktStepDuration::RepeatUntilHrGreaterThan          : debug << "RepeatUntilHrGreaterThan"; break;
    case WktStepDuration::RepeatUntilPowerLessThan          : debug << "RepeatUntilPowerLessThan"; break;
    case WktStepDuration::RepeatUntilPowerGreaterThan       : debug << "RepeatUntilPowerGreaterThan"; break;
    case WktStepDuration::PowerLessThan                     : debug << "PowerLessThan"; break;
    case WktStepDuration::PowerGreaterThan                  : debug << "PowerGreaterThan"; break;
    case WktStepDuration::TrainingPeaksTss                  : debug << "TrainingPeaksTss"; break;
    case WktStepDuration::RepeatUntilPowerLastLapLessThan   : debug << "RepeatUntilPowerLastLapLessThan"; break;
    case WktStepDuration::RepeatUntilMaxPowerLastLapLessThan: debug << "RepeatUntilMaxPowerLastLapLessThan"; break;
    case WktStepDuration::Power3sLessThan                   : debug << "Power3sLessThan"; break;
    case WktStepDuration::Power10sLessThan                  : debug << "Power10sLessThan"; break;
    case WktStepDuration::Power30sLessThan                  : debug << "Power30sLessThan"; break;
    case WktStepDuration::Power3sGreaterThan                : debug << "Power3sGreaterThan"; break;
    case WktStepDuration::Power10sGreaterThan               : debug << "Power10sGreaterThan"; break;
    case WktStepDuration::Power30sGreaterThan               : debug << "Power30sGreaterThan"; break;
    case WktStepDuration::PowerLapLessThan                  : debug << "PowerLapLessThan"; break;
    case WktStepDuration::PowerLapGreaterThan               : debug << "PowerLapGreaterThan"; break;
    case WktStepDuration::RepeatUntilTrainingPeaksTss       : debug << "RepeatUntilTrainingPeaksTss"; break;
    case WktStepDuration::RepetitionTime                    : debug << "RepetitionTime"; break;
    case WktStepDuration::Reps                              : debug << "Reps"; break;
    case WktStepDuration::TimeOnly                          : debug << "TimeOnly"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const WktStepTarget value)
{
    switch (value) {
    case WktStepTarget::Speed       : debug << "Speed"; break;
    case WktStepTarget::HeartRate   : debug << "HeartRate"; break;
    case WktStepTarget::Open        : debug << "Open"; break;
    case WktStepTarget::Cadence     : debug << "Cadence"; break;
    case WktStepTarget::Power       : debug << "Power"; break;
    case WktStepTarget::Grade       : debug << "Grade"; break;
    case WktStepTarget::Resistance  : debug << "Resistance"; break;
    case WktStepTarget::Power3s     : debug << "Power3s"; break;
    case WktStepTarget::Power10s    : debug << "Power10s"; break;
    case WktStepTarget::Power30s    : debug << "Power30s"; break;
    case WktStepTarget::PowerLap    : debug << "PowerLap"; break;
    case WktStepTarget::SwimStroke  : debug << "SwimStroke"; break;
    case WktStepTarget::SpeedLap    : debug << "SpeedLap"; break;
    case WktStepTarget::HeartRateLap: debug << "HeartRateLap"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const Goal value)
{
    switch (value) {
    case Goal::Time         : debug << "Time"; break;
    case Goal::Distance     : debug << "Distance"; break;
    case Goal::Calories     : debug << "Calories"; break;
    case Goal::Frequency    : debug << "Frequency"; break;
    case Goal::Steps        : debug << "Steps"; break;
    case Goal::Ascent       : debug << "Ascent"; break;
    case Goal::ActiveMinutes: debug << "ActiveMinutes"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const GoalRecurrence value)
{
    switch (value) {
    case GoalRecurrence::Off    : debug << "Off"; break;
    case GoalRecurrence::Daily  : debug << "Daily"; break;
    case GoalRecurrence::Weekly : debug << "Weekly"; break;
    case GoalRecurrence::Monthly: debug << "Monthly"; break;
    case GoalRecurrence::Yearly : debug << "Yearly"; break;
    case GoalRecurrence::Custom : debug << "Custom"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const GoalSource value)
{
    switch (value) {
    case GoalSource::Auto     : debug << "Auto"; break;
    case GoalSource::Community: debug << "Community"; break;
    case GoalSource::User     : debug << "User"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const Schedule value)
{
    switch (value) {
    case Schedule::Workout: debug << "Workout"; break;
    case Schedule::Course : debug << "Course"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const CoursePoint value)
{
    switch (value) {
    case CoursePoint::Generic       : debug << "Generic"; break;
    case CoursePoint::Summit        : debug << "Summit"; break;
    case CoursePoint::Valley        : debug << "Valley"; break;
    case CoursePoint::Water         : debug << "Water"; break;
    case CoursePoint::Food          : debug << "Food"; break;
    case CoursePoint::Danger        : debug << "Danger"; break;
    case CoursePoint::Left          : debug << "Left"; break;
    case CoursePoint::Right         : debug << "Right"; break;
    case CoursePoint::Straight      : debug << "Straight"; break;
    case CoursePoint::FirstAid      : debug << "FirstAid"; break;
    case CoursePoint::FourthCategory: debug << "FourthCategory"; break;
    case CoursePoint::ThirdCategory : debug << "ThirdCategory"; break;
    case CoursePoint::SecondCategory: debug << "SecondCategory"; break;
    case CoursePoint::FirstCategory : debug << "FirstCategory"; break;
    case CoursePoint::HorsCategory  : debug << "HorsCategory"; break;
    case CoursePoint::Sprint        : debug << "Sprint"; break;
    case CoursePoint::LeftFork      : debug << "LeftFork"; break;
    case CoursePoint::RightFork     : debug << "RightFork"; break;
    case CoursePoint::MiddleFork    : debug << "MiddleFork"; break;
    case CoursePoint::SlightLeft    : debug << "SlightLeft"; break;
    case CoursePoint::SharpLeft     : debug << "SharpLeft"; break;
    case CoursePoint::SlightRight   : debug << "SlightRight"; break;
    case CoursePoint::SharpRight    : debug << "SharpRight"; break;
    case CoursePoint::UTurn         : debug << "UTurn"; break;
    case CoursePoint::SegmentStart  : debug << "SegmentStart"; break;
    case CoursePoint::SegmentEnd    : debug << "SegmentEnd"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const Manufacturer value)
{
    switch (value) {
    case Manufacturer::Garmin                : debug << "Garmin"; break;
    case Manufacturer::GarminFr405Antfs      : debug << "GarminFr405Antfs"; break;
    case Manufacturer::Zephyr                : debug << "Zephyr"; break;
    case Manufacturer::Dayton                : debug << "Dayton"; break;
    case Manufacturer::Idt                   : debug << "Idt"; break;
    case Manufacturer::Srm                   : debug << "Srm"; break;
    case Manufacturer::Quarq                 : debug << "Quarq"; break;
    case Manufacturer::Ibike                 : debug << "Ibike"; break;
    case Manufacturer::Saris                 : debug << "Saris"; break;
    case Manufacturer::SparkHk               : debug << "SparkHk"; break;
    case Manufacturer::Tanita                : debug << "Tanita"; break;
    case Manufacturer::Echowell              : debug << "Echowell"; break;
    case Manufacturer::DynastreamOem         : debug << "DynastreamOem"; break;
    case Manufacturer::Nautilus              : debug << "Nautilus"; break;
    case Manufacturer::Dynastream            : debug << "Dynastream"; break;
    case Manufacturer::Timex                 : debug << "Timex"; break;
    case Manufacturer::Metrigear             : debug << "Metrigear"; break;
    case Manufacturer::Xelic                 : debug << "Xelic"; break;
    case Manufacturer::Beurer                : debug << "Beurer"; break;
    case Manufacturer::Cardiosport           : debug << "Cardiosport"; break;
    case Manufacturer::AAndD                 : debug << "AAndD"; break;
    case Manufacturer::Hmm                   : debug << "Hmm"; break;
    case Manufacturer::Suunto                : debug << "Suunto"; break;
    case Manufacturer::ThitaElektronik       : debug << "ThitaElektronik"; break;
    case Manufacturer::Gpulse                : debug << "Gpulse"; break;
    case Manufacturer::CleanMobile           : debug << "CleanMobile"; break;
    case Manufacturer::PedalBrain            : debug << "PedalBrain"; break;
    case Manufacturer::Peaksware             : debug << "Peaksware"; break;
    case Manufacturer::Saxonar               : debug << "Saxonar"; break;
    case Manufacturer::LemondFitness         : debug << "LemondFitness"; break;
    case Manufacturer::Dexcom                : debug << "Dexcom"; break;
    case Manufacturer::WahooFitness          : debug << "WahooFitness"; break;
    case Manufacturer::OctaneFitness         : debug << "OctaneFitness"; break;
    case Manufacturer::Archinoetics          : debug << "Archinoetics"; break;
    case Manufacturer::TheHurtBox            : debug << "TheHurtBox"; break;
    case Manufacturer::CitizenSystems        : debug << "CitizenSystems"; break;
    case Manufacturer::Magellan              : debug << "Magellan"; break;
    case Manufacturer::Osynce                : debug << "Osynce"; break;
    case Manufacturer::Holux                 : debug << "Holux"; break;
    case Manufacturer::Concept2              : debug << "Concept2"; break;
    case Manufacturer::Shimano               : debug << "Shimano"; break;
    case Manufacturer::OneGiantLeap          : debug << "OneGiantLeap"; break;
    case Manufacturer::AceSensor             : debug << "AceSensor"; break;
    case Manufacturer::BrimBrothers          : debug << "BrimBrothers"; break;
    case Manufacturer::Xplova                : debug << "Xplova"; break;
    case Manufacturer::PerceptionDigital     : debug << "PerceptionDigital"; break;
    case Manufacturer::Bf1systems            : debug << "Bf1systems"; break;
    case Manufacturer::Pioneer               : debug << "Pioneer"; break;
    case Manufacturer::Spantec               : debug << "Spantec"; break;
    case Manufacturer::Metalogics            : debug << "Metalogics"; break;
    case Manufacturer::Fouriiiis             : debug << "Fouriiiis"; break;
    case Manufacturer::SeikoEpson            : debug << "SeikoEpson"; break;
    case Manufacturer::SeikoEpsonOem         : debug << "SeikoEpsonOem"; break;
    case Manufacturer::IforPowell            : debug << "IforPowell"; break;
    case Manufacturer::MaxwellGuider         : debug << "MaxwellGuider"; break;
    case Manufacturer::StarTrac              : debug << "StarTrac"; break;
    case Manufacturer::Breakaway             : debug << "Breakaway"; break;
    case Manufacturer::AlatechTechnologyLtd  : debug << "AlatechTechnologyLtd"; break;
    case Manufacturer::MioTechnologyEurope   : debug << "MioTechnologyEurope"; break;
    case Manufacturer::Rotor                 : debug << "Rotor"; break;
    case Manufacturer::Geonaute              : debug << "Geonaute"; break;
    case Manufacturer::IdBike                : debug << "IdBike"; break;
    case Manufacturer::Specialized           : debug << "Specialized"; break;
    case Manufacturer::Wtek                  : debug << "Wtek"; break;
    case Manufacturer::PhysicalEnterprises   : debug << "PhysicalEnterprises"; break;
    case Manufacturer::NorthPoleEngineering  : debug << "NorthPoleEngineering"; break;
    case Manufacturer::Bkool                 : debug << "Bkool"; break;
    case Manufacturer::Cateye                : debug << "Cateye"; break;
    case Manufacturer::StagesCycling         : debug << "StagesCycling"; break;
    case Manufacturer::Sigmasport            : debug << "Sigmasport"; break;
    case Manufacturer::Tomtom                : debug << "Tomtom"; break;
    case Manufacturer::Peripedal             : debug << "Peripedal"; break;
    case Manufacturer::Wattbike              : debug << "Wattbike"; break;
    case Manufacturer::Moxy                  : debug << "Moxy"; break;
    case Manufacturer::Ciclosport            : debug << "Ciclosport"; break;
    case Manufacturer::Powerbahn             : debug << "Powerbahn"; break;
    case Manufacturer::AcornProjectsAps      : debug << "AcornProjectsAps"; break;
    case Manufacturer::Lifebeam              : debug << "Lifebeam"; break;
    case Manufacturer::Bontrager             : debug << "Bontrager"; break;
    case Manufacturer::Wellgo                : debug << "Wellgo"; break;
    case Manufacturer::Scosche               : debug << "Scosche"; break;
    case Manufacturer::Magura                : debug << "Magura"; break;
    case Manufacturer::Woodway               : debug << "Woodway"; break;
    case Manufacturer::Elite                 : debug << "Elite"; break;
    case Manufacturer::NielsenKellerman      : debug << "NielsenKellerman"; break;
    case Manufacturer::DkCity                : debug << "DkCity"; break;
    case Manufacturer::Tacx                  : debug << "Tacx"; break;
    case Manufacturer::DirectionTechnology   : debug << "DirectionTechnology"; break;
    case Manufacturer::Magtonic              : debug << "Magtonic"; break;
    case Manufacturer::Onepartcarbon         : debug << "Onepartcarbon"; break;
    case Manufacturer::InsideRideTechnologies: debug << "InsideRideTechnologies"; break;
    case Manufacturer::SoundOfMotion         : debug << "SoundOfMotion"; break;
    case Manufacturer::Stryd                 : debug << "Stryd"; break;
    case Manufacturer::Icg                   : debug << "Icg"; break;
    case Manufacturer::Mipulse               : debug << "Mipulse"; break;
    case Manufacturer::BsxAthletics          : debug << "BsxAthletics"; break;
    case Manufacturer::Look                  : debug << "Look"; break;
    case Manufacturer::CampagnoloSrl         : debug << "CampagnoloSrl"; break;
    case Manufacturer::BodyBikeSmart         : debug << "BodyBikeSmart"; break;
    case Manufacturer::Praxisworks           : debug << "Praxisworks"; break;
    case Manufacturer::LimitsTechnology      : debug << "LimitsTechnology"; break;
    case Manufacturer::TopactionTechnology   : debug << "TopactionTechnology"; break;
    case Manufacturer::Cosinuss              : debug << "Cosinuss"; break;
    case Manufacturer::Fitcare               : debug << "Fitcare"; break;
    case Manufacturer::Magene                : debug << "Magene"; break;
    case Manufacturer::GiantManufacturingCo  : debug << "GiantManufacturingCo"; break;
    case Manufacturer::Tigrasport            : debug << "Tigrasport"; break;
    case Manufacturer::Salutron              : debug << "Salutron"; break;
    case Manufacturer::Technogym             : debug << "Technogym"; break;
    case Manufacturer::BrytonSensors         : debug << "BrytonSensors"; break;
    case Manufacturer::LatitudeLimited       : debug << "LatitudeLimited"; break;
    case Manufacturer::SoaringTechnology     : debug << "SoaringTechnology"; break;
    case Manufacturer::Igpsport              : debug << "Igpsport"; break;
    case Manufacturer::Thinkrider            : debug << "Thinkrider"; break;
    case Manufacturer::GopherSport           : debug << "GopherSport"; break;
    case Manufacturer::Waterrower            : debug << "Waterrower"; break;
    case Manufacturer::Orangetheory          : debug << "Orangetheory"; break;
    case Manufacturer::Inpeak                : debug << "Inpeak"; break;
    case Manufacturer::Kinetic               : debug << "Kinetic"; break;
    case Manufacturer::JohnsonHealthTech     : debug << "JohnsonHealthTech"; break;
    case Manufacturer::PolarElectro          : debug << "PolarElectro"; break;
    case Manufacturer::Seesense              : debug << "Seesense"; break;
    case Manufacturer::NciTechnology         : debug << "NciTechnology"; break;
    case Manufacturer::Iqsquare              : debug << "Iqsquare"; break;
    case Manufacturer::Leomo                 : debug << "Leomo"; break;
    case Manufacturer::IfitCom               : debug << "IfitCom"; break;
    case Manufacturer::CorosByte             : debug << "CorosByte"; break;
    case Manufacturer::VersaDesign           : debug << "VersaDesign"; break;
    case Manufacturer::Chileaf               : debug << "Chileaf"; break;
    case Manufacturer::Cycplus               : debug << "Cycplus"; break;
    case Manufacturer::GravaaByte            : debug << "GravaaByte"; break;
    case Manufacturer::Sigeyi                : debug << "Sigeyi"; break;
    case Manufacturer::Coospo                : debug << "Coospo"; break;
    case Manufacturer::Development           : debug << "Development"; break;
    case Manufacturer::Healthandlife         : debug << "Healthandlife"; break;
    case Manufacturer::Lezyne                : debug << "Lezyne"; break;
    case Manufacturer::ScribeLabs            : debug << "ScribeLabs"; break;
    case Manufacturer::Zwift                 : debug << "Zwift"; break;
    case Manufacturer::Watteam               : debug << "Watteam"; break;
    case Manufacturer::Recon                 : debug << "Recon"; break;
    case Manufacturer::FaveroElectronics     : debug << "FaveroElectronics"; break;
    case Manufacturer::Dynovelo              : debug << "Dynovelo"; break;
    case Manufacturer::Strava                : debug << "Strava"; break;
    case Manufacturer::Precor                : debug << "Precor"; break;
    case Manufacturer::Bryton                : debug << "Bryton"; break;
    case Manufacturer::Sram                  : debug << "Sram"; break;
    case Manufacturer::Navman                : debug << "Navman"; break;
    case Manufacturer::Cobi                  : debug << "Cobi"; break;
    case Manufacturer::Spivi                 : debug << "Spivi"; break;
    case Manufacturer::MioMagellan           : debug << "MioMagellan"; break;
    case Manufacturer::Evesports             : debug << "Evesports"; break;
    case Manufacturer::SensitivusGauge       : debug << "SensitivusGauge"; break;
    case Manufacturer::Podoon                : debug << "Podoon"; break;
    case Manufacturer::LifeTimeFitness       : debug << "LifeTimeFitness"; break;
    case Manufacturer::FalcoEMotors          : debug << "FalcoEMotors"; break;
    case Manufacturer::Minoura               : debug << "Minoura"; break;
    case Manufacturer::Cycliq                : debug << "Cycliq"; break;
    case Manufacturer::Luxottica             : debug << "Luxottica"; break;
    case Manufacturer::TrainerRoad           : debug << "TrainerRoad"; break;
    case Manufacturer::TheSufferfest         : debug << "TheSufferfest"; break;
    case Manufacturer::Fullspeedahead        : debug << "Fullspeedahead"; break;
    case Manufacturer::Virtualtraining       : debug << "Virtualtraining"; break;
    case Manufacturer::Feedbacksports        : debug << "Feedbacksports"; break;
    case Manufacturer::Omata                 : debug << "Omata"; break;
    case Manufacturer::Vdo                   : debug << "Vdo"; break;
    case Manufacturer::Magneticdays          : debug << "Magneticdays"; break;
    case Manufacturer::Hammerhead            : debug << "Hammerhead"; break;
    case Manufacturer::KineticByKurt         : debug << "KineticByKurt"; break;
    case Manufacturer::Shapelog              : debug << "Shapelog"; break;
    case Manufacturer::Dabuziduo             : debug << "Dabuziduo"; break;
    case Manufacturer::Jetblack              : debug << "Jetblack"; break;
    case Manufacturer::Coros                 : debug << "Coros"; break;
    case Manufacturer::Virtugo               : debug << "Virtugo"; break;
    case Manufacturer::Velosense             : debug << "Velosense"; break;
    case Manufacturer::Cycligentinc          : debug << "Cycligentinc"; break;
    case Manufacturer::Trailforks            : debug << "Trailforks"; break;
    case Manufacturer::MahleEbikemotion      : debug << "MahleEbikemotion"; break;
    case Manufacturer::Nurvv                 : debug << "Nurvv"; break;
    case Manufacturer::Microprogram          : debug << "Microprogram"; break;
    case Manufacturer::Zone5cloud            : debug << "Zone5cloud"; break;
    case Manufacturer::Greenteg              : debug << "Greenteg"; break;
    case Manufacturer::YamahaMotors          : debug << "YamahaMotors"; break;
    case Manufacturer::Whoop                 : debug << "Whoop"; break;
    case Manufacturer::Gravaa                : debug << "Gravaa"; break;
    case Manufacturer::Onelap                : debug << "Onelap"; break;
    case Manufacturer::MonarkExercise        : debug << "MonarkExercise"; break;
    case Manufacturer::Form                  : debug << "Form"; break;
    case Manufacturer::Decathlon             : debug << "Decathlon"; break;
    case Manufacturer::Syncros               : debug << "Syncros"; break;
    case Manufacturer::Actigraphcorp         : debug << "Actigraphcorp"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const GarminProduct value)
{
    switch (value) {
    case GarminProduct::Hrm1                      : debug << "Hrm1"; break;
    case GarminProduct::Axh01                     : debug << "Axh01"; break;
    case GarminProduct::Axb01                     : debug << "Axb01"; break;
    case GarminProduct::Axb02                     : debug << "Axb02"; break;
    case GarminProduct::Hrm2ss                    : debug << "Hrm2ss"; break;
    case GarminProduct::DsiAlf02                  : debug << "DsiAlf02"; break;
    case GarminProduct::Hrm3ss                    : debug << "Hrm3ss"; break;
    case GarminProduct::HrmRunSingleByteProductId : debug << "HrmRunSingleByteProductId"; break;
    case GarminProduct::Bsm                       : debug << "Bsm"; break;
    case GarminProduct::Bcm                       : debug << "Bcm"; break;
    case GarminProduct::Axs01                     : debug << "Axs01"; break;
    case GarminProduct::HrmTriSingleByteProductId : debug << "HrmTriSingleByteProductId"; break;
    case GarminProduct::Hrm4RunSingleByteProductId: debug << "Hrm4RunSingleByteProductId"; break;
    case GarminProduct::Fr225SingleByteProductId  : debug << "Fr225SingleByteProductId"; break;
    case GarminProduct::Gen3BsmSingleByteProductId: debug << "Gen3BsmSingleByteProductId"; break;
    case GarminProduct::Gen3BcmSingleByteProductId: debug << "Gen3BcmSingleByteProductId"; break;
    case GarminProduct::Fr301China                : debug << "Fr301China"; break;
    case GarminProduct::Fr301Japan                : debug << "Fr301Japan"; break;
    case GarminProduct::Fr301Korea                : debug << "Fr301Korea"; break;
    case GarminProduct::Fr301Taiwan               : debug << "Fr301Taiwan"; break;
    case GarminProduct::Fr405                     : debug << "Fr405"; break;
    case GarminProduct::Fr50                      : debug << "Fr50"; break;
    case GarminProduct::Fr405Japan                : debug << "Fr405Japan"; break;
    case GarminProduct::Fr60                      : debug << "Fr60"; break;
    case GarminProduct::DsiAlf01                  : debug << "DsiAlf01"; break;
    case GarminProduct::Fr310xt                   : debug << "Fr310xt"; break;
    case GarminProduct::Edge500                   : debug << "Edge500"; break;
    case GarminProduct::Fr110                     : debug << "Fr110"; break;
    case GarminProduct::Edge800                   : debug << "Edge800"; break;
    case GarminProduct::Edge500Taiwan             : debug << "Edge500Taiwan"; break;
    case GarminProduct::Edge500Japan              : debug << "Edge500Japan"; break;
    case GarminProduct::Chirp                     : debug << "Chirp"; break;
    case GarminProduct::Fr110Japan                : debug << "Fr110Japan"; break;
    case GarminProduct::Edge200                   : debug << "Edge200"; break;
    case GarminProduct::Fr910xt                   : debug << "Fr910xt"; break;
    case GarminProduct::Edge800Taiwan             : debug << "Edge800Taiwan"; break;
    case GarminProduct::Edge800Japan              : debug << "Edge800Japan"; break;
    case GarminProduct::Alf04                     : debug << "Alf04"; break;
    case GarminProduct::Fr610                     : debug << "Fr610"; break;
    case GarminProduct::Fr210Japan                : debug << "Fr210Japan"; break;
    case GarminProduct::VectorSs                  : debug << "VectorSs"; break;
    case GarminProduct::VectorCp                  : debug << "VectorCp"; break;
    case GarminProduct::Edge800China              : debug << "Edge800China"; break;
    case GarminProduct::Edge500China              : debug << "Edge500China"; break;
    case GarminProduct::ApproachG10               : debug << "ApproachG10"; break;
    case GarminProduct::Fr610Japan                : debug << "Fr610Japan"; break;
    case GarminProduct::Edge500Korea              : debug << "Edge500Korea"; break;
    case GarminProduct::Fr70                      : debug << "Fr70"; break;
    case GarminProduct::Fr310xt4t                 : debug << "Fr310xt4t"; break;
    case GarminProduct::Amx                       : debug << "Amx"; break;
    case GarminProduct::Fr10                      : debug << "Fr10"; break;
    case GarminProduct::Edge800Korea              : debug << "Edge800Korea"; break;
    case GarminProduct::Swim                      : debug << "Swim"; break;
    case GarminProduct::Fr910xtChina              : debug << "Fr910xtChina"; break;
    case GarminProduct::Fenix                     : debug << "Fenix"; break;
    case GarminProduct::Edge200Taiwan             : debug << "Edge200Taiwan"; break;
    case GarminProduct::Edge510                   : debug << "Edge510"; break;
    case GarminProduct::Edge810                   : debug << "Edge810"; break;
    case GarminProduct::Tempe                     : debug << "Tempe"; break;
    case GarminProduct::Fr910xtJapan              : debug << "Fr910xtJapan"; break;
    case GarminProduct::Fr620                     : debug << "Fr620"; break;
    case GarminProduct::Fr220                     : debug << "Fr220"; break;
    case GarminProduct::Fr910xtKorea              : debug << "Fr910xtKorea"; break;
    case GarminProduct::Fr10Japan                 : debug << "Fr10Japan"; break;
    case GarminProduct::Edge810Japan              : debug << "Edge810Japan"; break;
    case GarminProduct::VirbElite                 : debug << "VirbElite"; break;
    case GarminProduct::EdgeTouring               : debug << "EdgeTouring"; break;
    case GarminProduct::Edge510Japan              : debug << "Edge510Japan"; break;
    case GarminProduct::HrmTri                    : debug << "HrmTri"; break;
    case GarminProduct::HrmRun                    : debug << "HrmRun"; break;
    case GarminProduct::Fr920xt                   : debug << "Fr920xt"; break;
    case GarminProduct::Edge510Asia               : debug << "Edge510Asia"; break;
    case GarminProduct::Edge810China              : debug << "Edge810China"; break;
    case GarminProduct::Edge810Taiwan             : debug << "Edge810Taiwan"; break;
    case GarminProduct::Edge1000                  : debug << "Edge1000"; break;
    case GarminProduct::VivoFit                   : debug << "VivoFit"; break;
    case GarminProduct::VirbRemote                : debug << "VirbRemote"; break;
    case GarminProduct::VivoKi                    : debug << "VivoKi"; break;
    case GarminProduct::Fr15                      : debug << "Fr15"; break;
    case GarminProduct::VivoActive                : debug << "VivoActive"; break;
    case GarminProduct::Edge510Korea              : debug << "Edge510Korea"; break;
    case GarminProduct::Fr620Japan                : debug << "Fr620Japan"; break;
    case GarminProduct::Fr620China                : debug << "Fr620China"; break;
    case GarminProduct::Fr220Japan                : debug << "Fr220Japan"; break;
    case GarminProduct::Fr220China                : debug << "Fr220China"; break;
    case GarminProduct::ApproachS6                : debug << "ApproachS6"; break;
    case GarminProduct::VivoSmart                 : debug << "VivoSmart"; break;
    case GarminProduct::Fenix2                    : debug << "Fenix2"; break;
    case GarminProduct::Epix                      : debug << "Epix"; break;
    case GarminProduct::Fenix3                    : debug << "Fenix3"; break;
    case GarminProduct::Edge1000Taiwan            : debug << "Edge1000Taiwan"; break;
    case GarminProduct::Edge1000Japan             : debug << "Edge1000Japan"; break;
    case GarminProduct::Fr15Japan                 : debug << "Fr15Japan"; break;
    case GarminProduct::Edge520                   : debug << "Edge520"; break;
    case GarminProduct::Edge1000China             : debug << "Edge1000China"; break;
    case GarminProduct::Fr620Russia               : debug << "Fr620Russia"; break;
    case GarminProduct::Fr220Russia               : debug << "Fr220Russia"; break;
    case GarminProduct::VectorS                   : debug << "VectorS"; break;
    case GarminProduct::Edge1000Korea             : debug << "Edge1000Korea"; break;
    case GarminProduct::Fr920xtTaiwan             : debug << "Fr920xtTaiwan"; break;
    case GarminProduct::Fr920xtChina              : debug << "Fr920xtChina"; break;
    case GarminProduct::Fr920xtJapan              : debug << "Fr920xtJapan"; break;
    case GarminProduct::Virbx                     : debug << "Virbx"; break;
    case GarminProduct::VivoSmartApac             : debug << "VivoSmartApac"; break;
    case GarminProduct::EtrexTouch                : debug << "EtrexTouch"; break;
    case GarminProduct::Edge25                    : debug << "Edge25"; break;
    case GarminProduct::Fr25                      : debug << "Fr25"; break;
    case GarminProduct::VivoFit2                  : debug << "VivoFit2"; break;
    case GarminProduct::Fr225                     : debug << "Fr225"; break;
    case GarminProduct::Fr630                     : debug << "Fr630"; break;
    case GarminProduct::Fr230                     : debug << "Fr230"; break;
    case GarminProduct::Fr735xt                   : debug << "Fr735xt"; break;
    case GarminProduct::VivoActiveApac            : debug << "VivoActiveApac"; break;
    case GarminProduct::Vector2                   : debug << "Vector2"; break;
    case GarminProduct::Vector2s                  : debug << "Vector2s"; break;
    case GarminProduct::Virbxe                    : debug << "Virbxe"; break;
    case GarminProduct::Fr620Taiwan               : debug << "Fr620Taiwan"; break;
    case GarminProduct::Fr220Taiwan               : debug << "Fr220Taiwan"; break;
    case GarminProduct::Truswing                  : debug << "Truswing"; break;
    case GarminProduct::D2airvenu                 : debug << "D2airvenu"; break;
    case GarminProduct::Fenix3China               : debug << "Fenix3China"; break;
    case GarminProduct::Fenix3Twn                 : debug << "Fenix3Twn"; break;
    case GarminProduct::VariaHeadlight            : debug << "VariaHeadlight"; break;
    case GarminProduct::VariaTaillightOld         : debug << "VariaTaillightOld"; break;
    case GarminProduct::EdgeExplore1000           : debug << "EdgeExplore1000"; break;
    case GarminProduct::Fr225Asia                 : debug << "Fr225Asia"; break;
    case GarminProduct::VariaRadarTaillight       : debug << "VariaRadarTaillight"; break;
    case GarminProduct::VariaRadarDisplay         : debug << "VariaRadarDisplay"; break;
    case GarminProduct::Edge20                    : debug << "Edge20"; break;
    case GarminProduct::Edge520Asia               : debug << "Edge520Asia"; break;
    case GarminProduct::Edge520Japan              : debug << "Edge520Japan"; break;
    case GarminProduct::D2Bravo                   : debug << "D2Bravo"; break;
    case GarminProduct::ApproachS20               : debug << "ApproachS20"; break;
    case GarminProduct::VivoSmart2                : debug << "VivoSmart2"; break;
    case GarminProduct::Edge1000Thai              : debug << "Edge1000Thai"; break;
    case GarminProduct::VariaRemote               : debug << "VariaRemote"; break;
    case GarminProduct::Edge25Asia                : debug << "Edge25Asia"; break;
    case GarminProduct::Edge25Jpn                 : debug << "Edge25Jpn"; break;
    case GarminProduct::Edge20Asia                : debug << "Edge20Asia"; break;
    case GarminProduct::ApproachX40               : debug << "ApproachX40"; break;
    case GarminProduct::Fenix3Japan               : debug << "Fenix3Japan"; break;
    case GarminProduct::VivoSmartEmea             : debug << "VivoSmartEmea"; break;
    case GarminProduct::Fr630Asia                 : debug << "Fr630Asia"; break;
    case GarminProduct::Fr630Jpn                  : debug << "Fr630Jpn"; break;
    case GarminProduct::Fr230Jpn                  : debug << "Fr230Jpn"; break;
    case GarminProduct::Hrm4Run                   : debug << "Hrm4Run"; break;
    case GarminProduct::EpixJapan                 : debug << "EpixJapan"; break;
    case GarminProduct::VivoActiveHr              : debug << "VivoActiveHr"; break;
    case GarminProduct::VivoSmartGpsHr            : debug << "VivoSmartGpsHr"; break;
    case GarminProduct::VivoSmartHr               : debug << "VivoSmartHr"; break;
    case GarminProduct::VivoSmartHrAsia           : debug << "VivoSmartHrAsia"; break;
    case GarminProduct::VivoSmartGpsHrAsia        : debug << "VivoSmartGpsHrAsia"; break;
    case GarminProduct::VivoMove                  : debug << "VivoMove"; break;
    case GarminProduct::VariaTaillight            : debug << "VariaTaillight"; break;
    case GarminProduct::Fr235Asia                 : debug << "Fr235Asia"; break;
    case GarminProduct::Fr235Japan                : debug << "Fr235Japan"; break;
    case GarminProduct::VariaVision               : debug << "VariaVision"; break;
    case GarminProduct::VivoFit3                  : debug << "VivoFit3"; break;
    case GarminProduct::Fenix3Korea               : debug << "Fenix3Korea"; break;
    case GarminProduct::Fenix3Sea                 : debug << "Fenix3Sea"; break;
    case GarminProduct::Fenix3Hr                  : debug << "Fenix3Hr"; break;
    case GarminProduct::VirbUltra30               : debug << "VirbUltra30"; break;
    case GarminProduct::IndexSmartScale           : debug << "IndexSmartScale"; break;
    case GarminProduct::Fr235                     : debug << "Fr235"; break;
    case GarminProduct::Fenix3Chronos             : debug << "Fenix3Chronos"; break;
    case GarminProduct::Oregon7xx                 : debug << "Oregon7xx"; break;
    case GarminProduct::Rino7xx                   : debug << "Rino7xx"; break;
    case GarminProduct::EpixKorea                 : debug << "EpixKorea"; break;
    case GarminProduct::Fenix3HrChn               : debug << "Fenix3HrChn"; break;
    case GarminProduct::Fenix3HrTwn               : debug << "Fenix3HrTwn"; break;
    case GarminProduct::Fenix3HrJpn               : debug << "Fenix3HrJpn"; break;
    case GarminProduct::Fenix3HrSea               : debug << "Fenix3HrSea"; break;
    case GarminProduct::Fenix3HrKor               : debug << "Fenix3HrKor"; break;
    case GarminProduct::Nautix                    : debug << "Nautix"; break;
    case GarminProduct::VivoActiveHrApac          : debug << "VivoActiveHrApac"; break;
    case GarminProduct::Oregon7xxWw               : debug << "Oregon7xxWw"; break;
    case GarminProduct::Edge820                   : debug << "Edge820"; break;
    case GarminProduct::EdgeExplore820            : debug << "EdgeExplore820"; break;
    case GarminProduct::Fr735xtApac               : debug << "Fr735xtApac"; break;
    case GarminProduct::Fr735xtJapan              : debug << "Fr735xtJapan"; break;
    case GarminProduct::Fenix5s                   : debug << "Fenix5s"; break;
    case GarminProduct::D2BravoTitanium           : debug << "D2BravoTitanium"; break;
    case GarminProduct::VariaUt800                : debug << "VariaUt800"; break;
    case GarminProduct::RunningDynamicsPod        : debug << "RunningDynamicsPod"; break;
    case GarminProduct::Edge820China              : debug << "Edge820China"; break;
    case GarminProduct::Edge820Japan              : debug << "Edge820Japan"; break;
    case GarminProduct::Fenix5x                   : debug << "Fenix5x"; break;
    case GarminProduct::VivoFitJr                 : debug << "VivoFitJr"; break;
    case GarminProduct::VivoSmart3                : debug << "VivoSmart3"; break;
    case GarminProduct::VivoSport                 : debug << "VivoSport"; break;
    case GarminProduct::Edge820Taiwan             : debug << "Edge820Taiwan"; break;
    case GarminProduct::Edge820Korea              : debug << "Edge820Korea"; break;
    case GarminProduct::Edge820Sea                : debug << "Edge820Sea"; break;
    case GarminProduct::Fr35Hebrew                : debug << "Fr35Hebrew"; break;
    case GarminProduct::ApproachS60               : debug << "ApproachS60"; break;
    case GarminProduct::Fr35Apac                  : debug << "Fr35Apac"; break;
    case GarminProduct::Fr35Japan                 : debug << "Fr35Japan"; break;
    case GarminProduct::Fenix3ChronosAsia         : debug << "Fenix3ChronosAsia"; break;
    case GarminProduct::Virb360                   : debug << "Virb360"; break;
    case GarminProduct::Fr935                     : debug << "Fr935"; break;
    case GarminProduct::Fenix5                    : debug << "Fenix5"; break;
    case GarminProduct::Vivoactive3               : debug << "Vivoactive3"; break;
    case GarminProduct::Fr235ChinaNfc             : debug << "Fr235ChinaNfc"; break;
    case GarminProduct::Foretrex601701            : debug << "Foretrex601701"; break;
    case GarminProduct::VivoMoveHr                : debug << "VivoMoveHr"; break;
    case GarminProduct::Edge1030                  : debug << "Edge1030"; break;
    case GarminProduct::Vector3                   : debug << "Vector3"; break;
    case GarminProduct::Fenix5Asia                : debug << "Fenix5Asia"; break;
    case GarminProduct::Fenix5sAsia               : debug << "Fenix5sAsia"; break;
    case GarminProduct::Fenix5xAsia               : debug << "Fenix5xAsia"; break;
    case GarminProduct::ApproachZ80               : debug << "ApproachZ80"; break;
    case GarminProduct::Fr35Korea                 : debug << "Fr35Korea"; break;
    case GarminProduct::D2charlie                 : debug << "D2charlie"; break;
    case GarminProduct::VivoSmart3Apac            : debug << "VivoSmart3Apac"; break;
    case GarminProduct::VivoSportApac             : debug << "VivoSportApac"; break;
    case GarminProduct::Fr935Asia                 : debug << "Fr935Asia"; break;
    case GarminProduct::Descent                   : debug << "Descent"; break;
    case GarminProduct::VivoFit4                  : debug << "VivoFit4"; break;
    case GarminProduct::Fr645                     : debug << "Fr645"; break;
    case GarminProduct::Fr645m                    : debug << "Fr645m"; break;
    case GarminProduct::Fr30                      : debug << "Fr30"; break;
    case GarminProduct::Fenix5sPlus               : debug << "Fenix5sPlus"; break;
    case GarminProduct::Edge130                   : debug << "Edge130"; break;
    case GarminProduct::Edge1030Asia              : debug << "Edge1030Asia"; break;
    case GarminProduct::Vivosmart4                : debug << "Vivosmart4"; break;
    case GarminProduct::VivoMoveHrAsia            : debug << "VivoMoveHrAsia"; break;
    case GarminProduct::ApproachX10               : debug << "ApproachX10"; break;
    case GarminProduct::Fr30Asia                  : debug << "Fr30Asia"; break;
    case GarminProduct::Vivoactive3mW             : debug << "Vivoactive3mW"; break;
    case GarminProduct::Fr645Asia                 : debug << "Fr645Asia"; break;
    case GarminProduct::Fr645mAsia                : debug << "Fr645mAsia"; break;
    case GarminProduct::EdgeExplore               : debug << "EdgeExplore"; break;
    case GarminProduct::Gpsmap66                  : debug << "Gpsmap66"; break;
    case GarminProduct::ApproachS10               : debug << "ApproachS10"; break;
    case GarminProduct::Vivoactive3mL             : debug << "Vivoactive3mL"; break;
    case GarminProduct::ApproachG80               : debug << "ApproachG80"; break;
    case GarminProduct::Edge130Asia               : debug << "Edge130Asia"; break;
    case GarminProduct::Edge1030Bontrager         : debug << "Edge1030Bontrager"; break;
    case GarminProduct::Fenix5Plus                : debug << "Fenix5Plus"; break;
    case GarminProduct::Fenix5xPlus               : debug << "Fenix5xPlus"; break;
    case GarminProduct::Edge520Plus               : debug << "Edge520Plus"; break;
    case GarminProduct::Fr945                     : debug << "Fr945"; break;
    case GarminProduct::Edge530                   : debug << "Edge530"; break;
    case GarminProduct::Edge830                   : debug << "Edge830"; break;
    case GarminProduct::InstinctEsports           : debug << "InstinctEsports"; break;
    case GarminProduct::Fenix5sPlusApac           : debug << "Fenix5sPlusApac"; break;
    case GarminProduct::Fenix5xPlusApac           : debug << "Fenix5xPlusApac"; break;
    case GarminProduct::Edge520PlusApac           : debug << "Edge520PlusApac"; break;
    case GarminProduct::Fr235lAsia                : debug << "Fr235lAsia"; break;
    case GarminProduct::Fr245Asia                 : debug << "Fr245Asia"; break;
    case GarminProduct::VivoActive3mApac          : debug << "VivoActive3mApac"; break;
    case GarminProduct::Gen3Bsm                   : debug << "Gen3Bsm"; break;
    case GarminProduct::Gen3Bcm                   : debug << "Gen3Bcm"; break;
    case GarminProduct::VivoSmart4Asia            : debug << "VivoSmart4Asia"; break;
    case GarminProduct::Vivoactive4Small          : debug << "Vivoactive4Small"; break;
    case GarminProduct::Vivoactive4Large          : debug << "Vivoactive4Large"; break;
    case GarminProduct::Venu                      : debug << "Venu"; break;
    case GarminProduct::MarqDriver                : debug << "MarqDriver"; break;
    case GarminProduct::MarqAviator               : debug << "MarqAviator"; break;
    case GarminProduct::MarqCaptain               : debug << "MarqCaptain"; break;
    case GarminProduct::MarqCommander             : debug << "MarqCommander"; break;
    case GarminProduct::MarqExpedition            : debug << "MarqExpedition"; break;
    case GarminProduct::MarqAthlete               : debug << "MarqAthlete"; break;
    case GarminProduct::DescentMk2                : debug << "DescentMk2"; break;
    case GarminProduct::Gpsmap66i                 : debug << "Gpsmap66i"; break;
    case GarminProduct::Fenix6sSport              : debug << "Fenix6sSport"; break;
    case GarminProduct::Fenix6s                   : debug << "Fenix6s"; break;
    case GarminProduct::Fenix6Sport               : debug << "Fenix6Sport"; break;
    case GarminProduct::Fenix6                    : debug << "Fenix6"; break;
    case GarminProduct::Fenix6x                   : debug << "Fenix6x"; break;
    case GarminProduct::HrmDual                   : debug << "HrmDual"; break;
    case GarminProduct::HrmPro                    : debug << "HrmPro"; break;
    case GarminProduct::VivoMove3Premium          : debug << "VivoMove3Premium"; break;
    case GarminProduct::ApproachS40               : debug << "ApproachS40"; break;
    case GarminProduct::Fr245mAsia                : debug << "Fr245mAsia"; break;
    case GarminProduct::Edge530Apac               : debug << "Edge530Apac"; break;
    case GarminProduct::Edge830Apac               : debug << "Edge830Apac"; break;
    case GarminProduct::VivoMove3                 : debug << "VivoMove3"; break;
    case GarminProduct::VivoActive4SmallAsia      : debug << "VivoActive4SmallAsia"; break;
    case GarminProduct::VivoActive4LargeAsia      : debug << "VivoActive4LargeAsia"; break;
    case GarminProduct::VivoActive4OledAsia       : debug << "VivoActive4OledAsia"; break;
    case GarminProduct::Swim2                     : debug << "Swim2"; break;
    case GarminProduct::MarqDriverAsia            : debug << "MarqDriverAsia"; break;
    case GarminProduct::MarqAviatorAsia           : debug << "MarqAviatorAsia"; break;
    case GarminProduct::VivoMove3Asia             : debug << "VivoMove3Asia"; break;
    case GarminProduct::Fr945Asia                 : debug << "Fr945Asia"; break;
    case GarminProduct::VivoActive3tChn           : debug << "VivoActive3tChn"; break;
    case GarminProduct::MarqCaptainAsia           : debug << "MarqCaptainAsia"; break;
    case GarminProduct::MarqCommanderAsia         : debug << "MarqCommanderAsia"; break;
    case GarminProduct::MarqExpeditionAsia        : debug << "MarqExpeditionAsia"; break;
    case GarminProduct::MarqAthleteAsia           : debug << "MarqAthleteAsia"; break;
    case GarminProduct::Fr45Asia                  : debug << "Fr45Asia"; break;
    case GarminProduct::Vivoactive3Daimler        : debug << "Vivoactive3Daimler"; break;
    case GarminProduct::LegacyRey                 : debug << "LegacyRey"; break;
    case GarminProduct::LegacyDarthVader          : debug << "LegacyDarthVader"; break;
    case GarminProduct::LegacyCaptainMarvel       : debug << "LegacyCaptainMarvel"; break;
    case GarminProduct::LegacyFirstAvenger        : debug << "LegacyFirstAvenger"; break;
    case GarminProduct::Fenix6sSportAsia          : debug << "Fenix6sSportAsia"; break;
    case GarminProduct::Fenix6sAsia               : debug << "Fenix6sAsia"; break;
    case GarminProduct::Fenix6SportAsia           : debug << "Fenix6SportAsia"; break;
    case GarminProduct::Fenix6Asia                : debug << "Fenix6Asia"; break;
    case GarminProduct::Fenix6xAsia               : debug << "Fenix6xAsia"; break;
    case GarminProduct::LegacyCaptainMarvelAsia   : debug << "LegacyCaptainMarvelAsia"; break;
    case GarminProduct::LegacyFirstAvengerAsia    : debug << "LegacyFirstAvengerAsia"; break;
    case GarminProduct::LegacyReyAsia             : debug << "LegacyReyAsia"; break;
    case GarminProduct::LegacyDarthVaderAsia      : debug << "LegacyDarthVaderAsia"; break;
    case GarminProduct::DescentMk2s               : debug << "DescentMk2s"; break;
    case GarminProduct::Edge130Plus               : debug << "Edge130Plus"; break;
    case GarminProduct::Edge1030Plus              : debug << "Edge1030Plus"; break;
    case GarminProduct::Rally200                  : debug << "Rally200"; break;
    case GarminProduct::Fr745                     : debug << "Fr745"; break;
    case GarminProduct::Venusq                    : debug << "Venusq"; break;
    case GarminProduct::Lily                      : debug << "Lily"; break;
    case GarminProduct::MarqAdventurer            : debug << "MarqAdventurer"; break;
    case GarminProduct::Enduro                    : debug << "Enduro"; break;
    case GarminProduct::MarqAdventurerAsia        : debug << "MarqAdventurerAsia"; break;
    case GarminProduct::Swim2Apac                 : debug << "Swim2Apac"; break;
    case GarminProduct::DescentMk2Asia            : debug << "DescentMk2Asia"; break;
    case GarminProduct::Venu2                     : debug << "Venu2"; break;
    case GarminProduct::Venu2s                    : debug << "Venu2s"; break;
    case GarminProduct::VenuDaimlerAsia           : debug << "VenuDaimlerAsia"; break;
    case GarminProduct::MarqGolfer                : debug << "MarqGolfer"; break;
    case GarminProduct::VenuDaimler               : debug << "VenuDaimler"; break;
    case GarminProduct::Fr745Asia                 : debug << "Fr745Asia"; break;
    case GarminProduct::LilyAsia                  : debug << "LilyAsia"; break;
    case GarminProduct::Edge1030PlusAsia          : debug << "Edge1030PlusAsia"; break;
    case GarminProduct::Edge130PlusAsia           : debug << "Edge130PlusAsia"; break;
    case GarminProduct::ApproachS12               : debug << "ApproachS12"; break;
    case GarminProduct::EnduroAsia                : debug << "EnduroAsia"; break;
    case GarminProduct::VenusqAsia                : debug << "VenusqAsia"; break;
    case GarminProduct::MarqGolferAsia            : debug << "MarqGolferAsia"; break;
    case GarminProduct::ApproachG12               : debug << "ApproachG12"; break;
    case GarminProduct::DescentMk2sAsia           : debug << "DescentMk2sAsia"; break;
    case GarminProduct::ApproachS42               : debug << "ApproachS42"; break;
    case GarminProduct::Venu2sAsia                : debug << "Venu2sAsia"; break;
    case GarminProduct::Venu2Asia                 : debug << "Venu2Asia"; break;
    case GarminProduct::ApproachS12Asia           : debug << "ApproachS12Asia"; break;
    case GarminProduct::ApproachG12Asia           : debug << "ApproachG12Asia"; break;
    case GarminProduct::ApproachS42Asia           : debug << "ApproachS42Asia"; break;
    case GarminProduct::Sdm4                      : debug << "Sdm4"; break;
    case GarminProduct::EdgeRemote                : debug << "EdgeRemote"; break;
    case GarminProduct::TacxTrainingAppWin        : debug << "TacxTrainingAppWin"; break;
    case GarminProduct::TacxTrainingAppMac        : debug << "TacxTrainingAppMac"; break;
    case GarminProduct::TrainingCenter            : debug << "TrainingCenter"; break;
    case GarminProduct::TacxTrainingAppAndroid    : debug << "TacxTrainingAppAndroid"; break;
    case GarminProduct::TacxTrainingAppIos        : debug << "TacxTrainingAppIos"; break;
    case GarminProduct::TacxTrainingAppLegacy     : debug << "TacxTrainingAppLegacy"; break;
    case GarminProduct::ConnectiqSimulator        : debug << "ConnectiqSimulator"; break;
    case GarminProduct::AndroidAntplusPlugin      : debug << "AndroidAntplusPlugin"; break;
    case GarminProduct::Connect                   : debug << "Connect"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const AntplusDeviceType value)
{
    switch (value) {
    case AntplusDeviceType::Antfs                  : debug << "Antfs"; break;
    case AntplusDeviceType::BikePower              : debug << "BikePower"; break;
    case AntplusDeviceType::EnvironmentSensorLegacy: debug << "EnvironmentSensorLegacy"; break;
    case AntplusDeviceType::MultiSportSpeedDistance: debug << "MultiSportSpeedDistance"; break;
    case AntplusDeviceType::Control                : debug << "Control"; break;
    case AntplusDeviceType::FitnessEquipment       : debug << "FitnessEquipment"; break;
    case AntplusDeviceType::BloodPressure          : debug << "BloodPressure"; break;
    case AntplusDeviceType::GeocacheNode           : debug << "GeocacheNode"; break;
    case AntplusDeviceType::LightElectricVehicle   : debug << "LightElectricVehicle"; break;
    case AntplusDeviceType::EnvSensor              : debug << "EnvSensor"; break;
    case AntplusDeviceType::Racquet                : debug << "Racquet"; break;
    case AntplusDeviceType::ControlHub             : debug << "ControlHub"; break;
    case AntplusDeviceType::MuscleOxygen           : debug << "MuscleOxygen"; break;
    case AntplusDeviceType::BikeLightMain          : debug << "BikeLightMain"; break;
    case AntplusDeviceType::BikeLightShared        : debug << "BikeLightShared"; break;
    case AntplusDeviceType::Exd                    : debug << "Exd"; break;
    case AntplusDeviceType::BikeRadar              : debug << "BikeRadar"; break;
    case AntplusDeviceType::BikeAero               : debug << "BikeAero"; break;
    case AntplusDeviceType::WeightScale            : debug << "WeightScale"; break;
    case AntplusDeviceType::HeartRate              : debug << "HeartRate"; break;
    case AntplusDeviceType::BikeSpeedCadence       : debug << "BikeSpeedCadence"; break;
    case AntplusDeviceType::BikeCadence            : debug << "BikeCadence"; break;
    case AntplusDeviceType::BikeSpeed              : debug << "BikeSpeed"; break;
    case AntplusDeviceType::StrideSpeedDistance    : debug << "StrideSpeedDistance"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const AntNetwork value)
{
    switch (value) {
    case AntNetwork::Public : debug << "Public"; break;
    case AntNetwork::Antplus: debug << "Antplus"; break;
    case AntNetwork::Antfs  : debug << "Antfs"; break;
    case AntNetwork::Private: debug << "Private"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const WorkoutCapabilities value)
{
    switch (value) {
    case WorkoutCapabilities::Interval        : debug << "Interval"; break;
    case WorkoutCapabilities::Custom          : debug << "Custom"; break;
    case WorkoutCapabilities::FitnessEquipment: debug << "FitnessEquipment"; break;
    case WorkoutCapabilities::Firstbeat       : debug << "Firstbeat"; break;
    case WorkoutCapabilities::NewLeaf         : debug << "NewLeaf"; break;
    case WorkoutCapabilities::Tcx             : debug << "Tcx"; break;
    case WorkoutCapabilities::Speed           : debug << "Speed"; break;
    case WorkoutCapabilities::HeartRate       : debug << "HeartRate"; break;
    case WorkoutCapabilities::Distance        : debug << "Distance"; break;
    case WorkoutCapabilities::Cadence         : debug << "Cadence"; break;
    case WorkoutCapabilities::Power           : debug << "Power"; break;
    case WorkoutCapabilities::Grade           : debug << "Grade"; break;
    case WorkoutCapabilities::Resistance      : debug << "Resistance"; break;
    case WorkoutCapabilities::Protected       : debug << "Protected"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const BatteryStatus value)
{
    switch (value) {
    case BatteryStatus::New     : debug << "New"; break;
    case BatteryStatus::Good    : debug << "Good"; break;
    case BatteryStatus::Ok      : debug << "Ok"; break;
    case BatteryStatus::Low     : debug << "Low"; break;
    case BatteryStatus::Critical: debug << "Critical"; break;
    case BatteryStatus::Charging: debug << "Charging"; break;
    case BatteryStatus::Unknown : debug << "Unknown"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const HrType value)
{
    switch (value) {
    case HrType::Normal   : debug << "Normal"; break;
    case HrType::Irregular: debug << "Irregular"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const CourseCapabilities value)
{
    switch (value) {
    case CourseCapabilities::Processed : debug << "Processed"; break;
    case CourseCapabilities::Valid     : debug << "Valid"; break;
    case CourseCapabilities::Time      : debug << "Time"; break;
    case CourseCapabilities::Distance  : debug << "Distance"; break;
    case CourseCapabilities::Position  : debug << "Position"; break;
    case CourseCapabilities::HeartRate : debug << "HeartRate"; break;
    case CourseCapabilities::Power     : debug << "Power"; break;
    case CourseCapabilities::Cadence   : debug << "Cadence"; break;
    case CourseCapabilities::Training  : debug << "Training"; break;
    case CourseCapabilities::Navigation: debug << "Navigation"; break;
    case CourseCapabilities::Bikeway   : debug << "Bikeway"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const Weight value)
{
    switch (value) {
    case Weight::Calculating: debug << "Calculating"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const WorkoutHr value)
{
    switch (value) {
    case WorkoutHr::BpmOffset: debug << "BpmOffset"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const WorkoutPower value)
{
    switch (value) {
    case WorkoutPower::WattsOffset: debug << "WattsOffset"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const BpStatus value)
{
    switch (value) {
    case BpStatus::NoError                : debug << "NoError"; break;
    case BpStatus::ErrorIncompleteData    : debug << "ErrorIncompleteData"; break;
    case BpStatus::ErrorNoMeasurement     : debug << "ErrorNoMeasurement"; break;
    case BpStatus::ErrorDataOutOfRange    : debug << "ErrorDataOutOfRange"; break;
    case BpStatus::ErrorIrregularHeartRate: debug << "ErrorIrregularHeartRate"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const UserLocalId value)
{
    switch (value) {
    case UserLocalId::LocalMin     : debug << "LocalMin"; break;
    case UserLocalId::LocalMax     : debug << "LocalMax"; break;
    case UserLocalId::StationaryMin: debug << "StationaryMin"; break;
    case UserLocalId::StationaryMax: debug << "StationaryMax"; break;
    case UserLocalId::PortableMin  : debug << "PortableMin"; break;
    case UserLocalId::PortableMax  : debug << "PortableMax"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const SwimStroke value)
{
    switch (value) {
    case SwimStroke::Freestyle   : debug << "Freestyle"; break;
    case SwimStroke::Backstroke  : debug << "Backstroke"; break;
    case SwimStroke::Breaststroke: debug << "Breaststroke"; break;
    case SwimStroke::Butterfly   : debug << "Butterfly"; break;
    case SwimStroke::Drill       : debug << "Drill"; break;
    case SwimStroke::Mixed       : debug << "Mixed"; break;
    case SwimStroke::Im          : debug << "Im"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const ActivityType value)
{
    switch (value) {
    case ActivityType::Generic         : debug << "Generic"; break;
    case ActivityType::Running         : debug << "Running"; break;
    case ActivityType::Cycling         : debug << "Cycling"; break;
    case ActivityType::Transition      : debug << "Transition"; break;
    case ActivityType::FitnessEquipment: debug << "FitnessEquipment"; break;
    case ActivityType::Swimming        : debug << "Swimming"; break;
    case ActivityType::Walking         : debug << "Walking"; break;
    case ActivityType::Sedentary       : debug << "Sedentary"; break;
    case ActivityType::All             : debug << "All"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const ActivitySubtype value)
{
    switch (value) {
    case ActivitySubtype::Generic      : debug << "Generic"; break;
    case ActivitySubtype::Treadmill    : debug << "Treadmill"; break;
    case ActivitySubtype::Street       : debug << "Street"; break;
    case ActivitySubtype::Trail        : debug << "Trail"; break;
    case ActivitySubtype::Track        : debug << "Track"; break;
    case ActivitySubtype::Spin         : debug << "Spin"; break;
    case ActivitySubtype::IndoorCycling: debug << "IndoorCycling"; break;
    case ActivitySubtype::Road         : debug << "Road"; break;
    case ActivitySubtype::Mountain     : debug << "Mountain"; break;
    case ActivitySubtype::Downhill     : debug << "Downhill"; break;
    case ActivitySubtype::Recumbent    : debug << "Recumbent"; break;
    case ActivitySubtype::Cyclocross   : debug << "Cyclocross"; break;
    case ActivitySubtype::HandCycling  : debug << "HandCycling"; break;
    case ActivitySubtype::TrackCycling : debug << "TrackCycling"; break;
    case ActivitySubtype::IndoorRowing : debug << "IndoorRowing"; break;
    case ActivitySubtype::Elliptical   : debug << "Elliptical"; break;
    case ActivitySubtype::StairClimbing: debug << "StairClimbing"; break;
    case ActivitySubtype::LapSwimming  : debug << "LapSwimming"; break;
    case ActivitySubtype::OpenWater    : debug << "OpenWater"; break;
    case ActivitySubtype::All          : debug << "All"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const ActivityLevel value)
{
    switch (value) {
    case ActivityLevel::Low   : debug << "Low"; break;
    case ActivityLevel::Medium: debug << "Medium"; break;
    case ActivityLevel::High  : debug << "High"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const Side value)
{
    switch (value) {
    case Side::Right: debug << "Right"; break;
    case Side::Left : debug << "Left"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const LeftRightBalance value)
{
    switch (value) {
    case LeftRightBalance::Mask : debug << "Mask"; break;
    case LeftRightBalance::Right: debug << "Right"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const LeftRightBalance100 value)
{
    switch (value) {
    case LeftRightBalance100::Mask : debug << "Mask"; break;
    case LeftRightBalance100::Right: debug << "Right"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const LengthType value)
{
    switch (value) {
    case LengthType::Idle  : debug << "Idle"; break;
    case LengthType::Active: debug << "Active"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const DayOfWeek value)
{
    switch (value) {
    case DayOfWeek::Sunday   : debug << "Sunday"; break;
    case DayOfWeek::Monday   : debug << "Monday"; break;
    case DayOfWeek::Tuesday  : debug << "Tuesday"; break;
    case DayOfWeek::Wednesday: debug << "Wednesday"; break;
    case DayOfWeek::Thursday : debug << "Thursday"; break;
    case DayOfWeek::Friday   : debug << "Friday"; break;
    case DayOfWeek::Saturday : debug << "Saturday"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const ConnectivityCapabilities value)
{
    switch (value) {
    case ConnectivityCapabilities::Bluetooth                      : debug << "Bluetooth"; break;
    case ConnectivityCapabilities::BluetoothLe                    : debug << "BluetoothLe"; break;
    case ConnectivityCapabilities::Ant                            : debug << "Ant"; break;
    case ConnectivityCapabilities::ActivityUpload                 : debug << "ActivityUpload"; break;
    case ConnectivityCapabilities::CourseDownload                 : debug << "CourseDownload"; break;
    case ConnectivityCapabilities::WorkoutDownload                : debug << "WorkoutDownload"; break;
    case ConnectivityCapabilities::LiveTrack                      : debug << "LiveTrack"; break;
    case ConnectivityCapabilities::WeatherConditions              : debug << "WeatherConditions"; break;
    case ConnectivityCapabilities::WeatherAlerts                  : debug << "WeatherAlerts"; break;
    case ConnectivityCapabilities::GpsEphemerisDownload           : debug << "GpsEphemerisDownload"; break;
    case ConnectivityCapabilities::ExplicitArchive                : debug << "ExplicitArchive"; break;
    case ConnectivityCapabilities::SetupIncomplete                : debug << "SetupIncomplete"; break;
    case ConnectivityCapabilities::ContinueSyncAfterSoftwareUpdate: debug << "ContinueSyncAfterSoftwareUpdate"; break;
    case ConnectivityCapabilities::ConnectIqAppDownload           : debug << "ConnectIqAppDownload"; break;
    case ConnectivityCapabilities::GolfCourseDownload             : debug << "GolfCourseDownload"; break;
    case ConnectivityCapabilities::DeviceInitiatesSync            : debug << "DeviceInitiatesSync"; break;
    case ConnectivityCapabilities::ConnectIqWatchAppDownload      : debug << "ConnectIqWatchAppDownload"; break;
    case ConnectivityCapabilities::ConnectIqWidgetDownload        : debug << "ConnectIqWidgetDownload"; break;
    case ConnectivityCapabilities::ConnectIqWatchFaceDownload     : debug << "ConnectIqWatchFaceDownload"; break;
    case ConnectivityCapabilities::ConnectIqDataFieldDownload     : debug << "ConnectIqDataFieldDownload"; break;
    case ConnectivityCapabilities::ConnectIqAppManagment          : debug << "ConnectIqAppManagment"; break;
    case ConnectivityCapabilities::SwingSensor                    : debug << "SwingSensor"; break;
    case ConnectivityCapabilities::SwingSensorRemote              : debug << "SwingSensorRemote"; break;
    case ConnectivityCapabilities::IncidentDetection              : debug << "IncidentDetection"; break;
    case ConnectivityCapabilities::AudioPrompts                   : debug << "AudioPrompts"; break;
    case ConnectivityCapabilities::WifiVerification               : debug << "WifiVerification"; break;
    case ConnectivityCapabilities::TrueUp                         : debug << "TrueUp"; break;
    case ConnectivityCapabilities::FindMyWatch                    : debug << "FindMyWatch"; break;
    case ConnectivityCapabilities::RemoteManualSync               : debug << "RemoteManualSync"; break;
    case ConnectivityCapabilities::LiveTrackAutoStart             : debug << "LiveTrackAutoStart"; break;
    case ConnectivityCapabilities::LiveTrackMessaging             : debug << "LiveTrackMessaging"; break;
    case ConnectivityCapabilities::InstantInput                   : debug << "InstantInput"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const WeatherReport value)
{
    switch (value) {
    case WeatherReport::Current       : debug << "Current"; break;
    case WeatherReport::HourlyForecast: debug << "HourlyForecast"; break;
    case WeatherReport::DailyForecast : debug << "DailyForecast"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const WeatherStatus value)
{
    switch (value) {
    case WeatherStatus::Clear                 : debug << "Clear"; break;
    case WeatherStatus::PartlyCloudy          : debug << "PartlyCloudy"; break;
    case WeatherStatus::MostlyCloudy          : debug << "MostlyCloudy"; break;
    case WeatherStatus::Rain                  : debug << "Rain"; break;
    case WeatherStatus::Snow                  : debug << "Snow"; break;
    case WeatherStatus::Windy                 : debug << "Windy"; break;
    case WeatherStatus::Thunderstorms         : debug << "Thunderstorms"; break;
    case WeatherStatus::WintryMix             : debug << "WintryMix"; break;
    case WeatherStatus::Fog                   : debug << "Fog"; break;
    case WeatherStatus::Hazy                  : debug << "Hazy"; break;
    case WeatherStatus::Hail                  : debug << "Hail"; break;
    case WeatherStatus::ScatteredShowers      : debug << "ScatteredShowers"; break;
    case WeatherStatus::ScatteredThunderstorms: debug << "ScatteredThunderstorms"; break;
    case WeatherStatus::UnknownPrecipitation  : debug << "UnknownPrecipitation"; break;
    case WeatherStatus::LightRain             : debug << "LightRain"; break;
    case WeatherStatus::HeavyRain             : debug << "HeavyRain"; break;
    case WeatherStatus::LightSnow             : debug << "LightSnow"; break;
    case WeatherStatus::HeavySnow             : debug << "HeavySnow"; break;
    case WeatherStatus::LightRainSnow         : debug << "LightRainSnow"; break;
    case WeatherStatus::HeavyRainSnow         : debug << "HeavyRainSnow"; break;
    case WeatherStatus::Cloudy                : debug << "Cloudy"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const WeatherSeverity value)
{
    switch (value) {
    case WeatherSeverity::Unknown  : debug << "Unknown"; break;
    case WeatherSeverity::Warning  : debug << "Warning"; break;
    case WeatherSeverity::Watch    : debug << "Watch"; break;
    case WeatherSeverity::Advisory : debug << "Advisory"; break;
    case WeatherSeverity::Statement: debug << "Statement"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const WeatherSevereType value)
{
    switch (value) {
    case WeatherSevereType::Unspecified            : debug << "Unspecified"; break;
    case WeatherSevereType::Tornado                : debug << "Tornado"; break;
    case WeatherSevereType::Tsunami                : debug << "Tsunami"; break;
    case WeatherSevereType::Hurricane              : debug << "Hurricane"; break;
    case WeatherSevereType::ExtremeWind            : debug << "ExtremeWind"; break;
    case WeatherSevereType::Typhoon                : debug << "Typhoon"; break;
    case WeatherSevereType::InlandHurricane        : debug << "InlandHurricane"; break;
    case WeatherSevereType::HurricaneForceWind     : debug << "HurricaneForceWind"; break;
    case WeatherSevereType::Waterspout             : debug << "Waterspout"; break;
    case WeatherSevereType::SevereThunderstorm     : debug << "SevereThunderstorm"; break;
    case WeatherSevereType::WreckhouseWinds        : debug << "WreckhouseWinds"; break;
    case WeatherSevereType::LesSuetesWind          : debug << "LesSuetesWind"; break;
    case WeatherSevereType::Avalanche              : debug << "Avalanche"; break;
    case WeatherSevereType::FlashFlood             : debug << "FlashFlood"; break;
    case WeatherSevereType::TropicalStorm          : debug << "TropicalStorm"; break;
    case WeatherSevereType::InlandTropicalStorm    : debug << "InlandTropicalStorm"; break;
    case WeatherSevereType::Blizzard               : debug << "Blizzard"; break;
    case WeatherSevereType::IceStorm               : debug << "IceStorm"; break;
    case WeatherSevereType::FreezingRain           : debug << "FreezingRain"; break;
    case WeatherSevereType::DebrisFlow             : debug << "DebrisFlow"; break;
    case WeatherSevereType::FlashFreeze            : debug << "FlashFreeze"; break;
    case WeatherSevereType::DustStorm              : debug << "DustStorm"; break;
    case WeatherSevereType::HighWind               : debug << "HighWind"; break;
    case WeatherSevereType::WinterStorm            : debug << "WinterStorm"; break;
    case WeatherSevereType::HeavyFreezingSpray     : debug << "HeavyFreezingSpray"; break;
    case WeatherSevereType::ExtremeCold            : debug << "ExtremeCold"; break;
    case WeatherSevereType::WindChill              : debug << "WindChill"; break;
    case WeatherSevereType::ColdWave               : debug << "ColdWave"; break;
    case WeatherSevereType::HeavySnowAlert         : debug << "HeavySnowAlert"; break;
    case WeatherSevereType::LakeEffectBlowingSnow  : debug << "LakeEffectBlowingSnow"; break;
    case WeatherSevereType::SnowSquall             : debug << "SnowSquall"; break;
    case WeatherSevereType::LakeEffectSnow         : debug << "LakeEffectSnow"; break;
    case WeatherSevereType::WinterWeather          : debug << "WinterWeather"; break;
    case WeatherSevereType::Sleet                  : debug << "Sleet"; break;
    case WeatherSevereType::Snowfall               : debug << "Snowfall"; break;
    case WeatherSevereType::SnowAndBlowingSnow     : debug << "SnowAndBlowingSnow"; break;
    case WeatherSevereType::BlowingSnow            : debug << "BlowingSnow"; break;
    case WeatherSevereType::SnowAlert              : debug << "SnowAlert"; break;
    case WeatherSevereType::ArcticOutflow          : debug << "ArcticOutflow"; break;
    case WeatherSevereType::FreezingDrizzle        : debug << "FreezingDrizzle"; break;
    case WeatherSevereType::Storm                  : debug << "Storm"; break;
    case WeatherSevereType::StormSurge             : debug << "StormSurge"; break;
    case WeatherSevereType::Rainfall               : debug << "Rainfall"; break;
    case WeatherSevereType::ArealFlood             : debug << "ArealFlood"; break;
    case WeatherSevereType::CoastalFlood           : debug << "CoastalFlood"; break;
    case WeatherSevereType::LakeshoreFlood         : debug << "LakeshoreFlood"; break;
    case WeatherSevereType::ExcessiveHeat          : debug << "ExcessiveHeat"; break;
    case WeatherSevereType::Heat                   : debug << "Heat"; break;
    case WeatherSevereType::Weather                : debug << "Weather"; break;
    case WeatherSevereType::HighHeatAndHumidity    : debug << "HighHeatAndHumidity"; break;
    case WeatherSevereType::HumidexAndHealth       : debug << "HumidexAndHealth"; break;
    case WeatherSevereType::Humidex                : debug << "Humidex"; break;
    case WeatherSevereType::Gale                   : debug << "Gale"; break;
    case WeatherSevereType::FreezingSpray          : debug << "FreezingSpray"; break;
    case WeatherSevereType::SpecialMarine          : debug << "SpecialMarine"; break;
    case WeatherSevereType::Squall                 : debug << "Squall"; break;
    case WeatherSevereType::StrongWind             : debug << "StrongWind"; break;
    case WeatherSevereType::LakeWind               : debug << "LakeWind"; break;
    case WeatherSevereType::MarineWeather          : debug << "MarineWeather"; break;
    case WeatherSevereType::Wind                   : debug << "Wind"; break;
    case WeatherSevereType::SmallCraftHazardousSeas: debug << "SmallCraftHazardousSeas"; break;
    case WeatherSevereType::HazardousSeas          : debug << "HazardousSeas"; break;
    case WeatherSevereType::SmallCraft             : debug << "SmallCraft"; break;
    case WeatherSevereType::SmallCraftWinds        : debug << "SmallCraftWinds"; break;
    case WeatherSevereType::SmallCraftRoughBar     : debug << "SmallCraftRoughBar"; break;
    case WeatherSevereType::HighWaterLevel         : debug << "HighWaterLevel"; break;
    case WeatherSevereType::Ashfall                : debug << "Ashfall"; break;
    case WeatherSevereType::FreezingFog            : debug << "FreezingFog"; break;
    case WeatherSevereType::DenseFog               : debug << "DenseFog"; break;
    case WeatherSevereType::DenseSmoke             : debug << "DenseSmoke"; break;
    case WeatherSevereType::BlowingDust            : debug << "BlowingDust"; break;
    case WeatherSevereType::HardFreeze             : debug << "HardFreeze"; break;
    case WeatherSevereType::Freeze                 : debug << "Freeze"; break;
    case WeatherSevereType::Frost                  : debug << "Frost"; break;
    case WeatherSevereType::FireWeather            : debug << "FireWeather"; break;
    case WeatherSevereType::Flood                  : debug << "Flood"; break;
    case WeatherSevereType::RipTide                : debug << "RipTide"; break;
    case WeatherSevereType::HighSurf               : debug << "HighSurf"; break;
    case WeatherSevereType::Smog                   : debug << "Smog"; break;
    case WeatherSevereType::AirQuality             : debug << "AirQuality"; break;
    case WeatherSevereType::BriskWind              : debug << "BriskWind"; break;
    case WeatherSevereType::AirStagnation          : debug << "AirStagnation"; break;
    case WeatherSevereType::LowWater               : debug << "LowWater"; break;
    case WeatherSevereType::Hydrological           : debug << "Hydrological"; break;
    case WeatherSevereType::SpecialWeather         : debug << "SpecialWeather"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const TimeIntoDay value)
{
    switch (value) {
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const LocaltimeIntoDay value)
{
    switch (value) {
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const StrokeType value)
{
    switch (value) {
    case StrokeType::NoEvent : debug << "NoEvent"; break;
    case StrokeType::Other   : debug << "Other"; break;
    case StrokeType::Serve   : debug << "Serve"; break;
    case StrokeType::Forehand: debug << "Forehand"; break;
    case StrokeType::Backhand: debug << "Backhand"; break;
    case StrokeType::Smash   : debug << "Smash"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const BodyLocation value)
{
    switch (value) {
    case BodyLocation::LeftLeg              : debug << "LeftLeg"; break;
    case BodyLocation::LeftCalf             : debug << "LeftCalf"; break;
    case BodyLocation::LeftShin             : debug << "LeftShin"; break;
    case BodyLocation::LeftHamstring        : debug << "LeftHamstring"; break;
    case BodyLocation::LeftQuad             : debug << "LeftQuad"; break;
    case BodyLocation::LeftGlute            : debug << "LeftGlute"; break;
    case BodyLocation::RightLeg             : debug << "RightLeg"; break;
    case BodyLocation::RightCalf            : debug << "RightCalf"; break;
    case BodyLocation::RightShin            : debug << "RightShin"; break;
    case BodyLocation::RightHamstring       : debug << "RightHamstring"; break;
    case BodyLocation::RightQuad            : debug << "RightQuad"; break;
    case BodyLocation::RightGlute           : debug << "RightGlute"; break;
    case BodyLocation::TorsoBack            : debug << "TorsoBack"; break;
    case BodyLocation::LeftLowerBack        : debug << "LeftLowerBack"; break;
    case BodyLocation::LeftUpperBack        : debug << "LeftUpperBack"; break;
    case BodyLocation::RightLowerBack       : debug << "RightLowerBack"; break;
    case BodyLocation::RightUpperBack       : debug << "RightUpperBack"; break;
    case BodyLocation::TorsoFront           : debug << "TorsoFront"; break;
    case BodyLocation::LeftAbdomen          : debug << "LeftAbdomen"; break;
    case BodyLocation::LeftChest            : debug << "LeftChest"; break;
    case BodyLocation::RightAbdomen         : debug << "RightAbdomen"; break;
    case BodyLocation::RightChest           : debug << "RightChest"; break;
    case BodyLocation::LeftArm              : debug << "LeftArm"; break;
    case BodyLocation::LeftShoulder         : debug << "LeftShoulder"; break;
    case BodyLocation::LeftBicep            : debug << "LeftBicep"; break;
    case BodyLocation::LeftTricep           : debug << "LeftTricep"; break;
    case BodyLocation::LeftBrachioradialis  : debug << "LeftBrachioradialis"; break;
    case BodyLocation::LeftForearmExtensors : debug << "LeftForearmExtensors"; break;
    case BodyLocation::RightArm             : debug << "RightArm"; break;
    case BodyLocation::RightShoulder        : debug << "RightShoulder"; break;
    case BodyLocation::RightBicep           : debug << "RightBicep"; break;
    case BodyLocation::RightTricep          : debug << "RightTricep"; break;
    case BodyLocation::RightBrachioradialis : debug << "RightBrachioradialis"; break;
    case BodyLocation::RightForearmExtensors: debug << "RightForearmExtensors"; break;
    case BodyLocation::Neck                 : debug << "Neck"; break;
    case BodyLocation::Throat               : debug << "Throat"; break;
    case BodyLocation::WaistMidBack         : debug << "WaistMidBack"; break;
    case BodyLocation::WaistFront           : debug << "WaistFront"; break;
    case BodyLocation::WaistLeft            : debug << "WaistLeft"; break;
    case BodyLocation::WaistRight           : debug << "WaistRight"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const SegmentLapStatus value)
{
    switch (value) {
    case SegmentLapStatus::End : debug << "End"; break;
    case SegmentLapStatus::Fail: debug << "Fail"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const SegmentLeaderboardType value)
{
    switch (value) {
    case SegmentLeaderboardType::Overall     : debug << "Overall"; break;
    case SegmentLeaderboardType::PersonalBest: debug << "PersonalBest"; break;
    case SegmentLeaderboardType::Connections : debug << "Connections"; break;
    case SegmentLeaderboardType::Group       : debug << "Group"; break;
    case SegmentLeaderboardType::Challenger  : debug << "Challenger"; break;
    case SegmentLeaderboardType::Kom         : debug << "Kom"; break;
    case SegmentLeaderboardType::Qom         : debug << "Qom"; break;
    case SegmentLeaderboardType::Pr          : debug << "Pr"; break;
    case SegmentLeaderboardType::Goal        : debug << "Goal"; break;
    case SegmentLeaderboardType::Rival       : debug << "Rival"; break;
    case SegmentLeaderboardType::ClubLeader  : debug << "ClubLeader"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const SegmentDeleteStatus value)
{
    switch (value) {
    case SegmentDeleteStatus::DoNotDelete: debug << "DoNotDelete"; break;
    case SegmentDeleteStatus::DeleteOne  : debug << "DeleteOne"; break;
    case SegmentDeleteStatus::DeleteAll  : debug << "DeleteAll"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const SegmentSelectionType value)
{
    switch (value) {
    case SegmentSelectionType::Starred  : debug << "Starred"; break;
    case SegmentSelectionType::Suggested: debug << "Suggested"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const SourceType value)
{
    switch (value) {
    case SourceType::Ant               : debug << "Ant"; break;
    case SourceType::Antplus           : debug << "Antplus"; break;
    case SourceType::Bluetooth         : debug << "Bluetooth"; break;
    case SourceType::BluetoothLowEnergy: debug << "BluetoothLowEnergy"; break;
    case SourceType::Wifi              : debug << "Wifi"; break;
    case SourceType::Local             : debug << "Local"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const LocalDeviceType value)
{
    switch (value) {
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const DisplayOrientation value)
{
    switch (value) {
    case DisplayOrientation::Auto            : debug << "Auto"; break;
    case DisplayOrientation::Portrait        : debug << "Portrait"; break;
    case DisplayOrientation::Landscape       : debug << "Landscape"; break;
    case DisplayOrientation::PortraitFlipped : debug << "PortraitFlipped"; break;
    case DisplayOrientation::LandscapeFlipped: debug << "LandscapeFlipped"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const WorkoutEquipment value)
{
    switch (value) {
    case WorkoutEquipment::None         : debug << "None"; break;
    case WorkoutEquipment::SwimFins     : debug << "SwimFins"; break;
    case WorkoutEquipment::SwimKickboard: debug << "SwimKickboard"; break;
    case WorkoutEquipment::SwimPaddles  : debug << "SwimPaddles"; break;
    case WorkoutEquipment::SwimPullBuoy : debug << "SwimPullBuoy"; break;
    case WorkoutEquipment::SwimSnorkel  : debug << "SwimSnorkel"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const WatchfaceMode value)
{
    switch (value) {
    case WatchfaceMode::Digital  : debug << "Digital"; break;
    case WatchfaceMode::Analog   : debug << "Analog"; break;
    case WatchfaceMode::ConnectIq: debug << "ConnectIq"; break;
    case WatchfaceMode::Disabled : debug << "Disabled"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const DigitalWatchfaceLayout value)
{
    switch (value) {
    case DigitalWatchfaceLayout::Traditional: debug << "Traditional"; break;
    case DigitalWatchfaceLayout::Modern     : debug << "Modern"; break;
    case DigitalWatchfaceLayout::Bold       : debug << "Bold"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const AnalogWatchfaceLayout value)
{
    switch (value) {
    case AnalogWatchfaceLayout::Minimal    : debug << "Minimal"; break;
    case AnalogWatchfaceLayout::Traditional: debug << "Traditional"; break;
    case AnalogWatchfaceLayout::Modern     : debug << "Modern"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const RiderPositionType value)
{
    switch (value) {
    case RiderPositionType::Seated              : debug << "Seated"; break;
    case RiderPositionType::Standing            : debug << "Standing"; break;
    case RiderPositionType::TransitionToSeated  : debug << "TransitionToSeated"; break;
    case RiderPositionType::TransitionToStanding: debug << "TransitionToStanding"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const PowerPhaseType value)
{
    switch (value) {
    case PowerPhaseType::PowerPhaseStartAngle: debug << "PowerPhaseStartAngle"; break;
    case PowerPhaseType::PowerPhaseEndAngle  : debug << "PowerPhaseEndAngle"; break;
    case PowerPhaseType::PowerPhaseArcLength : debug << "PowerPhaseArcLength"; break;
    case PowerPhaseType::PowerPhaseCenter    : debug << "PowerPhaseCenter"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const CameraEventType value)
{
    switch (value) {
    case CameraEventType::VideoStart                 : debug << "VideoStart"; break;
    case CameraEventType::VideoSplit                 : debug << "VideoSplit"; break;
    case CameraEventType::VideoEnd                   : debug << "VideoEnd"; break;
    case CameraEventType::PhotoTaken                 : debug << "PhotoTaken"; break;
    case CameraEventType::VideoSecondStreamStart     : debug << "VideoSecondStreamStart"; break;
    case CameraEventType::VideoSecondStreamSplit     : debug << "VideoSecondStreamSplit"; break;
    case CameraEventType::VideoSecondStreamEnd       : debug << "VideoSecondStreamEnd"; break;
    case CameraEventType::VideoSplitStart            : debug << "VideoSplitStart"; break;
    case CameraEventType::VideoSecondStreamSplitStart: debug << "VideoSecondStreamSplitStart"; break;
    case CameraEventType::VideoPause                 : debug << "VideoPause"; break;
    case CameraEventType::VideoSecondStreamPause     : debug << "VideoSecondStreamPause"; break;
    case CameraEventType::VideoResume                : debug << "VideoResume"; break;
    case CameraEventType::VideoSecondStreamResume    : debug << "VideoSecondStreamResume"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const SensorType value)
{
    switch (value) {
    case SensorType::Accelerometer: debug << "Accelerometer"; break;
    case SensorType::Gyroscope    : debug << "Gyroscope"; break;
    case SensorType::Compass      : debug << "Compass"; break;
    case SensorType::Barometer    : debug << "Barometer"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const BikeLightNetworkConfigType value)
{
    switch (value) {
    case BikeLightNetworkConfigType::Auto          : debug << "Auto"; break;
    case BikeLightNetworkConfigType::Individual    : debug << "Individual"; break;
    case BikeLightNetworkConfigType::HighVisibility: debug << "HighVisibility"; break;
    case BikeLightNetworkConfigType::Trail         : debug << "Trail"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const CommTimeoutType value)
{
    switch (value) {
    case CommTimeoutType::WildcardPairingTimeout: debug << "WildcardPairingTimeout"; break;
    case CommTimeoutType::PairingTimeout        : debug << "PairingTimeout"; break;
    case CommTimeoutType::ConnectionLost        : debug << "ConnectionLost"; break;
    case CommTimeoutType::ConnectionTimeout     : debug << "ConnectionTimeout"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const CameraOrientationType value)
{
    switch (value) {
    case CameraOrientationType::CameraOrientation0  : debug << "CameraOrientation0"; break;
    case CameraOrientationType::CameraOrientation90 : debug << "CameraOrientation90"; break;
    case CameraOrientationType::CameraOrientation180: debug << "CameraOrientation180"; break;
    case CameraOrientationType::CameraOrientation270: debug << "CameraOrientation270"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const AttitudeStage value)
{
    switch (value) {
    case AttitudeStage::Failed  : debug << "Failed"; break;
    case AttitudeStage::Aligning: debug << "Aligning"; break;
    case AttitudeStage::Degraded: debug << "Degraded"; break;
    case AttitudeStage::Valid   : debug << "Valid"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const AttitudeValidity value)
{
    switch (value) {
    case AttitudeValidity::TrackAngleHeadingValid: debug << "TrackAngleHeadingValid"; break;
    case AttitudeValidity::PitchValid            : debug << "PitchValid"; break;
    case AttitudeValidity::RollValid             : debug << "RollValid"; break;
    case AttitudeValidity::LateralBodyAccelValid : debug << "LateralBodyAccelValid"; break;
    case AttitudeValidity::NormalBodyAccelValid  : debug << "NormalBodyAccelValid"; break;
    case AttitudeValidity::TurnRateValid         : debug << "TurnRateValid"; break;
    case AttitudeValidity::HwFail                : debug << "HwFail"; break;
    case AttitudeValidity::MagInvalid            : debug << "MagInvalid"; break;
    case AttitudeValidity::NoGps                 : debug << "NoGps"; break;
    case AttitudeValidity::GpsInvalid            : debug << "GpsInvalid"; break;
    case AttitudeValidity::SolutionCoasting      : debug << "SolutionCoasting"; break;
    case AttitudeValidity::TrueTrackAngle        : debug << "TrueTrackAngle"; break;
    case AttitudeValidity::MagneticHeading       : debug << "MagneticHeading"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const AutoSyncFrequency value)
{
    switch (value) {
    case AutoSyncFrequency::Never       : debug << "Never"; break;
    case AutoSyncFrequency::Occasionally: debug << "Occasionally"; break;
    case AutoSyncFrequency::Frequent    : debug << "Frequent"; break;
    case AutoSyncFrequency::OnceADay    : debug << "OnceADay"; break;
    case AutoSyncFrequency::Remote      : debug << "Remote"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const ExdLayout value)
{
    switch (value) {
    case ExdLayout::FullScreen               : debug << "FullScreen"; break;
    case ExdLayout::HalfVertical             : debug << "HalfVertical"; break;
    case ExdLayout::HalfHorizontal           : debug << "HalfHorizontal"; break;
    case ExdLayout::HalfVerticalRightSplit   : debug << "HalfVerticalRightSplit"; break;
    case ExdLayout::HalfHorizontalBottomSplit: debug << "HalfHorizontalBottomSplit"; break;
    case ExdLayout::FullQuarterSplit         : debug << "FullQuarterSplit"; break;
    case ExdLayout::HalfVerticalLeftSplit    : debug << "HalfVerticalLeftSplit"; break;
    case ExdLayout::HalfHorizontalTopSplit   : debug << "HalfHorizontalTopSplit"; break;
    case ExdLayout::Dynamic                  : debug << "Dynamic"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const ExdDisplayType value)
{
    switch (value) {
    case ExdDisplayType::Numerical        : debug << "Numerical"; break;
    case ExdDisplayType::Simple           : debug << "Simple"; break;
    case ExdDisplayType::Graph            : debug << "Graph"; break;
    case ExdDisplayType::Bar              : debug << "Bar"; break;
    case ExdDisplayType::CircleGraph      : debug << "CircleGraph"; break;
    case ExdDisplayType::VirtualPartner   : debug << "VirtualPartner"; break;
    case ExdDisplayType::Balance          : debug << "Balance"; break;
    case ExdDisplayType::StringList       : debug << "StringList"; break;
    case ExdDisplayType::String           : debug << "String"; break;
    case ExdDisplayType::SimpleDynamicIcon: debug << "SimpleDynamicIcon"; break;
    case ExdDisplayType::Gauge            : debug << "Gauge"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const ExdDataUnits value)
{
    switch (value) {
    case ExdDataUnits::NoUnits                       : debug << "NoUnits"; break;
    case ExdDataUnits::Laps                          : debug << "Laps"; break;
    case ExdDataUnits::MilesPerHour                  : debug << "MilesPerHour"; break;
    case ExdDataUnits::KilometersPerHour             : debug << "KilometersPerHour"; break;
    case ExdDataUnits::FeetPerHour                   : debug << "FeetPerHour"; break;
    case ExdDataUnits::MetersPerHour                 : debug << "MetersPerHour"; break;
    case ExdDataUnits::DegreesCelsius                : debug << "DegreesCelsius"; break;
    case ExdDataUnits::DegreesFarenheit              : debug << "DegreesFarenheit"; break;
    case ExdDataUnits::Zone                          : debug << "Zone"; break;
    case ExdDataUnits::Gear                          : debug << "Gear"; break;
    case ExdDataUnits::Rpm                           : debug << "Rpm"; break;
    case ExdDataUnits::Bpm                           : debug << "Bpm"; break;
    case ExdDataUnits::Degrees                       : debug << "Degrees"; break;
    case ExdDataUnits::Millimeters                   : debug << "Millimeters"; break;
    case ExdDataUnits::Meters                        : debug << "Meters"; break;
    case ExdDataUnits::Kilometers                    : debug << "Kilometers"; break;
    case ExdDataUnits::Feet                          : debug << "Feet"; break;
    case ExdDataUnits::Yards                         : debug << "Yards"; break;
    case ExdDataUnits::Kilofeet                      : debug << "Kilofeet"; break;
    case ExdDataUnits::Miles                         : debug << "Miles"; break;
    case ExdDataUnits::Time                          : debug << "Time"; break;
    case ExdDataUnits::EnumTurnType                  : debug << "EnumTurnType"; break;
    case ExdDataUnits::Percent                       : debug << "Percent"; break;
    case ExdDataUnits::Watts                         : debug << "Watts"; break;
    case ExdDataUnits::WattsPerKilogram              : debug << "WattsPerKilogram"; break;
    case ExdDataUnits::EnumBatteryStatus             : debug << "EnumBatteryStatus"; break;
    case ExdDataUnits::EnumBikeLightBeamAngleMode    : debug << "EnumBikeLightBeamAngleMode"; break;
    case ExdDataUnits::EnumBikeLightBatteryStatus    : debug << "EnumBikeLightBatteryStatus"; break;
    case ExdDataUnits::EnumBikeLightNetworkConfigType: debug << "EnumBikeLightNetworkConfigType"; break;
    case ExdDataUnits::Lights                        : debug << "Lights"; break;
    case ExdDataUnits::Seconds                       : debug << "Seconds"; break;
    case ExdDataUnits::Minutes                       : debug << "Minutes"; break;
    case ExdDataUnits::Hours                         : debug << "Hours"; break;
    case ExdDataUnits::Calories                      : debug << "Calories"; break;
    case ExdDataUnits::Kilojoules                    : debug << "Kilojoules"; break;
    case ExdDataUnits::Milliseconds                  : debug << "Milliseconds"; break;
    case ExdDataUnits::SecondPerMile                 : debug << "SecondPerMile"; break;
    case ExdDataUnits::SecondPerKilometer            : debug << "SecondPerKilometer"; break;
    case ExdDataUnits::Centimeter                    : debug << "Centimeter"; break;
    case ExdDataUnits::EnumCoursePoint               : debug << "EnumCoursePoint"; break;
    case ExdDataUnits::Bradians                      : debug << "Bradians"; break;
    case ExdDataUnits::EnumSport                     : debug << "EnumSport"; break;
    case ExdDataUnits::InchesHg                      : debug << "InchesHg"; break;
    case ExdDataUnits::MmHg                          : debug << "MmHg"; break;
    case ExdDataUnits::Mbars                         : debug << "Mbars"; break;
    case ExdDataUnits::HectoPascals                  : debug << "HectoPascals"; break;
    case ExdDataUnits::FeetPerMin                    : debug << "FeetPerMin"; break;
    case ExdDataUnits::MetersPerMin                  : debug << "MetersPerMin"; break;
    case ExdDataUnits::MetersPerSec                  : debug << "MetersPerSec"; break;
    case ExdDataUnits::EightCardinal                 : debug << "EightCardinal"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const ExdQualifiers value)
{
    switch (value) {
    case ExdQualifiers::NoQualifier             : debug << "NoQualifier"; break;
    case ExdQualifiers::Instantaneous           : debug << "Instantaneous"; break;
    case ExdQualifiers::Average                 : debug << "Average"; break;
    case ExdQualifiers::Lap                     : debug << "Lap"; break;
    case ExdQualifiers::Maximum                 : debug << "Maximum"; break;
    case ExdQualifiers::MaximumAverage          : debug << "MaximumAverage"; break;
    case ExdQualifiers::MaximumLap              : debug << "MaximumLap"; break;
    case ExdQualifiers::LastLap                 : debug << "LastLap"; break;
    case ExdQualifiers::AverageLap              : debug << "AverageLap"; break;
    case ExdQualifiers::ToDestination           : debug << "ToDestination"; break;
    case ExdQualifiers::ToGo                    : debug << "ToGo"; break;
    case ExdQualifiers::ToNext                  : debug << "ToNext"; break;
    case ExdQualifiers::NextCoursePoint         : debug << "NextCoursePoint"; break;
    case ExdQualifiers::Total                   : debug << "Total"; break;
    case ExdQualifiers::ThreeSecondAverage      : debug << "ThreeSecondAverage"; break;
    case ExdQualifiers::TenSecondAverage        : debug << "TenSecondAverage"; break;
    case ExdQualifiers::ThirtySecondAverage     : debug << "ThirtySecondAverage"; break;
    case ExdQualifiers::PercentMaximum          : debug << "PercentMaximum"; break;
    case ExdQualifiers::PercentMaximumAverage   : debug << "PercentMaximumAverage"; break;
    case ExdQualifiers::LapPercentMaximum       : debug << "LapPercentMaximum"; break;
    case ExdQualifiers::Elapsed                 : debug << "Elapsed"; break;
    case ExdQualifiers::Sunrise                 : debug << "Sunrise"; break;
    case ExdQualifiers::Sunset                  : debug << "Sunset"; break;
    case ExdQualifiers::ComparedToVirtualPartner: debug << "ComparedToVirtualPartner"; break;
    case ExdQualifiers::Maximum24h              : debug << "Maximum24h"; break;
    case ExdQualifiers::Minimum24h              : debug << "Minimum24h"; break;
    case ExdQualifiers::Minimum                 : debug << "Minimum"; break;
    case ExdQualifiers::First                   : debug << "First"; break;
    case ExdQualifiers::Second                  : debug << "Second"; break;
    case ExdQualifiers::Third                   : debug << "Third"; break;
    case ExdQualifiers::Shifter                 : debug << "Shifter"; break;
    case ExdQualifiers::LastSport               : debug << "LastSport"; break;
    case ExdQualifiers::Moving                  : debug << "Moving"; break;
    case ExdQualifiers::Stopped                 : debug << "Stopped"; break;
    case ExdQualifiers::EstimatedTotal          : debug << "EstimatedTotal"; break;
    case ExdQualifiers::Zone9                   : debug << "Zone9"; break;
    case ExdQualifiers::Zone8                   : debug << "Zone8"; break;
    case ExdQualifiers::Zone7                   : debug << "Zone7"; break;
    case ExdQualifiers::Zone6                   : debug << "Zone6"; break;
    case ExdQualifiers::Zone5                   : debug << "Zone5"; break;
    case ExdQualifiers::Zone4                   : debug << "Zone4"; break;
    case ExdQualifiers::Zone3                   : debug << "Zone3"; break;
    case ExdQualifiers::Zone2                   : debug << "Zone2"; break;
    case ExdQualifiers::Zone1                   : debug << "Zone1"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const ExdDescriptors value)
{
    switch (value) {
    case ExdDescriptors::BikeLightBatteryStatus          : debug << "BikeLightBatteryStatus"; break;
    case ExdDescriptors::BeamAngleStatus                 : debug << "BeamAngleStatus"; break;
    case ExdDescriptors::BateryLevel                     : debug << "BateryLevel"; break;
    case ExdDescriptors::LightNetworkMode                : debug << "LightNetworkMode"; break;
    case ExdDescriptors::NumberLightsConnected           : debug << "NumberLightsConnected"; break;
    case ExdDescriptors::Cadence                         : debug << "Cadence"; break;
    case ExdDescriptors::Distance                        : debug << "Distance"; break;
    case ExdDescriptors::EstimatedTimeOfArrival          : debug << "EstimatedTimeOfArrival"; break;
    case ExdDescriptors::Heading                         : debug << "Heading"; break;
    case ExdDescriptors::Time                            : debug << "Time"; break;
    case ExdDescriptors::BatteryLevel                    : debug << "BatteryLevel"; break;
    case ExdDescriptors::TrainerResistance               : debug << "TrainerResistance"; break;
    case ExdDescriptors::TrainerTargetPower              : debug << "TrainerTargetPower"; break;
    case ExdDescriptors::TimeSeated                      : debug << "TimeSeated"; break;
    case ExdDescriptors::TimeStanding                    : debug << "TimeStanding"; break;
    case ExdDescriptors::Elevation                       : debug << "Elevation"; break;
    case ExdDescriptors::Grade                           : debug << "Grade"; break;
    case ExdDescriptors::Ascent                          : debug << "Ascent"; break;
    case ExdDescriptors::Descent                         : debug << "Descent"; break;
    case ExdDescriptors::VerticalSpeed                   : debug << "VerticalSpeed"; break;
    case ExdDescriptors::Di2BatteryLevel                 : debug << "Di2BatteryLevel"; break;
    case ExdDescriptors::FrontGear                       : debug << "FrontGear"; break;
    case ExdDescriptors::RearGear                        : debug << "RearGear"; break;
    case ExdDescriptors::GearRatio                       : debug << "GearRatio"; break;
    case ExdDescriptors::HeartRate                       : debug << "HeartRate"; break;
    case ExdDescriptors::HeartRateZone                   : debug << "HeartRateZone"; break;
    case ExdDescriptors::TimeInHeartRateZone             : debug << "TimeInHeartRateZone"; break;
    case ExdDescriptors::HeartRateReserve                : debug << "HeartRateReserve"; break;
    case ExdDescriptors::Calories                        : debug << "Calories"; break;
    case ExdDescriptors::GpsAccuracy                     : debug << "GpsAccuracy"; break;
    case ExdDescriptors::GpsSignalStrength               : debug << "GpsSignalStrength"; break;
    case ExdDescriptors::Temperature                     : debug << "Temperature"; break;
    case ExdDescriptors::TimeOfDay                       : debug << "TimeOfDay"; break;
    case ExdDescriptors::Balance                         : debug << "Balance"; break;
    case ExdDescriptors::PedalSmoothness                 : debug << "PedalSmoothness"; break;
    case ExdDescriptors::Power                           : debug << "Power"; break;
    case ExdDescriptors::FunctionalThresholdPower        : debug << "FunctionalThresholdPower"; break;
    case ExdDescriptors::IntensityFactor                 : debug << "IntensityFactor"; break;
    case ExdDescriptors::Work                            : debug << "Work"; break;
    case ExdDescriptors::PowerRatio                      : debug << "PowerRatio"; break;
    case ExdDescriptors::NormalizedPower                 : debug << "NormalizedPower"; break;
    case ExdDescriptors::TrainingStressScore             : debug << "TrainingStressScore"; break;
    case ExdDescriptors::TimeOnZone                      : debug << "TimeOnZone"; break;
    case ExdDescriptors::Speed                           : debug << "Speed"; break;
    case ExdDescriptors::Laps                            : debug << "Laps"; break;
    case ExdDescriptors::Reps                            : debug << "Reps"; break;
    case ExdDescriptors::WorkoutStep                     : debug << "WorkoutStep"; break;
    case ExdDescriptors::CourseDistance                  : debug << "CourseDistance"; break;
    case ExdDescriptors::NavigationDistance              : debug << "NavigationDistance"; break;
    case ExdDescriptors::CourseEstimatedTimeOfArrival    : debug << "CourseEstimatedTimeOfArrival"; break;
    case ExdDescriptors::NavigationEstimatedTimeOfArrival: debug << "NavigationEstimatedTimeOfArrival"; break;
    case ExdDescriptors::CourseTime                      : debug << "CourseTime"; break;
    case ExdDescriptors::NavigationTime                  : debug << "NavigationTime"; break;
    case ExdDescriptors::CourseHeading                   : debug << "CourseHeading"; break;
    case ExdDescriptors::NavigationHeading               : debug << "NavigationHeading"; break;
    case ExdDescriptors::PowerZone                       : debug << "PowerZone"; break;
    case ExdDescriptors::TorqueEffectiveness             : debug << "TorqueEffectiveness"; break;
    case ExdDescriptors::TimerTime                       : debug << "TimerTime"; break;
    case ExdDescriptors::PowerWeightRatio                : debug << "PowerWeightRatio"; break;
    case ExdDescriptors::LeftPlatformCenterOffset        : debug << "LeftPlatformCenterOffset"; break;
    case ExdDescriptors::RightPlatformCenterOffset       : debug << "RightPlatformCenterOffset"; break;
    case ExdDescriptors::LeftPowerPhaseStartAngle        : debug << "LeftPowerPhaseStartAngle"; break;
    case ExdDescriptors::RightPowerPhaseStartAngle       : debug << "RightPowerPhaseStartAngle"; break;
    case ExdDescriptors::LeftPowerPhaseFinishAngle       : debug << "LeftPowerPhaseFinishAngle"; break;
    case ExdDescriptors::RightPowerPhaseFinishAngle      : debug << "RightPowerPhaseFinishAngle"; break;
    case ExdDescriptors::Gears                           : debug << "Gears"; break;
    case ExdDescriptors::Pace                            : debug << "Pace"; break;
    case ExdDescriptors::TrainingEffect                  : debug << "TrainingEffect"; break;
    case ExdDescriptors::VerticalOscillation             : debug << "VerticalOscillation"; break;
    case ExdDescriptors::VerticalRatio                   : debug << "VerticalRatio"; break;
    case ExdDescriptors::GroundContactTime               : debug << "GroundContactTime"; break;
    case ExdDescriptors::LeftGroundContactTimeBalance    : debug << "LeftGroundContactTimeBalance"; break;
    case ExdDescriptors::RightGroundContactTimeBalance   : debug << "RightGroundContactTimeBalance"; break;
    case ExdDescriptors::StrideLength                    : debug << "StrideLength"; break;
    case ExdDescriptors::RunningCadence                  : debug << "RunningCadence"; break;
    case ExdDescriptors::PerformanceCondition            : debug << "PerformanceCondition"; break;
    case ExdDescriptors::CourseType                      : debug << "CourseType"; break;
    case ExdDescriptors::TimeInPowerZone                 : debug << "TimeInPowerZone"; break;
    case ExdDescriptors::NavigationTurn                  : debug << "NavigationTurn"; break;
    case ExdDescriptors::CourseLocation                  : debug << "CourseLocation"; break;
    case ExdDescriptors::NavigationLocation              : debug << "NavigationLocation"; break;
    case ExdDescriptors::Compass                         : debug << "Compass"; break;
    case ExdDescriptors::GearCombo                       : debug << "GearCombo"; break;
    case ExdDescriptors::MuscleOxygen                    : debug << "MuscleOxygen"; break;
    case ExdDescriptors::Icon                            : debug << "Icon"; break;
    case ExdDescriptors::CompassHeading                  : debug << "CompassHeading"; break;
    case ExdDescriptors::GpsHeading                      : debug << "GpsHeading"; break;
    case ExdDescriptors::GpsElevation                    : debug << "GpsElevation"; break;
    case ExdDescriptors::AnaerobicTrainingEffect         : debug << "AnaerobicTrainingEffect"; break;
    case ExdDescriptors::Course                          : debug << "Course"; break;
    case ExdDescriptors::OffCourse                       : debug << "OffCourse"; break;
    case ExdDescriptors::GlideRatio                      : debug << "GlideRatio"; break;
    case ExdDescriptors::VerticalDistance                : debug << "VerticalDistance"; break;
    case ExdDescriptors::Vmg                             : debug << "Vmg"; break;
    case ExdDescriptors::AmbientPressure                 : debug << "AmbientPressure"; break;
    case ExdDescriptors::Pressure                        : debug << "Pressure"; break;
    case ExdDescriptors::Vam                             : debug << "Vam"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const AutoActivityDetect value)
{
    switch (value) {
    case AutoActivityDetect::None      : debug << "None"; break;
    case AutoActivityDetect::Running   : debug << "Running"; break;
    case AutoActivityDetect::Cycling   : debug << "Cycling"; break;
    case AutoActivityDetect::Swimming  : debug << "Swimming"; break;
    case AutoActivityDetect::Walking   : debug << "Walking"; break;
    case AutoActivityDetect::Elliptical: debug << "Elliptical"; break;
    case AutoActivityDetect::Sedentary : debug << "Sedentary"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const SupportedExdScreenLayouts value)
{
    switch (value) {
    case SupportedExdScreenLayouts::FullScreen               : debug << "FullScreen"; break;
    case SupportedExdScreenLayouts::HalfVertical             : debug << "HalfVertical"; break;
    case SupportedExdScreenLayouts::HalfHorizontal           : debug << "HalfHorizontal"; break;
    case SupportedExdScreenLayouts::HalfVerticalRightSplit   : debug << "HalfVerticalRightSplit"; break;
    case SupportedExdScreenLayouts::HalfHorizontalBottomSplit: debug << "HalfHorizontalBottomSplit"; break;
    case SupportedExdScreenLayouts::FullQuarterSplit         : debug << "FullQuarterSplit"; break;
    case SupportedExdScreenLayouts::HalfVerticalLeftSplit    : debug << "HalfVerticalLeftSplit"; break;
    case SupportedExdScreenLayouts::HalfHorizontalTopSplit   : debug << "HalfHorizontalTopSplit"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const FitBaseType value)
{
    switch (value) {
    case FitBaseType::Enum   : debug << "Enum"; break;
    case FitBaseType::Sint8  : debug << "Sint8"; break;
    case FitBaseType::Uint8  : debug << "Uint8"; break;
    case FitBaseType::Sint16 : debug << "Sint16"; break;
    case FitBaseType::Uint16 : debug << "Uint16"; break;
    case FitBaseType::Sint32 : debug << "Sint32"; break;
    case FitBaseType::Uint32 : debug << "Uint32"; break;
    case FitBaseType::String : debug << "String"; break;
    case FitBaseType::Float32: debug << "Float32"; break;
    case FitBaseType::Float64: debug << "Float64"; break;
    case FitBaseType::Uint8z : debug << "Uint8z"; break;
    case FitBaseType::Uint16z: debug << "Uint16z"; break;
    case FitBaseType::Uint32z: debug << "Uint32z"; break;
    case FitBaseType::Byte   : debug << "Byte"; break;
    case FitBaseType::Sint64 : debug << "Sint64"; break;
    case FitBaseType::Uint64 : debug << "Uint64"; break;
    case FitBaseType::Uint64z: debug << "Uint64z"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const TurnType value)
{
    switch (value) {
    case TurnType::ArrivingIdx            : debug << "ArrivingIdx"; break;
    case TurnType::ArrivingLeftIdx        : debug << "ArrivingLeftIdx"; break;
    case TurnType::ArrivingRightIdx       : debug << "ArrivingRightIdx"; break;
    case TurnType::ArrivingViaIdx         : debug << "ArrivingViaIdx"; break;
    case TurnType::ArrivingViaLeftIdx     : debug << "ArrivingViaLeftIdx"; break;
    case TurnType::ArrivingViaRightIdx    : debug << "ArrivingViaRightIdx"; break;
    case TurnType::BearKeepLeftIdx        : debug << "BearKeepLeftIdx"; break;
    case TurnType::BearKeepRightIdx       : debug << "BearKeepRightIdx"; break;
    case TurnType::ContinueIdx            : debug << "ContinueIdx"; break;
    case TurnType::ExitLeftIdx            : debug << "ExitLeftIdx"; break;
    case TurnType::ExitRightIdx           : debug << "ExitRightIdx"; break;
    case TurnType::FerryIdx               : debug << "FerryIdx"; break;
    case TurnType::Roundabout45Idx        : debug << "Roundabout45Idx"; break;
    case TurnType::Roundabout90Idx        : debug << "Roundabout90Idx"; break;
    case TurnType::Roundabout135Idx       : debug << "Roundabout135Idx"; break;
    case TurnType::Roundabout180Idx       : debug << "Roundabout180Idx"; break;
    case TurnType::Roundabout225Idx       : debug << "Roundabout225Idx"; break;
    case TurnType::Roundabout270Idx       : debug << "Roundabout270Idx"; break;
    case TurnType::Roundabout315Idx       : debug << "Roundabout315Idx"; break;
    case TurnType::Roundabout360Idx       : debug << "Roundabout360Idx"; break;
    case TurnType::RoundaboutNeg45Idx     : debug << "RoundaboutNeg45Idx"; break;
    case TurnType::RoundaboutNeg90Idx     : debug << "RoundaboutNeg90Idx"; break;
    case TurnType::RoundaboutNeg135Idx    : debug << "RoundaboutNeg135Idx"; break;
    case TurnType::RoundaboutNeg180Idx    : debug << "RoundaboutNeg180Idx"; break;
    case TurnType::RoundaboutNeg225Idx    : debug << "RoundaboutNeg225Idx"; break;
    case TurnType::RoundaboutNeg270Idx    : debug << "RoundaboutNeg270Idx"; break;
    case TurnType::RoundaboutNeg315Idx    : debug << "RoundaboutNeg315Idx"; break;
    case TurnType::RoundaboutNeg360Idx    : debug << "RoundaboutNeg360Idx"; break;
    case TurnType::RoundaboutGenericIdx   : debug << "RoundaboutGenericIdx"; break;
    case TurnType::RoundaboutNegGenericIdx: debug << "RoundaboutNegGenericIdx"; break;
    case TurnType::SharpTurnLeftIdx       : debug << "SharpTurnLeftIdx"; break;
    case TurnType::SharpTurnRightIdx      : debug << "SharpTurnRightIdx"; break;
    case TurnType::TurnLeftIdx            : debug << "TurnLeftIdx"; break;
    case TurnType::TurnRightIdx           : debug << "TurnRightIdx"; break;
    case TurnType::UturnLeftIdx           : debug << "UturnLeftIdx"; break;
    case TurnType::UturnRightIdx          : debug << "UturnRightIdx"; break;
    case TurnType::IconInvIdx             : debug << "IconInvIdx"; break;
    case TurnType::IconIdxCnt             : debug << "IconIdxCnt"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const BikeLightBeamAngleMode value)
{
    switch (value) {
    case BikeLightBeamAngleMode::Manual: debug << "Manual"; break;
    case BikeLightBeamAngleMode::Auto  : debug << "Auto"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const FitBaseUnit value)
{
    switch (value) {
    case FitBaseUnit::Other   : debug << "Other"; break;
    case FitBaseUnit::Kilogram: debug << "Kilogram"; break;
    case FitBaseUnit::Pound   : debug << "Pound"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const SetType value)
{
    switch (value) {
    case SetType::Rest  : debug << "Rest"; break;
    case SetType::Active: debug << "Active"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const ExerciseCategory value)
{
    switch (value) {
    case ExerciseCategory::BenchPress       : debug << "BenchPress"; break;
    case ExerciseCategory::CalfRaise        : debug << "CalfRaise"; break;
    case ExerciseCategory::Cardio           : debug << "Cardio"; break;
    case ExerciseCategory::Carry            : debug << "Carry"; break;
    case ExerciseCategory::Chop             : debug << "Chop"; break;
    case ExerciseCategory::Core             : debug << "Core"; break;
    case ExerciseCategory::Crunch           : debug << "Crunch"; break;
    case ExerciseCategory::Curl             : debug << "Curl"; break;
    case ExerciseCategory::Deadlift         : debug << "Deadlift"; break;
    case ExerciseCategory::Flye             : debug << "Flye"; break;
    case ExerciseCategory::HipRaise         : debug << "HipRaise"; break;
    case ExerciseCategory::HipStability     : debug << "HipStability"; break;
    case ExerciseCategory::HipSwing         : debug << "HipSwing"; break;
    case ExerciseCategory::Hyperextension   : debug << "Hyperextension"; break;
    case ExerciseCategory::LateralRaise     : debug << "LateralRaise"; break;
    case ExerciseCategory::LegCurl          : debug << "LegCurl"; break;
    case ExerciseCategory::LegRaise         : debug << "LegRaise"; break;
    case ExerciseCategory::Lunge            : debug << "Lunge"; break;
    case ExerciseCategory::OlympicLift      : debug << "OlympicLift"; break;
    case ExerciseCategory::Plank            : debug << "Plank"; break;
    case ExerciseCategory::Plyo             : debug << "Plyo"; break;
    case ExerciseCategory::PullUp           : debug << "PullUp"; break;
    case ExerciseCategory::PushUp           : debug << "PushUp"; break;
    case ExerciseCategory::Row              : debug << "Row"; break;
    case ExerciseCategory::ShoulderPress    : debug << "ShoulderPress"; break;
    case ExerciseCategory::ShoulderStability: debug << "ShoulderStability"; break;
    case ExerciseCategory::Shrug            : debug << "Shrug"; break;
    case ExerciseCategory::SitUp            : debug << "SitUp"; break;
    case ExerciseCategory::Squat            : debug << "Squat"; break;
    case ExerciseCategory::TotalBody        : debug << "TotalBody"; break;
    case ExerciseCategory::TricepsExtension : debug << "TricepsExtension"; break;
    case ExerciseCategory::WarmUp           : debug << "WarmUp"; break;
    case ExerciseCategory::Run              : debug << "Run"; break;
    case ExerciseCategory::Unknown          : debug << "Unknown"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const BenchPressExerciseName value)
{
    switch (value) {
    case BenchPressExerciseName::AlternatingDumbbellChestPressOnSwissBall: debug << "AlternatingDumbbellChestPressOnSwissBall"; break;
    case BenchPressExerciseName::BarbellBenchPress                       : debug << "BarbellBenchPress"; break;
    case BenchPressExerciseName::BarbellBoardBenchPress                  : debug << "BarbellBoardBenchPress"; break;
    case BenchPressExerciseName::BarbellFloorPress                       : debug << "BarbellFloorPress"; break;
    case BenchPressExerciseName::CloseGripBarbellBenchPress              : debug << "CloseGripBarbellBenchPress"; break;
    case BenchPressExerciseName::DeclineDumbbellBenchPress               : debug << "DeclineDumbbellBenchPress"; break;
    case BenchPressExerciseName::DumbbellBenchPress                      : debug << "DumbbellBenchPress"; break;
    case BenchPressExerciseName::DumbbellFloorPress                      : debug << "DumbbellFloorPress"; break;
    case BenchPressExerciseName::InclineBarbellBenchPress                : debug << "InclineBarbellBenchPress"; break;
    case BenchPressExerciseName::InclineDumbbellBenchPress               : debug << "InclineDumbbellBenchPress"; break;
    case BenchPressExerciseName::InclineSmithMachineBenchPress           : debug << "InclineSmithMachineBenchPress"; break;
    case BenchPressExerciseName::IsometricBarbellBenchPress              : debug << "IsometricBarbellBenchPress"; break;
    case BenchPressExerciseName::KettlebellChestPress                    : debug << "KettlebellChestPress"; break;
    case BenchPressExerciseName::NeutralGripDumbbellBenchPress           : debug << "NeutralGripDumbbellBenchPress"; break;
    case BenchPressExerciseName::NeutralGripDumbbellInclineBenchPress    : debug << "NeutralGripDumbbellInclineBenchPress"; break;
    case BenchPressExerciseName::OneArmFloorPress                        : debug << "OneArmFloorPress"; break;
    case BenchPressExerciseName::WeightedOneArmFloorPress                : debug << "WeightedOneArmFloorPress"; break;
    case BenchPressExerciseName::PartialLockout                          : debug << "PartialLockout"; break;
    case BenchPressExerciseName::ReverseGripBarbellBenchPress            : debug << "ReverseGripBarbellBenchPress"; break;
    case BenchPressExerciseName::ReverseGripInclineBenchPress            : debug << "ReverseGripInclineBenchPress"; break;
    case BenchPressExerciseName::SingleArmCableChestPress                : debug << "SingleArmCableChestPress"; break;
    case BenchPressExerciseName::SingleArmDumbbellBenchPress             : debug << "SingleArmDumbbellBenchPress"; break;
    case BenchPressExerciseName::SmithMachineBenchPress                  : debug << "SmithMachineBenchPress"; break;
    case BenchPressExerciseName::SwissBallDumbbellChestPress             : debug << "SwissBallDumbbellChestPress"; break;
    case BenchPressExerciseName::TripleStopBarbellBenchPress             : debug << "TripleStopBarbellBenchPress"; break;
    case BenchPressExerciseName::WideGripBarbellBenchPress               : debug << "WideGripBarbellBenchPress"; break;
    case BenchPressExerciseName::AlternatingDumbbellChestPress           : debug << "AlternatingDumbbellChestPress"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const CalfRaiseExerciseName value)
{
    switch (value) {
    case CalfRaiseExerciseName::ThreeWayCalfRaise                 : debug << "ThreeWayCalfRaise"; break;
    case CalfRaiseExerciseName::ThreeWayWeightedCalfRaise         : debug << "ThreeWayWeightedCalfRaise"; break;
    case CalfRaiseExerciseName::ThreeWaySingleLegCalfRaise        : debug << "ThreeWaySingleLegCalfRaise"; break;
    case CalfRaiseExerciseName::ThreeWayWeightedSingleLegCalfRaise: debug << "ThreeWayWeightedSingleLegCalfRaise"; break;
    case CalfRaiseExerciseName::DonkeyCalfRaise                   : debug << "DonkeyCalfRaise"; break;
    case CalfRaiseExerciseName::WeightedDonkeyCalfRaise           : debug << "WeightedDonkeyCalfRaise"; break;
    case CalfRaiseExerciseName::SeatedCalfRaise                   : debug << "SeatedCalfRaise"; break;
    case CalfRaiseExerciseName::WeightedSeatedCalfRaise           : debug << "WeightedSeatedCalfRaise"; break;
    case CalfRaiseExerciseName::SeatedDumbbellToeRaise            : debug << "SeatedDumbbellToeRaise"; break;
    case CalfRaiseExerciseName::SingleLegBentKneeCalfRaise        : debug << "SingleLegBentKneeCalfRaise"; break;
    case CalfRaiseExerciseName::WeightedSingleLegBentKneeCalfRaise: debug << "WeightedSingleLegBentKneeCalfRaise"; break;
    case CalfRaiseExerciseName::SingleLegDeclinePushUp            : debug << "SingleLegDeclinePushUp"; break;
    case CalfRaiseExerciseName::SingleLegDonkeyCalfRaise          : debug << "SingleLegDonkeyCalfRaise"; break;
    case CalfRaiseExerciseName::WeightedSingleLegDonkeyCalfRaise  : debug << "WeightedSingleLegDonkeyCalfRaise"; break;
    case CalfRaiseExerciseName::SingleLegHipRaiseWithKneeHold     : debug << "SingleLegHipRaiseWithKneeHold"; break;
    case CalfRaiseExerciseName::SingleLegStandingCalfRaise        : debug << "SingleLegStandingCalfRaise"; break;
    case CalfRaiseExerciseName::SingleLegStandingDumbbellCalfRaise: debug << "SingleLegStandingDumbbellCalfRaise"; break;
    case CalfRaiseExerciseName::StandingBarbellCalfRaise          : debug << "StandingBarbellCalfRaise"; break;
    case CalfRaiseExerciseName::StandingCalfRaise                 : debug << "StandingCalfRaise"; break;
    case CalfRaiseExerciseName::WeightedStandingCalfRaise         : debug << "WeightedStandingCalfRaise"; break;
    case CalfRaiseExerciseName::StandingDumbbellCalfRaise         : debug << "StandingDumbbellCalfRaise"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const CardioExerciseName value)
{
    switch (value) {
    case CardioExerciseName::BobAndWeaveCircle        : debug << "BobAndWeaveCircle"; break;
    case CardioExerciseName::WeightedBobAndWeaveCircle: debug << "WeightedBobAndWeaveCircle"; break;
    case CardioExerciseName::CardioCoreCrawl          : debug << "CardioCoreCrawl"; break;
    case CardioExerciseName::WeightedCardioCoreCrawl  : debug << "WeightedCardioCoreCrawl"; break;
    case CardioExerciseName::DoubleUnder              : debug << "DoubleUnder"; break;
    case CardioExerciseName::WeightedDoubleUnder      : debug << "WeightedDoubleUnder"; break;
    case CardioExerciseName::JumpRope                 : debug << "JumpRope"; break;
    case CardioExerciseName::WeightedJumpRope         : debug << "WeightedJumpRope"; break;
    case CardioExerciseName::JumpRopeCrossover        : debug << "JumpRopeCrossover"; break;
    case CardioExerciseName::WeightedJumpRopeCrossover: debug << "WeightedJumpRopeCrossover"; break;
    case CardioExerciseName::JumpRopeJog              : debug << "JumpRopeJog"; break;
    case CardioExerciseName::WeightedJumpRopeJog      : debug << "WeightedJumpRopeJog"; break;
    case CardioExerciseName::JumpingJacks             : debug << "JumpingJacks"; break;
    case CardioExerciseName::WeightedJumpingJacks     : debug << "WeightedJumpingJacks"; break;
    case CardioExerciseName::SkiMoguls                : debug << "SkiMoguls"; break;
    case CardioExerciseName::WeightedSkiMoguls        : debug << "WeightedSkiMoguls"; break;
    case CardioExerciseName::SplitJacks               : debug << "SplitJacks"; break;
    case CardioExerciseName::WeightedSplitJacks       : debug << "WeightedSplitJacks"; break;
    case CardioExerciseName::SquatJacks               : debug << "SquatJacks"; break;
    case CardioExerciseName::WeightedSquatJacks       : debug << "WeightedSquatJacks"; break;
    case CardioExerciseName::TripleUnder              : debug << "TripleUnder"; break;
    case CardioExerciseName::WeightedTripleUnder      : debug << "WeightedTripleUnder"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const CarryExerciseName value)
{
    switch (value) {
    case CarryExerciseName::BarHolds         : debug << "BarHolds"; break;
    case CarryExerciseName::FarmersWalk      : debug << "FarmersWalk"; break;
    case CarryExerciseName::FarmersWalkOnToes: debug << "FarmersWalkOnToes"; break;
    case CarryExerciseName::HexDumbbellHold  : debug << "HexDumbbellHold"; break;
    case CarryExerciseName::OverheadCarry    : debug << "OverheadCarry"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const ChopExerciseName value)
{
    switch (value) {
    case ChopExerciseName::CablePullThrough                  : debug << "CablePullThrough"; break;
    case ChopExerciseName::CableRotationalLift               : debug << "CableRotationalLift"; break;
    case ChopExerciseName::CableWoodchop                     : debug << "CableWoodchop"; break;
    case ChopExerciseName::CrossChopToKnee                   : debug << "CrossChopToKnee"; break;
    case ChopExerciseName::WeightedCrossChopToKnee           : debug << "WeightedCrossChopToKnee"; break;
    case ChopExerciseName::DumbbellChop                      : debug << "DumbbellChop"; break;
    case ChopExerciseName::HalfKneelingRotation              : debug << "HalfKneelingRotation"; break;
    case ChopExerciseName::WeightedHalfKneelingRotation      : debug << "WeightedHalfKneelingRotation"; break;
    case ChopExerciseName::HalfKneelingRotationalChop        : debug << "HalfKneelingRotationalChop"; break;
    case ChopExerciseName::HalfKneelingRotationalReverseChop : debug << "HalfKneelingRotationalReverseChop"; break;
    case ChopExerciseName::HalfKneelingStabilityChop         : debug << "HalfKneelingStabilityChop"; break;
    case ChopExerciseName::HalfKneelingStabilityReverseChop  : debug << "HalfKneelingStabilityReverseChop"; break;
    case ChopExerciseName::KneelingRotationalChop            : debug << "KneelingRotationalChop"; break;
    case ChopExerciseName::KneelingRotationalReverseChop     : debug << "KneelingRotationalReverseChop"; break;
    case ChopExerciseName::KneelingStabilityChop             : debug << "KneelingStabilityChop"; break;
    case ChopExerciseName::KneelingWoodchopper               : debug << "KneelingWoodchopper"; break;
    case ChopExerciseName::MedicineBallWoodChops             : debug << "MedicineBallWoodChops"; break;
    case ChopExerciseName::PowerSquatChops                   : debug << "PowerSquatChops"; break;
    case ChopExerciseName::WeightedPowerSquatChops           : debug << "WeightedPowerSquatChops"; break;
    case ChopExerciseName::StandingRotationalChop            : debug << "StandingRotationalChop"; break;
    case ChopExerciseName::StandingSplitRotationalChop       : debug << "StandingSplitRotationalChop"; break;
    case ChopExerciseName::StandingSplitRotationalReverseChop: debug << "StandingSplitRotationalReverseChop"; break;
    case ChopExerciseName::StandingStabilityReverseChop      : debug << "StandingStabilityReverseChop"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const CoreExerciseName value)
{
    switch (value) {
    case CoreExerciseName::AbsJabs                         : debug << "AbsJabs"; break;
    case CoreExerciseName::WeightedAbsJabs                 : debug << "WeightedAbsJabs"; break;
    case CoreExerciseName::AlternatingPlateReach           : debug << "AlternatingPlateReach"; break;
    case CoreExerciseName::BarbellRollout                  : debug << "BarbellRollout"; break;
    case CoreExerciseName::WeightedBarbellRollout          : debug << "WeightedBarbellRollout"; break;
    case CoreExerciseName::BodyBarObliqueTwist             : debug << "BodyBarObliqueTwist"; break;
    case CoreExerciseName::CableCorePress                  : debug << "CableCorePress"; break;
    case CoreExerciseName::CableSideBend                   : debug << "CableSideBend"; break;
    case CoreExerciseName::SideBend                        : debug << "SideBend"; break;
    case CoreExerciseName::WeightedSideBend                : debug << "WeightedSideBend"; break;
    case CoreExerciseName::CrescentCircle                  : debug << "CrescentCircle"; break;
    case CoreExerciseName::WeightedCrescentCircle          : debug << "WeightedCrescentCircle"; break;
    case CoreExerciseName::CyclingRussianTwist             : debug << "CyclingRussianTwist"; break;
    case CoreExerciseName::WeightedCyclingRussianTwist     : debug << "WeightedCyclingRussianTwist"; break;
    case CoreExerciseName::ElevatedFeetRussianTwist        : debug << "ElevatedFeetRussianTwist"; break;
    case CoreExerciseName::WeightedElevatedFeetRussianTwist: debug << "WeightedElevatedFeetRussianTwist"; break;
    case CoreExerciseName::HalfTurkishGetUp                : debug << "HalfTurkishGetUp"; break;
    case CoreExerciseName::KettlebellWindmill              : debug << "KettlebellWindmill"; break;
    case CoreExerciseName::KneelingAbWheel                 : debug << "KneelingAbWheel"; break;
    case CoreExerciseName::WeightedKneelingAbWheel         : debug << "WeightedKneelingAbWheel"; break;
    case CoreExerciseName::ModifiedFrontLever              : debug << "ModifiedFrontLever"; break;
    case CoreExerciseName::OpenKneeTucks                   : debug << "OpenKneeTucks"; break;
    case CoreExerciseName::WeightedOpenKneeTucks           : debug << "WeightedOpenKneeTucks"; break;
    case CoreExerciseName::SideAbsLegLift                  : debug << "SideAbsLegLift"; break;
    case CoreExerciseName::WeightedSideAbsLegLift          : debug << "WeightedSideAbsLegLift"; break;
    case CoreExerciseName::SwissBallJackknife              : debug << "SwissBallJackknife"; break;
    case CoreExerciseName::WeightedSwissBallJackknife      : debug << "WeightedSwissBallJackknife"; break;
    case CoreExerciseName::SwissBallPike                   : debug << "SwissBallPike"; break;
    case CoreExerciseName::WeightedSwissBallPike           : debug << "WeightedSwissBallPike"; break;
    case CoreExerciseName::SwissBallRollout                : debug << "SwissBallRollout"; break;
    case CoreExerciseName::WeightedSwissBallRollout        : debug << "WeightedSwissBallRollout"; break;
    case CoreExerciseName::TriangleHipPress                : debug << "TriangleHipPress"; break;
    case CoreExerciseName::WeightedTriangleHipPress        : debug << "WeightedTriangleHipPress"; break;
    case CoreExerciseName::TrxSuspendedJackknife           : debug << "TrxSuspendedJackknife"; break;
    case CoreExerciseName::WeightedTrxSuspendedJackknife   : debug << "WeightedTrxSuspendedJackknife"; break;
    case CoreExerciseName::UBoat                           : debug << "UBoat"; break;
    case CoreExerciseName::WeightedUBoat                   : debug << "WeightedUBoat"; break;
    case CoreExerciseName::WindmillSwitches                : debug << "WindmillSwitches"; break;
    case CoreExerciseName::WeightedWindmillSwitches        : debug << "WeightedWindmillSwitches"; break;
    case CoreExerciseName::AlternatingSlideOut             : debug << "AlternatingSlideOut"; break;
    case CoreExerciseName::WeightedAlternatingSlideOut     : debug << "WeightedAlternatingSlideOut"; break;
    case CoreExerciseName::GhdBackExtensions               : debug << "GhdBackExtensions"; break;
    case CoreExerciseName::WeightedGhdBackExtensions       : debug << "WeightedGhdBackExtensions"; break;
    case CoreExerciseName::OverheadWalk                    : debug << "OverheadWalk"; break;
    case CoreExerciseName::Inchworm                        : debug << "Inchworm"; break;
    case CoreExerciseName::WeightedModifiedFrontLever      : debug << "WeightedModifiedFrontLever"; break;
    case CoreExerciseName::RussianTwist                    : debug << "RussianTwist"; break;
    case CoreExerciseName::AbdominalLegRotations           : debug << "AbdominalLegRotations"; break;
    case CoreExerciseName::ArmAndLegExtensionOnKnees       : debug << "ArmAndLegExtensionOnKnees"; break;
    case CoreExerciseName::Bicycle                         : debug << "Bicycle"; break;
    case CoreExerciseName::BicepCurlWithLegExtension       : debug << "BicepCurlWithLegExtension"; break;
    case CoreExerciseName::CatCow                          : debug << "CatCow"; break;
    case CoreExerciseName::Corkscrew                       : debug << "Corkscrew"; break;
    case CoreExerciseName::CrissCross                      : debug << "CrissCross"; break;
    case CoreExerciseName::CrissCrossWithBall              : debug << "CrissCrossWithBall"; break;
    case CoreExerciseName::DoubleLegStretch                : debug << "DoubleLegStretch"; break;
    case CoreExerciseName::KneeFolds                       : debug << "KneeFolds"; break;
    case CoreExerciseName::LowerLift                       : debug << "LowerLift"; break;
    case CoreExerciseName::NeckPull                        : debug << "NeckPull"; break;
    case CoreExerciseName::PelvicClocks                    : debug << "PelvicClocks"; break;
    case CoreExerciseName::RollOver                        : debug << "RollOver"; break;
    case CoreExerciseName::RollUp                          : debug << "RollUp"; break;
    case CoreExerciseName::Rolling                         : debug << "Rolling"; break;
    case CoreExerciseName::Rowing1                         : debug << "Rowing1"; break;
    case CoreExerciseName::Rowing2                         : debug << "Rowing2"; break;
    case CoreExerciseName::Scissors                        : debug << "Scissors"; break;
    case CoreExerciseName::SingleLegCircles                : debug << "SingleLegCircles"; break;
    case CoreExerciseName::SingleLegStretch                : debug << "SingleLegStretch"; break;
    case CoreExerciseName::SnakeTwist1And2                 : debug << "SnakeTwist1And2"; break;
    case CoreExerciseName::Swan                            : debug << "Swan"; break;
    case CoreExerciseName::Swimming                        : debug << "Swimming"; break;
    case CoreExerciseName::Teaser                          : debug << "Teaser"; break;
    case CoreExerciseName::TheHundred                      : debug << "TheHundred"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const CrunchExerciseName value)
{
    switch (value) {
    case CrunchExerciseName::BicycleCrunch                          : debug << "BicycleCrunch"; break;
    case CrunchExerciseName::CableCrunch                            : debug << "CableCrunch"; break;
    case CrunchExerciseName::CircularArmCrunch                      : debug << "CircularArmCrunch"; break;
    case CrunchExerciseName::CrossedArmsCrunch                      : debug << "CrossedArmsCrunch"; break;
    case CrunchExerciseName::WeightedCrossedArmsCrunch              : debug << "WeightedCrossedArmsCrunch"; break;
    case CrunchExerciseName::CrossLegReverseCrunch                  : debug << "CrossLegReverseCrunch"; break;
    case CrunchExerciseName::WeightedCrossLegReverseCrunch          : debug << "WeightedCrossLegReverseCrunch"; break;
    case CrunchExerciseName::CrunchChop                             : debug << "CrunchChop"; break;
    case CrunchExerciseName::WeightedCrunchChop                     : debug << "WeightedCrunchChop"; break;
    case CrunchExerciseName::DoubleCrunch                           : debug << "DoubleCrunch"; break;
    case CrunchExerciseName::WeightedDoubleCrunch                   : debug << "WeightedDoubleCrunch"; break;
    case CrunchExerciseName::ElbowToKneeCrunch                      : debug << "ElbowToKneeCrunch"; break;
    case CrunchExerciseName::WeightedElbowToKneeCrunch              : debug << "WeightedElbowToKneeCrunch"; break;
    case CrunchExerciseName::FlutterKicks                           : debug << "FlutterKicks"; break;
    case CrunchExerciseName::WeightedFlutterKicks                   : debug << "WeightedFlutterKicks"; break;
    case CrunchExerciseName::FoamRollerReverseCrunchOnBench         : debug << "FoamRollerReverseCrunchOnBench"; break;
    case CrunchExerciseName::WeightedFoamRollerReverseCrunchOnBench : debug << "WeightedFoamRollerReverseCrunchOnBench"; break;
    case CrunchExerciseName::FoamRollerReverseCrunchWithDumbbell    : debug << "FoamRollerReverseCrunchWithDumbbell"; break;
    case CrunchExerciseName::FoamRollerReverseCrunchWithMedicineBall: debug << "FoamRollerReverseCrunchWithMedicineBall"; break;
    case CrunchExerciseName::FrogPress                              : debug << "FrogPress"; break;
    case CrunchExerciseName::HangingKneeRaiseObliqueCrunch          : debug << "HangingKneeRaiseObliqueCrunch"; break;
    case CrunchExerciseName::WeightedHangingKneeRaiseObliqueCrunch  : debug << "WeightedHangingKneeRaiseObliqueCrunch"; break;
    case CrunchExerciseName::HipCrossover                           : debug << "HipCrossover"; break;
    case CrunchExerciseName::WeightedHipCrossover                   : debug << "WeightedHipCrossover"; break;
    case CrunchExerciseName::HollowRock                             : debug << "HollowRock"; break;
    case CrunchExerciseName::WeightedHollowRock                     : debug << "WeightedHollowRock"; break;
    case CrunchExerciseName::InclineReverseCrunch                   : debug << "InclineReverseCrunch"; break;
    case CrunchExerciseName::WeightedInclineReverseCrunch           : debug << "WeightedInclineReverseCrunch"; break;
    case CrunchExerciseName::KneelingCableCrunch                    : debug << "KneelingCableCrunch"; break;
    case CrunchExerciseName::KneelingCrossCrunch                    : debug << "KneelingCrossCrunch"; break;
    case CrunchExerciseName::WeightedKneelingCrossCrunch            : debug << "WeightedKneelingCrossCrunch"; break;
    case CrunchExerciseName::KneelingObliqueCableCrunch             : debug << "KneelingObliqueCableCrunch"; break;
    case CrunchExerciseName::KneesToElbow                           : debug << "KneesToElbow"; break;
    case CrunchExerciseName::LegExtensions                          : debug << "LegExtensions"; break;
    case CrunchExerciseName::WeightedLegExtensions                  : debug << "WeightedLegExtensions"; break;
    case CrunchExerciseName::LegLevers                              : debug << "LegLevers"; break;
    case CrunchExerciseName::McgillCurlUp                           : debug << "McgillCurlUp"; break;
    case CrunchExerciseName::WeightedMcgillCurlUp                   : debug << "WeightedMcgillCurlUp"; break;
    case CrunchExerciseName::ModifiedPilatesRollUpWithBall          : debug << "ModifiedPilatesRollUpWithBall"; break;
    case CrunchExerciseName::WeightedModifiedPilatesRollUpWithBall  : debug << "WeightedModifiedPilatesRollUpWithBall"; break;
    case CrunchExerciseName::PilatesCrunch                          : debug << "PilatesCrunch"; break;
    case CrunchExerciseName::WeightedPilatesCrunch                  : debug << "WeightedPilatesCrunch"; break;
    case CrunchExerciseName::PilatesRollUpWithBall                  : debug << "PilatesRollUpWithBall"; break;
    case CrunchExerciseName::WeightedPilatesRollUpWithBall          : debug << "WeightedPilatesRollUpWithBall"; break;
    case CrunchExerciseName::RaisedLegsCrunch                       : debug << "RaisedLegsCrunch"; break;
    case CrunchExerciseName::WeightedRaisedLegsCrunch               : debug << "WeightedRaisedLegsCrunch"; break;
    case CrunchExerciseName::ReverseCrunch                          : debug << "ReverseCrunch"; break;
    case CrunchExerciseName::WeightedReverseCrunch                  : debug << "WeightedReverseCrunch"; break;
    case CrunchExerciseName::ReverseCrunchOnABench                  : debug << "ReverseCrunchOnABench"; break;
    case CrunchExerciseName::WeightedReverseCrunchOnABench          : debug << "WeightedReverseCrunchOnABench"; break;
    case CrunchExerciseName::ReverseCurlAndLift                     : debug << "ReverseCurlAndLift"; break;
    case CrunchExerciseName::WeightedReverseCurlAndLift             : debug << "WeightedReverseCurlAndLift"; break;
    case CrunchExerciseName::RotationalLift                         : debug << "RotationalLift"; break;
    case CrunchExerciseName::WeightedRotationalLift                 : debug << "WeightedRotationalLift"; break;
    case CrunchExerciseName::SeatedAlternatingReverseCrunch         : debug << "SeatedAlternatingReverseCrunch"; break;
    case CrunchExerciseName::WeightedSeatedAlternatingReverseCrunch : debug << "WeightedSeatedAlternatingReverseCrunch"; break;
    case CrunchExerciseName::SeatedLegU                             : debug << "SeatedLegU"; break;
    case CrunchExerciseName::WeightedSeatedLegU                     : debug << "WeightedSeatedLegU"; break;
    case CrunchExerciseName::SideToSideCrunchAndWeave               : debug << "SideToSideCrunchAndWeave"; break;
    case CrunchExerciseName::WeightedSideToSideCrunchAndWeave       : debug << "WeightedSideToSideCrunchAndWeave"; break;
    case CrunchExerciseName::SingleLegReverseCrunch                 : debug << "SingleLegReverseCrunch"; break;
    case CrunchExerciseName::WeightedSingleLegReverseCrunch         : debug << "WeightedSingleLegReverseCrunch"; break;
    case CrunchExerciseName::SkaterCrunchCross                      : debug << "SkaterCrunchCross"; break;
    case CrunchExerciseName::WeightedSkaterCrunchCross              : debug << "WeightedSkaterCrunchCross"; break;
    case CrunchExerciseName::StandingCableCrunch                    : debug << "StandingCableCrunch"; break;
    case CrunchExerciseName::StandingSideCrunch                     : debug << "StandingSideCrunch"; break;
    case CrunchExerciseName::StepClimb                              : debug << "StepClimb"; break;
    case CrunchExerciseName::WeightedStepClimb                      : debug << "WeightedStepClimb"; break;
    case CrunchExerciseName::SwissBallCrunch                        : debug << "SwissBallCrunch"; break;
    case CrunchExerciseName::SwissBallReverseCrunch                 : debug << "SwissBallReverseCrunch"; break;
    case CrunchExerciseName::WeightedSwissBallReverseCrunch         : debug << "WeightedSwissBallReverseCrunch"; break;
    case CrunchExerciseName::SwissBallRussianTwist                  : debug << "SwissBallRussianTwist"; break;
    case CrunchExerciseName::WeightedSwissBallRussianTwist          : debug << "WeightedSwissBallRussianTwist"; break;
    case CrunchExerciseName::SwissBallSideCrunch                    : debug << "SwissBallSideCrunch"; break;
    case CrunchExerciseName::WeightedSwissBallSideCrunch            : debug << "WeightedSwissBallSideCrunch"; break;
    case CrunchExerciseName::ThoracicCrunchesOnFoamRoller           : debug << "ThoracicCrunchesOnFoamRoller"; break;
    case CrunchExerciseName::WeightedThoracicCrunchesOnFoamRoller   : debug << "WeightedThoracicCrunchesOnFoamRoller"; break;
    case CrunchExerciseName::TricepsCrunch                          : debug << "TricepsCrunch"; break;
    case CrunchExerciseName::WeightedBicycleCrunch                  : debug << "WeightedBicycleCrunch"; break;
    case CrunchExerciseName::WeightedCrunch                         : debug << "WeightedCrunch"; break;
    case CrunchExerciseName::WeightedSwissBallCrunch                : debug << "WeightedSwissBallCrunch"; break;
    case CrunchExerciseName::ToesToBar                              : debug << "ToesToBar"; break;
    case CrunchExerciseName::WeightedToesToBar                      : debug << "WeightedToesToBar"; break;
    case CrunchExerciseName::Crunch                                 : debug << "Crunch"; break;
    case CrunchExerciseName::StraightLegCrunchWithBall              : debug << "StraightLegCrunchWithBall"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const CurlExerciseName value)
{
    switch (value) {
    case CurlExerciseName::AlternatingDumbbellBicepsCurl            : debug << "AlternatingDumbbellBicepsCurl"; break;
    case CurlExerciseName::AlternatingDumbbellBicepsCurlOnSwissBall : debug << "AlternatingDumbbellBicepsCurlOnSwissBall"; break;
    case CurlExerciseName::AlternatingInclineDumbbellBicepsCurl     : debug << "AlternatingInclineDumbbellBicepsCurl"; break;
    case CurlExerciseName::BarbellBicepsCurl                        : debug << "BarbellBicepsCurl"; break;
    case CurlExerciseName::BarbellReverseWristCurl                  : debug << "BarbellReverseWristCurl"; break;
    case CurlExerciseName::BarbellWristCurl                         : debug << "BarbellWristCurl"; break;
    case CurlExerciseName::BehindTheBackBarbellReverseWristCurl     : debug << "BehindTheBackBarbellReverseWristCurl"; break;
    case CurlExerciseName::BehindTheBackOneArmCableCurl             : debug << "BehindTheBackOneArmCableCurl"; break;
    case CurlExerciseName::CableBicepsCurl                          : debug << "CableBicepsCurl"; break;
    case CurlExerciseName::CableHammerCurl                          : debug << "CableHammerCurl"; break;
    case CurlExerciseName::CheatingBarbellBicepsCurl                : debug << "CheatingBarbellBicepsCurl"; break;
    case CurlExerciseName::CloseGripEzBarBicepsCurl                 : debug << "CloseGripEzBarBicepsCurl"; break;
    case CurlExerciseName::CrossBodyDumbbellHammerCurl              : debug << "CrossBodyDumbbellHammerCurl"; break;
    case CurlExerciseName::DeadHangBicepsCurl                       : debug << "DeadHangBicepsCurl"; break;
    case CurlExerciseName::DeclineHammerCurl                        : debug << "DeclineHammerCurl"; break;
    case CurlExerciseName::DumbbellBicepsCurlWithStaticHold         : debug << "DumbbellBicepsCurlWithStaticHold"; break;
    case CurlExerciseName::DumbbellHammerCurl                       : debug << "DumbbellHammerCurl"; break;
    case CurlExerciseName::DumbbellReverseWristCurl                 : debug << "DumbbellReverseWristCurl"; break;
    case CurlExerciseName::DumbbellWristCurl                        : debug << "DumbbellWristCurl"; break;
    case CurlExerciseName::EzBarPreacherCurl                        : debug << "EzBarPreacherCurl"; break;
    case CurlExerciseName::ForwardBendBicepsCurl                    : debug << "ForwardBendBicepsCurl"; break;
    case CurlExerciseName::HammerCurlToPress                        : debug << "HammerCurlToPress"; break;
    case CurlExerciseName::InclineDumbbellBicepsCurl                : debug << "InclineDumbbellBicepsCurl"; break;
    case CurlExerciseName::InclineOffsetThumbDumbbellCurl           : debug << "InclineOffsetThumbDumbbellCurl"; break;
    case CurlExerciseName::KettlebellBicepsCurl                     : debug << "KettlebellBicepsCurl"; break;
    case CurlExerciseName::LyingConcentrationCableCurl              : debug << "LyingConcentrationCableCurl"; break;
    case CurlExerciseName::OneArmPreacherCurl                       : debug << "OneArmPreacherCurl"; break;
    case CurlExerciseName::PlatePinchCurl                           : debug << "PlatePinchCurl"; break;
    case CurlExerciseName::PreacherCurlWithCable                    : debug << "PreacherCurlWithCable"; break;
    case CurlExerciseName::ReverseEzBarCurl                         : debug << "ReverseEzBarCurl"; break;
    case CurlExerciseName::ReverseGripWristCurl                     : debug << "ReverseGripWristCurl"; break;
    case CurlExerciseName::ReverseGripBarbellBicepsCurl             : debug << "ReverseGripBarbellBicepsCurl"; break;
    case CurlExerciseName::SeatedAlternatingDumbbellBicepsCurl      : debug << "SeatedAlternatingDumbbellBicepsCurl"; break;
    case CurlExerciseName::SeatedDumbbellBicepsCurl                 : debug << "SeatedDumbbellBicepsCurl"; break;
    case CurlExerciseName::SeatedReverseDumbbellCurl                : debug << "SeatedReverseDumbbellCurl"; break;
    case CurlExerciseName::SplitStanceOffsetPinkyDumbbellCurl       : debug << "SplitStanceOffsetPinkyDumbbellCurl"; break;
    case CurlExerciseName::StandingAlternatingDumbbellCurls         : debug << "StandingAlternatingDumbbellCurls"; break;
    case CurlExerciseName::StandingDumbbellBicepsCurl               : debug << "StandingDumbbellBicepsCurl"; break;
    case CurlExerciseName::StandingEzBarBicepsCurl                  : debug << "StandingEzBarBicepsCurl"; break;
    case CurlExerciseName::StaticCurl                               : debug << "StaticCurl"; break;
    case CurlExerciseName::SwissBallDumbbellOverheadTricepsExtension: debug << "SwissBallDumbbellOverheadTricepsExtension"; break;
    case CurlExerciseName::SwissBallEzBarPreacherCurl               : debug << "SwissBallEzBarPreacherCurl"; break;
    case CurlExerciseName::TwistingStandingDumbbellBicepsCurl       : debug << "TwistingStandingDumbbellBicepsCurl"; break;
    case CurlExerciseName::WideGripEzBarBicepsCurl                  : debug << "WideGripEzBarBicepsCurl"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const DeadliftExerciseName value)
{
    switch (value) {
    case DeadliftExerciseName::BarbellDeadlift                      : debug << "BarbellDeadlift"; break;
    case DeadliftExerciseName::BarbellStraightLegDeadlift           : debug << "BarbellStraightLegDeadlift"; break;
    case DeadliftExerciseName::DumbbellDeadlift                     : debug << "DumbbellDeadlift"; break;
    case DeadliftExerciseName::DumbbellSingleLegDeadliftToRow       : debug << "DumbbellSingleLegDeadliftToRow"; break;
    case DeadliftExerciseName::DumbbellStraightLegDeadlift          : debug << "DumbbellStraightLegDeadlift"; break;
    case DeadliftExerciseName::KettlebellFloorToShelf               : debug << "KettlebellFloorToShelf"; break;
    case DeadliftExerciseName::OneArmOneLegDeadlift                 : debug << "OneArmOneLegDeadlift"; break;
    case DeadliftExerciseName::RackPull                             : debug << "RackPull"; break;
    case DeadliftExerciseName::RotationalDumbbellStraightLegDeadlift: debug << "RotationalDumbbellStraightLegDeadlift"; break;
    case DeadliftExerciseName::SingleArmDeadlift                    : debug << "SingleArmDeadlift"; break;
    case DeadliftExerciseName::SingleLegBarbellDeadlift             : debug << "SingleLegBarbellDeadlift"; break;
    case DeadliftExerciseName::SingleLegBarbellStraightLegDeadlift  : debug << "SingleLegBarbellStraightLegDeadlift"; break;
    case DeadliftExerciseName::SingleLegDeadliftWithBarbell         : debug << "SingleLegDeadliftWithBarbell"; break;
    case DeadliftExerciseName::SingleLegRdlCircuit                  : debug << "SingleLegRdlCircuit"; break;
    case DeadliftExerciseName::SingleLegRomanianDeadliftWithDumbbell: debug << "SingleLegRomanianDeadliftWithDumbbell"; break;
    case DeadliftExerciseName::SumoDeadlift                         : debug << "SumoDeadlift"; break;
    case DeadliftExerciseName::SumoDeadliftHighPull                 : debug << "SumoDeadliftHighPull"; break;
    case DeadliftExerciseName::TrapBarDeadlift                      : debug << "TrapBarDeadlift"; break;
    case DeadliftExerciseName::WideGripBarbellDeadlift              : debug << "WideGripBarbellDeadlift"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const FlyeExerciseName value)
{
    switch (value) {
    case FlyeExerciseName::CableCrossover                   : debug << "CableCrossover"; break;
    case FlyeExerciseName::DeclineDumbbellFlye              : debug << "DeclineDumbbellFlye"; break;
    case FlyeExerciseName::DumbbellFlye                     : debug << "DumbbellFlye"; break;
    case FlyeExerciseName::InclineDumbbellFlye              : debug << "InclineDumbbellFlye"; break;
    case FlyeExerciseName::KettlebellFlye                   : debug << "KettlebellFlye"; break;
    case FlyeExerciseName::KneelingRearFlye                 : debug << "KneelingRearFlye"; break;
    case FlyeExerciseName::SingleArmStandingCableReverseFlye: debug << "SingleArmStandingCableReverseFlye"; break;
    case FlyeExerciseName::SwissBallDumbbellFlye            : debug << "SwissBallDumbbellFlye"; break;
    case FlyeExerciseName::ArmRotations                     : debug << "ArmRotations"; break;
    case FlyeExerciseName::HugATree                         : debug << "HugATree"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const HipRaiseExerciseName value)
{
    switch (value) {
    case HipRaiseExerciseName::BarbellHipThrustOnFloor                        : debug << "BarbellHipThrustOnFloor"; break;
    case HipRaiseExerciseName::BarbellHipThrustWithBench                      : debug << "BarbellHipThrustWithBench"; break;
    case HipRaiseExerciseName::BentKneeSwissBallReverseHipRaise               : debug << "BentKneeSwissBallReverseHipRaise"; break;
    case HipRaiseExerciseName::WeightedBentKneeSwissBallReverseHipRaise       : debug << "WeightedBentKneeSwissBallReverseHipRaise"; break;
    case HipRaiseExerciseName::BridgeWithLegExtension                         : debug << "BridgeWithLegExtension"; break;
    case HipRaiseExerciseName::WeightedBridgeWithLegExtension                 : debug << "WeightedBridgeWithLegExtension"; break;
    case HipRaiseExerciseName::ClamBridge                                     : debug << "ClamBridge"; break;
    case HipRaiseExerciseName::FrontKickTabletop                              : debug << "FrontKickTabletop"; break;
    case HipRaiseExerciseName::WeightedFrontKickTabletop                      : debug << "WeightedFrontKickTabletop"; break;
    case HipRaiseExerciseName::HipExtensionAndCross                           : debug << "HipExtensionAndCross"; break;
    case HipRaiseExerciseName::WeightedHipExtensionAndCross                   : debug << "WeightedHipExtensionAndCross"; break;
    case HipRaiseExerciseName::HipRaise                                       : debug << "HipRaise"; break;
    case HipRaiseExerciseName::WeightedHipRaise                               : debug << "WeightedHipRaise"; break;
    case HipRaiseExerciseName::HipRaiseWithFeetOnSwissBall                    : debug << "HipRaiseWithFeetOnSwissBall"; break;
    case HipRaiseExerciseName::WeightedHipRaiseWithFeetOnSwissBall            : debug << "WeightedHipRaiseWithFeetOnSwissBall"; break;
    case HipRaiseExerciseName::HipRaiseWithHeadOnBosuBall                     : debug << "HipRaiseWithHeadOnBosuBall"; break;
    case HipRaiseExerciseName::WeightedHipRaiseWithHeadOnBosuBall             : debug << "WeightedHipRaiseWithHeadOnBosuBall"; break;
    case HipRaiseExerciseName::HipRaiseWithHeadOnSwissBall                    : debug << "HipRaiseWithHeadOnSwissBall"; break;
    case HipRaiseExerciseName::WeightedHipRaiseWithHeadOnSwissBall            : debug << "WeightedHipRaiseWithHeadOnSwissBall"; break;
    case HipRaiseExerciseName::HipRaiseWithKneeSqueeze                        : debug << "HipRaiseWithKneeSqueeze"; break;
    case HipRaiseExerciseName::WeightedHipRaiseWithKneeSqueeze                : debug << "WeightedHipRaiseWithKneeSqueeze"; break;
    case HipRaiseExerciseName::InclineRearLegExtension                        : debug << "InclineRearLegExtension"; break;
    case HipRaiseExerciseName::WeightedInclineRearLegExtension                : debug << "WeightedInclineRearLegExtension"; break;
    case HipRaiseExerciseName::KettlebellSwing                                : debug << "KettlebellSwing"; break;
    case HipRaiseExerciseName::MarchingHipRaise                               : debug << "MarchingHipRaise"; break;
    case HipRaiseExerciseName::WeightedMarchingHipRaise                       : debug << "WeightedMarchingHipRaise"; break;
    case HipRaiseExerciseName::MarchingHipRaiseWithFeetOnASwissBall           : debug << "MarchingHipRaiseWithFeetOnASwissBall"; break;
    case HipRaiseExerciseName::WeightedMarchingHipRaiseWithFeetOnASwissBall   : debug << "WeightedMarchingHipRaiseWithFeetOnASwissBall"; break;
    case HipRaiseExerciseName::ReverseHipRaise                                : debug << "ReverseHipRaise"; break;
    case HipRaiseExerciseName::WeightedReverseHipRaise                        : debug << "WeightedReverseHipRaise"; break;
    case HipRaiseExerciseName::SingleLegHipRaise                              : debug << "SingleLegHipRaise"; break;
    case HipRaiseExerciseName::WeightedSingleLegHipRaise                      : debug << "WeightedSingleLegHipRaise"; break;
    case HipRaiseExerciseName::SingleLegHipRaiseWithFootOnBench               : debug << "SingleLegHipRaiseWithFootOnBench"; break;
    case HipRaiseExerciseName::WeightedSingleLegHipRaiseWithFootOnBench       : debug << "WeightedSingleLegHipRaiseWithFootOnBench"; break;
    case HipRaiseExerciseName::SingleLegHipRaiseWithFootOnBosuBall            : debug << "SingleLegHipRaiseWithFootOnBosuBall"; break;
    case HipRaiseExerciseName::WeightedSingleLegHipRaiseWithFootOnBosuBall    : debug << "WeightedSingleLegHipRaiseWithFootOnBosuBall"; break;
    case HipRaiseExerciseName::SingleLegHipRaiseWithFootOnFoamRoller          : debug << "SingleLegHipRaiseWithFootOnFoamRoller"; break;
    case HipRaiseExerciseName::WeightedSingleLegHipRaiseWithFootOnFoamRoller  : debug << "WeightedSingleLegHipRaiseWithFootOnFoamRoller"; break;
    case HipRaiseExerciseName::SingleLegHipRaiseWithFootOnMedicineBall        : debug << "SingleLegHipRaiseWithFootOnMedicineBall"; break;
    case HipRaiseExerciseName::WeightedSingleLegHipRaiseWithFootOnMedicineBall: debug << "WeightedSingleLegHipRaiseWithFootOnMedicineBall"; break;
    case HipRaiseExerciseName::SingleLegHipRaiseWithHeadOnBosuBall            : debug << "SingleLegHipRaiseWithHeadOnBosuBall"; break;
    case HipRaiseExerciseName::WeightedSingleLegHipRaiseWithHeadOnBosuBall    : debug << "WeightedSingleLegHipRaiseWithHeadOnBosuBall"; break;
    case HipRaiseExerciseName::WeightedClamBridge                             : debug << "WeightedClamBridge"; break;
    case HipRaiseExerciseName::SingleLegSwissBallHipRaiseAndLegCurl           : debug << "SingleLegSwissBallHipRaiseAndLegCurl"; break;
    case HipRaiseExerciseName::Clams                                          : debug << "Clams"; break;
    case HipRaiseExerciseName::InnerThighCircles                              : debug << "InnerThighCircles"; break;
    case HipRaiseExerciseName::InnerThighSideLift                             : debug << "InnerThighSideLift"; break;
    case HipRaiseExerciseName::LegCircles                                     : debug << "LegCircles"; break;
    case HipRaiseExerciseName::LegLift                                        : debug << "LegLift"; break;
    case HipRaiseExerciseName::LegLiftInExternalRotation                      : debug << "LegLiftInExternalRotation"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const HipStabilityExerciseName value)
{
    switch (value) {
    case HipStabilityExerciseName::BandSideLyingLegRaise            : debug << "BandSideLyingLegRaise"; break;
    case HipStabilityExerciseName::DeadBug                          : debug << "DeadBug"; break;
    case HipStabilityExerciseName::WeightedDeadBug                  : debug << "WeightedDeadBug"; break;
    case HipStabilityExerciseName::ExternalHipRaise                 : debug << "ExternalHipRaise"; break;
    case HipStabilityExerciseName::WeightedExternalHipRaise         : debug << "WeightedExternalHipRaise"; break;
    case HipStabilityExerciseName::FireHydrantKicks                 : debug << "FireHydrantKicks"; break;
    case HipStabilityExerciseName::WeightedFireHydrantKicks         : debug << "WeightedFireHydrantKicks"; break;
    case HipStabilityExerciseName::HipCircles                       : debug << "HipCircles"; break;
    case HipStabilityExerciseName::WeightedHipCircles               : debug << "WeightedHipCircles"; break;
    case HipStabilityExerciseName::InnerThighLift                   : debug << "InnerThighLift"; break;
    case HipStabilityExerciseName::WeightedInnerThighLift           : debug << "WeightedInnerThighLift"; break;
    case HipStabilityExerciseName::LateralWalksWithBandAtAnkles     : debug << "LateralWalksWithBandAtAnkles"; break;
    case HipStabilityExerciseName::PretzelSideKick                  : debug << "PretzelSideKick"; break;
    case HipStabilityExerciseName::WeightedPretzelSideKick          : debug << "WeightedPretzelSideKick"; break;
    case HipStabilityExerciseName::ProneHipInternalRotation         : debug << "ProneHipInternalRotation"; break;
    case HipStabilityExerciseName::WeightedProneHipInternalRotation : debug << "WeightedProneHipInternalRotation"; break;
    case HipStabilityExerciseName::Quadruped                        : debug << "Quadruped"; break;
    case HipStabilityExerciseName::QuadrupedHipExtension            : debug << "QuadrupedHipExtension"; break;
    case HipStabilityExerciseName::WeightedQuadrupedHipExtension    : debug << "WeightedQuadrupedHipExtension"; break;
    case HipStabilityExerciseName::QuadrupedWithLegLift             : debug << "QuadrupedWithLegLift"; break;
    case HipStabilityExerciseName::WeightedQuadrupedWithLegLift     : debug << "WeightedQuadrupedWithLegLift"; break;
    case HipStabilityExerciseName::SideLyingLegRaise                : debug << "SideLyingLegRaise"; break;
    case HipStabilityExerciseName::WeightedSideLyingLegRaise        : debug << "WeightedSideLyingLegRaise"; break;
    case HipStabilityExerciseName::SlidingHipAdduction              : debug << "SlidingHipAdduction"; break;
    case HipStabilityExerciseName::WeightedSlidingHipAdduction      : debug << "WeightedSlidingHipAdduction"; break;
    case HipStabilityExerciseName::StandingAdduction                : debug << "StandingAdduction"; break;
    case HipStabilityExerciseName::WeightedStandingAdduction        : debug << "WeightedStandingAdduction"; break;
    case HipStabilityExerciseName::StandingCableHipAbduction        : debug << "StandingCableHipAbduction"; break;
    case HipStabilityExerciseName::StandingHipAbduction             : debug << "StandingHipAbduction"; break;
    case HipStabilityExerciseName::WeightedStandingHipAbduction     : debug << "WeightedStandingHipAbduction"; break;
    case HipStabilityExerciseName::StandingRearLegRaise             : debug << "StandingRearLegRaise"; break;
    case HipStabilityExerciseName::WeightedStandingRearLegRaise     : debug << "WeightedStandingRearLegRaise"; break;
    case HipStabilityExerciseName::SupineHipInternalRotation        : debug << "SupineHipInternalRotation"; break;
    case HipStabilityExerciseName::WeightedSupineHipInternalRotation: debug << "WeightedSupineHipInternalRotation"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const HipSwingExerciseName value)
{
    switch (value) {
    case HipSwingExerciseName::SingleArmKettlebellSwing: debug << "SingleArmKettlebellSwing"; break;
    case HipSwingExerciseName::SingleArmDumbbellSwing  : debug << "SingleArmDumbbellSwing"; break;
    case HipSwingExerciseName::StepOutSwing            : debug << "StepOutSwing"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const HyperextensionExerciseName value)
{
    switch (value) {
    case HyperextensionExerciseName::BackExtensionWithOppositeArmAndLegReach        : debug << "BackExtensionWithOppositeArmAndLegReach"; break;
    case HyperextensionExerciseName::WeightedBackExtensionWithOppositeArmAndLegReach: debug << "WeightedBackExtensionWithOppositeArmAndLegReach"; break;
    case HyperextensionExerciseName::BaseRotations                                  : debug << "BaseRotations"; break;
    case HyperextensionExerciseName::WeightedBaseRotations                          : debug << "WeightedBaseRotations"; break;
    case HyperextensionExerciseName::BentKneeReverseHyperextension                  : debug << "BentKneeReverseHyperextension"; break;
    case HyperextensionExerciseName::WeightedBentKneeReverseHyperextension          : debug << "WeightedBentKneeReverseHyperextension"; break;
    case HyperextensionExerciseName::HollowHoldAndRoll                              : debug << "HollowHoldAndRoll"; break;
    case HyperextensionExerciseName::WeightedHollowHoldAndRoll                      : debug << "WeightedHollowHoldAndRoll"; break;
    case HyperextensionExerciseName::Kicks                                          : debug << "Kicks"; break;
    case HyperextensionExerciseName::WeightedKicks                                  : debug << "WeightedKicks"; break;
    case HyperextensionExerciseName::KneeRaises                                     : debug << "KneeRaises"; break;
    case HyperextensionExerciseName::WeightedKneeRaises                             : debug << "WeightedKneeRaises"; break;
    case HyperextensionExerciseName::KneelingSuperman                               : debug << "KneelingSuperman"; break;
    case HyperextensionExerciseName::WeightedKneelingSuperman                       : debug << "WeightedKneelingSuperman"; break;
    case HyperextensionExerciseName::LatPullDownWithRow                             : debug << "LatPullDownWithRow"; break;
    case HyperextensionExerciseName::MedicineBallDeadliftToReach                    : debug << "MedicineBallDeadliftToReach"; break;
    case HyperextensionExerciseName::OneArmOneLegRow                                : debug << "OneArmOneLegRow"; break;
    case HyperextensionExerciseName::OneArmRowWithBand                              : debug << "OneArmRowWithBand"; break;
    case HyperextensionExerciseName::OverheadLungeWithMedicineBall                  : debug << "OverheadLungeWithMedicineBall"; break;
    case HyperextensionExerciseName::PlankKneeTucks                                 : debug << "PlankKneeTucks"; break;
    case HyperextensionExerciseName::WeightedPlankKneeTucks                         : debug << "WeightedPlankKneeTucks"; break;
    case HyperextensionExerciseName::SideStep                                       : debug << "SideStep"; break;
    case HyperextensionExerciseName::WeightedSideStep                               : debug << "WeightedSideStep"; break;
    case HyperextensionExerciseName::SingleLegBackExtension                         : debug << "SingleLegBackExtension"; break;
    case HyperextensionExerciseName::WeightedSingleLegBackExtension                 : debug << "WeightedSingleLegBackExtension"; break;
    case HyperextensionExerciseName::SpineExtension                                 : debug << "SpineExtension"; break;
    case HyperextensionExerciseName::WeightedSpineExtension                         : debug << "WeightedSpineExtension"; break;
    case HyperextensionExerciseName::StaticBackExtension                            : debug << "StaticBackExtension"; break;
    case HyperextensionExerciseName::WeightedStaticBackExtension                    : debug << "WeightedStaticBackExtension"; break;
    case HyperextensionExerciseName::SupermanFromFloor                              : debug << "SupermanFromFloor"; break;
    case HyperextensionExerciseName::WeightedSupermanFromFloor                      : debug << "WeightedSupermanFromFloor"; break;
    case HyperextensionExerciseName::SwissBallBackExtension                         : debug << "SwissBallBackExtension"; break;
    case HyperextensionExerciseName::WeightedSwissBallBackExtension                 : debug << "WeightedSwissBallBackExtension"; break;
    case HyperextensionExerciseName::SwissBallHyperextension                        : debug << "SwissBallHyperextension"; break;
    case HyperextensionExerciseName::WeightedSwissBallHyperextension                : debug << "WeightedSwissBallHyperextension"; break;
    case HyperextensionExerciseName::SwissBallOppositeArmAndLegLift                 : debug << "SwissBallOppositeArmAndLegLift"; break;
    case HyperextensionExerciseName::WeightedSwissBallOppositeArmAndLegLift         : debug << "WeightedSwissBallOppositeArmAndLegLift"; break;
    case HyperextensionExerciseName::SupermanOnSwissBall                            : debug << "SupermanOnSwissBall"; break;
    case HyperextensionExerciseName::Cobra                                          : debug << "Cobra"; break;
    case HyperextensionExerciseName::SupineFloorBarre                               : debug << "SupineFloorBarre"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const LateralRaiseExerciseName value)
{
    switch (value) {
    case LateralRaiseExerciseName::FortyFiveDegreeCableExternalRotation : debug << "FortyFiveDegreeCableExternalRotation"; break;
    case LateralRaiseExerciseName::AlternatingLateralRaiseWithStaticHold: debug << "AlternatingLateralRaiseWithStaticHold"; break;
    case LateralRaiseExerciseName::BarMuscleUp                          : debug << "BarMuscleUp"; break;
    case LateralRaiseExerciseName::BentOverLateralRaise                 : debug << "BentOverLateralRaise"; break;
    case LateralRaiseExerciseName::CableDiagonalRaise                   : debug << "CableDiagonalRaise"; break;
    case LateralRaiseExerciseName::CableFrontRaise                      : debug << "CableFrontRaise"; break;
    case LateralRaiseExerciseName::CalorieRow                           : debug << "CalorieRow"; break;
    case LateralRaiseExerciseName::ComboShoulderRaise                   : debug << "ComboShoulderRaise"; break;
    case LateralRaiseExerciseName::DumbbellDiagonalRaise                : debug << "DumbbellDiagonalRaise"; break;
    case LateralRaiseExerciseName::DumbbellVRaise                       : debug << "DumbbellVRaise"; break;
    case LateralRaiseExerciseName::FrontRaise                           : debug << "FrontRaise"; break;
    case LateralRaiseExerciseName::LeaningDumbbellLateralRaise          : debug << "LeaningDumbbellLateralRaise"; break;
    case LateralRaiseExerciseName::LyingDumbbellRaise                   : debug << "LyingDumbbellRaise"; break;
    case LateralRaiseExerciseName::MuscleUp                             : debug << "MuscleUp"; break;
    case LateralRaiseExerciseName::OneArmCableLateralRaise              : debug << "OneArmCableLateralRaise"; break;
    case LateralRaiseExerciseName::OverhandGripRearLateralRaise         : debug << "OverhandGripRearLateralRaise"; break;
    case LateralRaiseExerciseName::PlateRaises                          : debug << "PlateRaises"; break;
    case LateralRaiseExerciseName::RingDip                              : debug << "RingDip"; break;
    case LateralRaiseExerciseName::WeightedRingDip                      : debug << "WeightedRingDip"; break;
    case LateralRaiseExerciseName::RingMuscleUp                         : debug << "RingMuscleUp"; break;
    case LateralRaiseExerciseName::WeightedRingMuscleUp                 : debug << "WeightedRingMuscleUp"; break;
    case LateralRaiseExerciseName::RopeClimb                            : debug << "RopeClimb"; break;
    case LateralRaiseExerciseName::WeightedRopeClimb                    : debug << "WeightedRopeClimb"; break;
    case LateralRaiseExerciseName::Scaption                             : debug << "Scaption"; break;
    case LateralRaiseExerciseName::SeatedLateralRaise                   : debug << "SeatedLateralRaise"; break;
    case LateralRaiseExerciseName::SeatedRearLateralRaise               : debug << "SeatedRearLateralRaise"; break;
    case LateralRaiseExerciseName::SideLyingLateralRaise                : debug << "SideLyingLateralRaise"; break;
    case LateralRaiseExerciseName::StandingLift                         : debug << "StandingLift"; break;
    case LateralRaiseExerciseName::SuspendedRow                         : debug << "SuspendedRow"; break;
    case LateralRaiseExerciseName::UnderhandGripRearLateralRaise        : debug << "UnderhandGripRearLateralRaise"; break;
    case LateralRaiseExerciseName::WallSlide                            : debug << "WallSlide"; break;
    case LateralRaiseExerciseName::WeightedWallSlide                    : debug << "WeightedWallSlide"; break;
    case LateralRaiseExerciseName::ArmCircles                           : debug << "ArmCircles"; break;
    case LateralRaiseExerciseName::ShavingTheHead                       : debug << "ShavingTheHead"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const LegCurlExerciseName value)
{
    switch (value) {
    case LegCurlExerciseName::LegCurl                    : debug << "LegCurl"; break;
    case LegCurlExerciseName::WeightedLegCurl            : debug << "WeightedLegCurl"; break;
    case LegCurlExerciseName::GoodMorning                : debug << "GoodMorning"; break;
    case LegCurlExerciseName::SeatedBarbellGoodMorning   : debug << "SeatedBarbellGoodMorning"; break;
    case LegCurlExerciseName::SingleLegBarbellGoodMorning: debug << "SingleLegBarbellGoodMorning"; break;
    case LegCurlExerciseName::SingleLegSlidingLegCurl    : debug << "SingleLegSlidingLegCurl"; break;
    case LegCurlExerciseName::SlidingLegCurl             : debug << "SlidingLegCurl"; break;
    case LegCurlExerciseName::SplitBarbellGoodMorning    : debug << "SplitBarbellGoodMorning"; break;
    case LegCurlExerciseName::SplitStanceExtension       : debug << "SplitStanceExtension"; break;
    case LegCurlExerciseName::StaggeredStanceGoodMorning : debug << "StaggeredStanceGoodMorning"; break;
    case LegCurlExerciseName::SwissBallHipRaiseAndLegCurl: debug << "SwissBallHipRaiseAndLegCurl"; break;
    case LegCurlExerciseName::ZercherGoodMorning         : debug << "ZercherGoodMorning"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const LegRaiseExerciseName value)
{
    switch (value) {
    case LegRaiseExerciseName::HangingKneeRaise                  : debug << "HangingKneeRaise"; break;
    case LegRaiseExerciseName::HangingLegRaise                   : debug << "HangingLegRaise"; break;
    case LegRaiseExerciseName::WeightedHangingLegRaise           : debug << "WeightedHangingLegRaise"; break;
    case LegRaiseExerciseName::HangingSingleLegRaise             : debug << "HangingSingleLegRaise"; break;
    case LegRaiseExerciseName::WeightedHangingSingleLegRaise     : debug << "WeightedHangingSingleLegRaise"; break;
    case LegRaiseExerciseName::KettlebellLegRaises               : debug << "KettlebellLegRaises"; break;
    case LegRaiseExerciseName::LegLoweringDrill                  : debug << "LegLoweringDrill"; break;
    case LegRaiseExerciseName::WeightedLegLoweringDrill          : debug << "WeightedLegLoweringDrill"; break;
    case LegRaiseExerciseName::LyingStraightLegRaise             : debug << "LyingStraightLegRaise"; break;
    case LegRaiseExerciseName::WeightedLyingStraightLegRaise     : debug << "WeightedLyingStraightLegRaise"; break;
    case LegRaiseExerciseName::MedicineBallLegDrops              : debug << "MedicineBallLegDrops"; break;
    case LegRaiseExerciseName::QuadrupedLegRaise                 : debug << "QuadrupedLegRaise"; break;
    case LegRaiseExerciseName::WeightedQuadrupedLegRaise         : debug << "WeightedQuadrupedLegRaise"; break;
    case LegRaiseExerciseName::ReverseLegRaise                   : debug << "ReverseLegRaise"; break;
    case LegRaiseExerciseName::WeightedReverseLegRaise           : debug << "WeightedReverseLegRaise"; break;
    case LegRaiseExerciseName::ReverseLegRaiseOnSwissBall        : debug << "ReverseLegRaiseOnSwissBall"; break;
    case LegRaiseExerciseName::WeightedReverseLegRaiseOnSwissBall: debug << "WeightedReverseLegRaiseOnSwissBall"; break;
    case LegRaiseExerciseName::SingleLegLoweringDrill            : debug << "SingleLegLoweringDrill"; break;
    case LegRaiseExerciseName::WeightedSingleLegLoweringDrill    : debug << "WeightedSingleLegLoweringDrill"; break;
    case LegRaiseExerciseName::WeightedHangingKneeRaise          : debug << "WeightedHangingKneeRaise"; break;
    case LegRaiseExerciseName::LateralStepover                   : debug << "LateralStepover"; break;
    case LegRaiseExerciseName::WeightedLateralStepover           : debug << "WeightedLateralStepover"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const LungeExerciseName value)
{
    switch (value) {
    case LungeExerciseName::OverheadLunge                                : debug << "OverheadLunge"; break;
    case LungeExerciseName::LungeMatrix                                  : debug << "LungeMatrix"; break;
    case LungeExerciseName::WeightedLungeMatrix                          : debug << "WeightedLungeMatrix"; break;
    case LungeExerciseName::AlternatingBarbellForwardLunge               : debug << "AlternatingBarbellForwardLunge"; break;
    case LungeExerciseName::AlternatingDumbbellLungeWithReach            : debug << "AlternatingDumbbellLungeWithReach"; break;
    case LungeExerciseName::BackFootElevatedDumbbellSplitSquat           : debug << "BackFootElevatedDumbbellSplitSquat"; break;
    case LungeExerciseName::BarbellBoxLunge                              : debug << "BarbellBoxLunge"; break;
    case LungeExerciseName::BarbellBulgarianSplitSquat                   : debug << "BarbellBulgarianSplitSquat"; break;
    case LungeExerciseName::BarbellCrossoverLunge                        : debug << "BarbellCrossoverLunge"; break;
    case LungeExerciseName::BarbellFrontSplitSquat                       : debug << "BarbellFrontSplitSquat"; break;
    case LungeExerciseName::BarbellLunge                                 : debug << "BarbellLunge"; break;
    case LungeExerciseName::BarbellReverseLunge                          : debug << "BarbellReverseLunge"; break;
    case LungeExerciseName::BarbellSideLunge                             : debug << "BarbellSideLunge"; break;
    case LungeExerciseName::BarbellSplitSquat                            : debug << "BarbellSplitSquat"; break;
    case LungeExerciseName::CoreControlRearLunge                         : debug << "CoreControlRearLunge"; break;
    case LungeExerciseName::DiagonalLunge                                : debug << "DiagonalLunge"; break;
    case LungeExerciseName::DropLunge                                    : debug << "DropLunge"; break;
    case LungeExerciseName::DumbbellBoxLunge                             : debug << "DumbbellBoxLunge"; break;
    case LungeExerciseName::DumbbellBulgarianSplitSquat                  : debug << "DumbbellBulgarianSplitSquat"; break;
    case LungeExerciseName::DumbbellCrossoverLunge                       : debug << "DumbbellCrossoverLunge"; break;
    case LungeExerciseName::DumbbellDiagonalLunge                        : debug << "DumbbellDiagonalLunge"; break;
    case LungeExerciseName::DumbbellLunge                                : debug << "DumbbellLunge"; break;
    case LungeExerciseName::DumbbellLungeAndRotation                     : debug << "DumbbellLungeAndRotation"; break;
    case LungeExerciseName::DumbbellOverheadBulgarianSplitSquat          : debug << "DumbbellOverheadBulgarianSplitSquat"; break;
    case LungeExerciseName::DumbbellReverseLungeToHighKneeAndPress       : debug << "DumbbellReverseLungeToHighKneeAndPress"; break;
    case LungeExerciseName::DumbbellSideLunge                            : debug << "DumbbellSideLunge"; break;
    case LungeExerciseName::ElevatedFrontFootBarbellSplitSquat           : debug << "ElevatedFrontFootBarbellSplitSquat"; break;
    case LungeExerciseName::FrontFootElevatedDumbbellSplitSquat          : debug << "FrontFootElevatedDumbbellSplitSquat"; break;
    case LungeExerciseName::GunslingerLunge                              : debug << "GunslingerLunge"; break;
    case LungeExerciseName::LawnmowerLunge                               : debug << "LawnmowerLunge"; break;
    case LungeExerciseName::LowLungeWithIsometricAdduction               : debug << "LowLungeWithIsometricAdduction"; break;
    case LungeExerciseName::LowSideToSideLunge                           : debug << "LowSideToSideLunge"; break;
    case LungeExerciseName::Lunge                                        : debug << "Lunge"; break;
    case LungeExerciseName::WeightedLunge                                : debug << "WeightedLunge"; break;
    case LungeExerciseName::LungeWithArmReach                            : debug << "LungeWithArmReach"; break;
    case LungeExerciseName::LungeWithDiagonalReach                       : debug << "LungeWithDiagonalReach"; break;
    case LungeExerciseName::LungeWithSideBend                            : debug << "LungeWithSideBend"; break;
    case LungeExerciseName::OffsetDumbbellLunge                          : debug << "OffsetDumbbellLunge"; break;
    case LungeExerciseName::OffsetDumbbellReverseLunge                   : debug << "OffsetDumbbellReverseLunge"; break;
    case LungeExerciseName::OverheadBulgarianSplitSquat                  : debug << "OverheadBulgarianSplitSquat"; break;
    case LungeExerciseName::OverheadDumbbellReverseLunge                 : debug << "OverheadDumbbellReverseLunge"; break;
    case LungeExerciseName::OverheadDumbbellSplitSquat                   : debug << "OverheadDumbbellSplitSquat"; break;
    case LungeExerciseName::OverheadLungeWithRotation                    : debug << "OverheadLungeWithRotation"; break;
    case LungeExerciseName::ReverseBarbellBoxLunge                       : debug << "ReverseBarbellBoxLunge"; break;
    case LungeExerciseName::ReverseBoxLunge                              : debug << "ReverseBoxLunge"; break;
    case LungeExerciseName::ReverseDumbbellBoxLunge                      : debug << "ReverseDumbbellBoxLunge"; break;
    case LungeExerciseName::ReverseDumbbellCrossoverLunge                : debug << "ReverseDumbbellCrossoverLunge"; break;
    case LungeExerciseName::ReverseDumbbellDiagonalLunge                 : debug << "ReverseDumbbellDiagonalLunge"; break;
    case LungeExerciseName::ReverseLungeWithReachBack                    : debug << "ReverseLungeWithReachBack"; break;
    case LungeExerciseName::WeightedReverseLungeWithReachBack            : debug << "WeightedReverseLungeWithReachBack"; break;
    case LungeExerciseName::ReverseLungeWithTwistAndOverheadReach        : debug << "ReverseLungeWithTwistAndOverheadReach"; break;
    case LungeExerciseName::WeightedReverseLungeWithTwistAndOverheadReach: debug << "WeightedReverseLungeWithTwistAndOverheadReach"; break;
    case LungeExerciseName::ReverseSlidingBoxLunge                       : debug << "ReverseSlidingBoxLunge"; break;
    case LungeExerciseName::WeightedReverseSlidingBoxLunge               : debug << "WeightedReverseSlidingBoxLunge"; break;
    case LungeExerciseName::ReverseSlidingLunge                          : debug << "ReverseSlidingLunge"; break;
    case LungeExerciseName::WeightedReverseSlidingLunge                  : debug << "WeightedReverseSlidingLunge"; break;
    case LungeExerciseName::RunnersLungeToBalance                        : debug << "RunnersLungeToBalance"; break;
    case LungeExerciseName::WeightedRunnersLungeToBalance                : debug << "WeightedRunnersLungeToBalance"; break;
    case LungeExerciseName::ShiftingSideLunge                            : debug << "ShiftingSideLunge"; break;
    case LungeExerciseName::SideAndCrossoverLunge                        : debug << "SideAndCrossoverLunge"; break;
    case LungeExerciseName::WeightedSideAndCrossoverLunge                : debug << "WeightedSideAndCrossoverLunge"; break;
    case LungeExerciseName::SideLunge                                    : debug << "SideLunge"; break;
    case LungeExerciseName::WeightedSideLunge                            : debug << "WeightedSideLunge"; break;
    case LungeExerciseName::SideLungeAndPress                            : debug << "SideLungeAndPress"; break;
    case LungeExerciseName::SideLungeJumpOff                             : debug << "SideLungeJumpOff"; break;
    case LungeExerciseName::SideLungeSweep                               : debug << "SideLungeSweep"; break;
    case LungeExerciseName::WeightedSideLungeSweep                       : debug << "WeightedSideLungeSweep"; break;
    case LungeExerciseName::SideLungeToCrossoverTap                      : debug << "SideLungeToCrossoverTap"; break;
    case LungeExerciseName::WeightedSideLungeToCrossoverTap              : debug << "WeightedSideLungeToCrossoverTap"; break;
    case LungeExerciseName::SideToSideLungeChops                         : debug << "SideToSideLungeChops"; break;
    case LungeExerciseName::WeightedSideToSideLungeChops                 : debug << "WeightedSideToSideLungeChops"; break;
    case LungeExerciseName::SiffJumpLunge                                : debug << "SiffJumpLunge"; break;
    case LungeExerciseName::WeightedSiffJumpLunge                        : debug << "WeightedSiffJumpLunge"; break;
    case LungeExerciseName::SingleArmReverseLungeAndPress                : debug << "SingleArmReverseLungeAndPress"; break;
    case LungeExerciseName::SlidingLateralLunge                          : debug << "SlidingLateralLunge"; break;
    case LungeExerciseName::WeightedSlidingLateralLunge                  : debug << "WeightedSlidingLateralLunge"; break;
    case LungeExerciseName::WalkingBarbellLunge                          : debug << "WalkingBarbellLunge"; break;
    case LungeExerciseName::WalkingDumbbellLunge                         : debug << "WalkingDumbbellLunge"; break;
    case LungeExerciseName::WalkingLunge                                 : debug << "WalkingLunge"; break;
    case LungeExerciseName::WeightedWalkingLunge                         : debug << "WeightedWalkingLunge"; break;
    case LungeExerciseName::WideGripOverheadBarbellSplitSquat            : debug << "WideGripOverheadBarbellSplitSquat"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const OlympicLiftExerciseName value)
{
    switch (value) {
    case OlympicLiftExerciseName::BarbellHangPowerClean     : debug << "BarbellHangPowerClean"; break;
    case OlympicLiftExerciseName::BarbellHangSquatClean     : debug << "BarbellHangSquatClean"; break;
    case OlympicLiftExerciseName::BarbellPowerClean         : debug << "BarbellPowerClean"; break;
    case OlympicLiftExerciseName::BarbellPowerSnatch        : debug << "BarbellPowerSnatch"; break;
    case OlympicLiftExerciseName::BarbellSquatClean         : debug << "BarbellSquatClean"; break;
    case OlympicLiftExerciseName::CleanAndJerk              : debug << "CleanAndJerk"; break;
    case OlympicLiftExerciseName::BarbellHangPowerSnatch    : debug << "BarbellHangPowerSnatch"; break;
    case OlympicLiftExerciseName::BarbellHangPull           : debug << "BarbellHangPull"; break;
    case OlympicLiftExerciseName::BarbellHighPull           : debug << "BarbellHighPull"; break;
    case OlympicLiftExerciseName::BarbellSnatch             : debug << "BarbellSnatch"; break;
    case OlympicLiftExerciseName::BarbellSplitJerk          : debug << "BarbellSplitJerk"; break;
    case OlympicLiftExerciseName::Clean                     : debug << "Clean"; break;
    case OlympicLiftExerciseName::DumbbellClean             : debug << "DumbbellClean"; break;
    case OlympicLiftExerciseName::DumbbellHangPull          : debug << "DumbbellHangPull"; break;
    case OlympicLiftExerciseName::OneHandDumbbellSplitSnatch: debug << "OneHandDumbbellSplitSnatch"; break;
    case OlympicLiftExerciseName::PushJerk                  : debug << "PushJerk"; break;
    case OlympicLiftExerciseName::SingleArmDumbbellSnatch   : debug << "SingleArmDumbbellSnatch"; break;
    case OlympicLiftExerciseName::SingleArmHangSnatch       : debug << "SingleArmHangSnatch"; break;
    case OlympicLiftExerciseName::SingleArmKettlebellSnatch : debug << "SingleArmKettlebellSnatch"; break;
    case OlympicLiftExerciseName::SplitJerk                 : debug << "SplitJerk"; break;
    case OlympicLiftExerciseName::SquatCleanAndJerk         : debug << "SquatCleanAndJerk"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const PlankExerciseName value)
{
    switch (value) {
    case PlankExerciseName::FortyFiveDegreePlank                            : debug << "FortyFiveDegreePlank"; break;
    case PlankExerciseName::Weighted45DegreePlank                           : debug << "Weighted45DegreePlank"; break;
    case PlankExerciseName::NinetyDegreeStaticHold                          : debug << "NinetyDegreeStaticHold"; break;
    case PlankExerciseName::Weighted90DegreeStaticHold                      : debug << "Weighted90DegreeStaticHold"; break;
    case PlankExerciseName::BearCrawl                                       : debug << "BearCrawl"; break;
    case PlankExerciseName::WeightedBearCrawl                               : debug << "WeightedBearCrawl"; break;
    case PlankExerciseName::CrossBodyMountainClimber                        : debug << "CrossBodyMountainClimber"; break;
    case PlankExerciseName::WeightedCrossBodyMountainClimber                : debug << "WeightedCrossBodyMountainClimber"; break;
    case PlankExerciseName::ElbowPlankPikeJacks                             : debug << "ElbowPlankPikeJacks"; break;
    case PlankExerciseName::WeightedElbowPlankPikeJacks                     : debug << "WeightedElbowPlankPikeJacks"; break;
    case PlankExerciseName::ElevatedFeetPlank                               : debug << "ElevatedFeetPlank"; break;
    case PlankExerciseName::WeightedElevatedFeetPlank                       : debug << "WeightedElevatedFeetPlank"; break;
    case PlankExerciseName::ElevatorAbs                                     : debug << "ElevatorAbs"; break;
    case PlankExerciseName::WeightedElevatorAbs                             : debug << "WeightedElevatorAbs"; break;
    case PlankExerciseName::ExtendedPlank                                   : debug << "ExtendedPlank"; break;
    case PlankExerciseName::WeightedExtendedPlank                           : debug << "WeightedExtendedPlank"; break;
    case PlankExerciseName::FullPlankPasseTwist                             : debug << "FullPlankPasseTwist"; break;
    case PlankExerciseName::WeightedFullPlankPasseTwist                     : debug << "WeightedFullPlankPasseTwist"; break;
    case PlankExerciseName::InchingElbowPlank                               : debug << "InchingElbowPlank"; break;
    case PlankExerciseName::WeightedInchingElbowPlank                       : debug << "WeightedInchingElbowPlank"; break;
    case PlankExerciseName::InchwormToSidePlank                             : debug << "InchwormToSidePlank"; break;
    case PlankExerciseName::WeightedInchwormToSidePlank                     : debug << "WeightedInchwormToSidePlank"; break;
    case PlankExerciseName::KneelingPlank                                   : debug << "KneelingPlank"; break;
    case PlankExerciseName::WeightedKneelingPlank                           : debug << "WeightedKneelingPlank"; break;
    case PlankExerciseName::KneelingSidePlankWithLegLift                    : debug << "KneelingSidePlankWithLegLift"; break;
    case PlankExerciseName::WeightedKneelingSidePlankWithLegLift            : debug << "WeightedKneelingSidePlankWithLegLift"; break;
    case PlankExerciseName::LateralRoll                                     : debug << "LateralRoll"; break;
    case PlankExerciseName::WeightedLateralRoll                             : debug << "WeightedLateralRoll"; break;
    case PlankExerciseName::LyingReversePlank                               : debug << "LyingReversePlank"; break;
    case PlankExerciseName::WeightedLyingReversePlank                       : debug << "WeightedLyingReversePlank"; break;
    case PlankExerciseName::MedicineBallMountainClimber                     : debug << "MedicineBallMountainClimber"; break;
    case PlankExerciseName::WeightedMedicineBallMountainClimber             : debug << "WeightedMedicineBallMountainClimber"; break;
    case PlankExerciseName::ModifiedMountainClimberAndExtension             : debug << "ModifiedMountainClimberAndExtension"; break;
    case PlankExerciseName::WeightedModifiedMountainClimberAndExtension     : debug << "WeightedModifiedMountainClimberAndExtension"; break;
    case PlankExerciseName::MountainClimber                                 : debug << "MountainClimber"; break;
    case PlankExerciseName::WeightedMountainClimber                         : debug << "WeightedMountainClimber"; break;
    case PlankExerciseName::MountainClimberOnSlidingDiscs                   : debug << "MountainClimberOnSlidingDiscs"; break;
    case PlankExerciseName::WeightedMountainClimberOnSlidingDiscs           : debug << "WeightedMountainClimberOnSlidingDiscs"; break;
    case PlankExerciseName::MountainClimberWithFeetOnBosuBall               : debug << "MountainClimberWithFeetOnBosuBall"; break;
    case PlankExerciseName::WeightedMountainClimberWithFeetOnBosuBall       : debug << "WeightedMountainClimberWithFeetOnBosuBall"; break;
    case PlankExerciseName::MountainClimberWithHandsOnBench                 : debug << "MountainClimberWithHandsOnBench"; break;
    case PlankExerciseName::MountainClimberWithHandsOnSwissBall             : debug << "MountainClimberWithHandsOnSwissBall"; break;
    case PlankExerciseName::WeightedMountainClimberWithHandsOnSwissBall     : debug << "WeightedMountainClimberWithHandsOnSwissBall"; break;
    case PlankExerciseName::Plank                                           : debug << "Plank"; break;
    case PlankExerciseName::PlankJacksWithFeetOnSlidingDiscs                : debug << "PlankJacksWithFeetOnSlidingDiscs"; break;
    case PlankExerciseName::WeightedPlankJacksWithFeetOnSlidingDiscs        : debug << "WeightedPlankJacksWithFeetOnSlidingDiscs"; break;
    case PlankExerciseName::PlankKneeTwist                                  : debug << "PlankKneeTwist"; break;
    case PlankExerciseName::WeightedPlankKneeTwist                          : debug << "WeightedPlankKneeTwist"; break;
    case PlankExerciseName::PlankPikeJumps                                  : debug << "PlankPikeJumps"; break;
    case PlankExerciseName::WeightedPlankPikeJumps                          : debug << "WeightedPlankPikeJumps"; break;
    case PlankExerciseName::PlankPikes                                      : debug << "PlankPikes"; break;
    case PlankExerciseName::WeightedPlankPikes                              : debug << "WeightedPlankPikes"; break;
    case PlankExerciseName::PlankToStandUp                                  : debug << "PlankToStandUp"; break;
    case PlankExerciseName::WeightedPlankToStandUp                          : debug << "WeightedPlankToStandUp"; break;
    case PlankExerciseName::PlankWithArmRaise                               : debug << "PlankWithArmRaise"; break;
    case PlankExerciseName::WeightedPlankWithArmRaise                       : debug << "WeightedPlankWithArmRaise"; break;
    case PlankExerciseName::PlankWithKneeToElbow                            : debug << "PlankWithKneeToElbow"; break;
    case PlankExerciseName::WeightedPlankWithKneeToElbow                    : debug << "WeightedPlankWithKneeToElbow"; break;
    case PlankExerciseName::PlankWithObliqueCrunch                          : debug << "PlankWithObliqueCrunch"; break;
    case PlankExerciseName::WeightedPlankWithObliqueCrunch                  : debug << "WeightedPlankWithObliqueCrunch"; break;
    case PlankExerciseName::PlyometricSidePlank                             : debug << "PlyometricSidePlank"; break;
    case PlankExerciseName::WeightedPlyometricSidePlank                     : debug << "WeightedPlyometricSidePlank"; break;
    case PlankExerciseName::RollingSidePlank                                : debug << "RollingSidePlank"; break;
    case PlankExerciseName::WeightedRollingSidePlank                        : debug << "WeightedRollingSidePlank"; break;
    case PlankExerciseName::SideKickPlank                                   : debug << "SideKickPlank"; break;
    case PlankExerciseName::WeightedSideKickPlank                           : debug << "WeightedSideKickPlank"; break;
    case PlankExerciseName::SidePlank                                       : debug << "SidePlank"; break;
    case PlankExerciseName::WeightedSidePlank                               : debug << "WeightedSidePlank"; break;
    case PlankExerciseName::SidePlankAndRow                                 : debug << "SidePlankAndRow"; break;
    case PlankExerciseName::WeightedSidePlankAndRow                         : debug << "WeightedSidePlankAndRow"; break;
    case PlankExerciseName::SidePlankLift                                   : debug << "SidePlankLift"; break;
    case PlankExerciseName::WeightedSidePlankLift                           : debug << "WeightedSidePlankLift"; break;
    case PlankExerciseName::SidePlankWithElbowOnBosuBall                    : debug << "SidePlankWithElbowOnBosuBall"; break;
    case PlankExerciseName::WeightedSidePlankWithElbowOnBosuBall            : debug << "WeightedSidePlankWithElbowOnBosuBall"; break;
    case PlankExerciseName::SidePlankWithFeetOnBench                        : debug << "SidePlankWithFeetOnBench"; break;
    case PlankExerciseName::WeightedSidePlankWithFeetOnBench                : debug << "WeightedSidePlankWithFeetOnBench"; break;
    case PlankExerciseName::SidePlankWithKneeCircle                         : debug << "SidePlankWithKneeCircle"; break;
    case PlankExerciseName::WeightedSidePlankWithKneeCircle                 : debug << "WeightedSidePlankWithKneeCircle"; break;
    case PlankExerciseName::SidePlankWithKneeTuck                           : debug << "SidePlankWithKneeTuck"; break;
    case PlankExerciseName::WeightedSidePlankWithKneeTuck                   : debug << "WeightedSidePlankWithKneeTuck"; break;
    case PlankExerciseName::SidePlankWithLegLift                            : debug << "SidePlankWithLegLift"; break;
    case PlankExerciseName::WeightedSidePlankWithLegLift                    : debug << "WeightedSidePlankWithLegLift"; break;
    case PlankExerciseName::SidePlankWithReachUnder                         : debug << "SidePlankWithReachUnder"; break;
    case PlankExerciseName::WeightedSidePlankWithReachUnder                 : debug << "WeightedSidePlankWithReachUnder"; break;
    case PlankExerciseName::SingleLegElevatedFeetPlank                      : debug << "SingleLegElevatedFeetPlank"; break;
    case PlankExerciseName::WeightedSingleLegElevatedFeetPlank              : debug << "WeightedSingleLegElevatedFeetPlank"; break;
    case PlankExerciseName::SingleLegFlexAndExtend                          : debug << "SingleLegFlexAndExtend"; break;
    case PlankExerciseName::WeightedSingleLegFlexAndExtend                  : debug << "WeightedSingleLegFlexAndExtend"; break;
    case PlankExerciseName::SingleLegSidePlank                              : debug << "SingleLegSidePlank"; break;
    case PlankExerciseName::WeightedSingleLegSidePlank                      : debug << "WeightedSingleLegSidePlank"; break;
    case PlankExerciseName::SpidermanPlank                                  : debug << "SpidermanPlank"; break;
    case PlankExerciseName::WeightedSpidermanPlank                          : debug << "WeightedSpidermanPlank"; break;
    case PlankExerciseName::StraightArmPlank                                : debug << "StraightArmPlank"; break;
    case PlankExerciseName::WeightedStraightArmPlank                        : debug << "WeightedStraightArmPlank"; break;
    case PlankExerciseName::StraightArmPlankWithShoulderTouch               : debug << "StraightArmPlankWithShoulderTouch"; break;
    case PlankExerciseName::WeightedStraightArmPlankWithShoulderTouch       : debug << "WeightedStraightArmPlankWithShoulderTouch"; break;
    case PlankExerciseName::SwissBallPlank                                  : debug << "SwissBallPlank"; break;
    case PlankExerciseName::WeightedSwissBallPlank                          : debug << "WeightedSwissBallPlank"; break;
    case PlankExerciseName::SwissBallPlankLegLift                           : debug << "SwissBallPlankLegLift"; break;
    case PlankExerciseName::WeightedSwissBallPlankLegLift                   : debug << "WeightedSwissBallPlankLegLift"; break;
    case PlankExerciseName::SwissBallPlankLegLiftAndHold                    : debug << "SwissBallPlankLegLiftAndHold"; break;
    case PlankExerciseName::SwissBallPlankWithFeetOnBench                   : debug << "SwissBallPlankWithFeetOnBench"; break;
    case PlankExerciseName::WeightedSwissBallPlankWithFeetOnBench           : debug << "WeightedSwissBallPlankWithFeetOnBench"; break;
    case PlankExerciseName::SwissBallProneJackknife                         : debug << "SwissBallProneJackknife"; break;
    case PlankExerciseName::WeightedSwissBallProneJackknife                 : debug << "WeightedSwissBallProneJackknife"; break;
    case PlankExerciseName::SwissBallSidePlank                              : debug << "SwissBallSidePlank"; break;
    case PlankExerciseName::WeightedSwissBallSidePlank                      : debug << "WeightedSwissBallSidePlank"; break;
    case PlankExerciseName::ThreeWayPlank                                   : debug << "ThreeWayPlank"; break;
    case PlankExerciseName::WeightedThreeWayPlank                           : debug << "WeightedThreeWayPlank"; break;
    case PlankExerciseName::TowelPlankAndKneeIn                             : debug << "TowelPlankAndKneeIn"; break;
    case PlankExerciseName::WeightedTowelPlankAndKneeIn                     : debug << "WeightedTowelPlankAndKneeIn"; break;
    case PlankExerciseName::TStabilization                                  : debug << "TStabilization"; break;
    case PlankExerciseName::WeightedTStabilization                          : debug << "WeightedTStabilization"; break;
    case PlankExerciseName::TurkishGetUpToSidePlank                         : debug << "TurkishGetUpToSidePlank"; break;
    case PlankExerciseName::WeightedTurkishGetUpToSidePlank                 : debug << "WeightedTurkishGetUpToSidePlank"; break;
    case PlankExerciseName::TwoPointPlank                                   : debug << "TwoPointPlank"; break;
    case PlankExerciseName::WeightedTwoPointPlank                           : debug << "WeightedTwoPointPlank"; break;
    case PlankExerciseName::WeightedPlank                                   : debug << "WeightedPlank"; break;
    case PlankExerciseName::WideStancePlankWithDiagonalArmLift              : debug << "WideStancePlankWithDiagonalArmLift"; break;
    case PlankExerciseName::WeightedWideStancePlankWithDiagonalArmLift      : debug << "WeightedWideStancePlankWithDiagonalArmLift"; break;
    case PlankExerciseName::WideStancePlankWithDiagonalLegLift              : debug << "WideStancePlankWithDiagonalLegLift"; break;
    case PlankExerciseName::WeightedWideStancePlankWithDiagonalLegLift      : debug << "WeightedWideStancePlankWithDiagonalLegLift"; break;
    case PlankExerciseName::WideStancePlankWithLegLift                      : debug << "WideStancePlankWithLegLift"; break;
    case PlankExerciseName::WeightedWideStancePlankWithLegLift              : debug << "WeightedWideStancePlankWithLegLift"; break;
    case PlankExerciseName::WideStancePlankWithOppositeArmAndLegLift        : debug << "WideStancePlankWithOppositeArmAndLegLift"; break;
    case PlankExerciseName::WeightedMountainClimberWithHandsOnBench         : debug << "WeightedMountainClimberWithHandsOnBench"; break;
    case PlankExerciseName::WeightedSwissBallPlankLegLiftAndHold            : debug << "WeightedSwissBallPlankLegLiftAndHold"; break;
    case PlankExerciseName::WeightedWideStancePlankWithOppositeArmAndLegLift: debug << "WeightedWideStancePlankWithOppositeArmAndLegLift"; break;
    case PlankExerciseName::PlankWithFeetOnSwissBall                        : debug << "PlankWithFeetOnSwissBall"; break;
    case PlankExerciseName::SidePlankToPlankWithReachUnder                  : debug << "SidePlankToPlankWithReachUnder"; break;
    case PlankExerciseName::BridgeWithGluteLowerLift                        : debug << "BridgeWithGluteLowerLift"; break;
    case PlankExerciseName::BridgeOneLegBridge                              : debug << "BridgeOneLegBridge"; break;
    case PlankExerciseName::PlankWithArmVariations                          : debug << "PlankWithArmVariations"; break;
    case PlankExerciseName::PlankWithLegLift                                : debug << "PlankWithLegLift"; break;
    case PlankExerciseName::ReversePlankWithLegPull                         : debug << "ReversePlankWithLegPull"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const PlyoExerciseName value)
{
    switch (value) {
    case PlyoExerciseName::AlternatingJumpLunge                 : debug << "AlternatingJumpLunge"; break;
    case PlyoExerciseName::WeightedAlternatingJumpLunge         : debug << "WeightedAlternatingJumpLunge"; break;
    case PlyoExerciseName::BarbellJumpSquat                     : debug << "BarbellJumpSquat"; break;
    case PlyoExerciseName::BodyWeightJumpSquat                  : debug << "BodyWeightJumpSquat"; break;
    case PlyoExerciseName::WeightedJumpSquat                    : debug << "WeightedJumpSquat"; break;
    case PlyoExerciseName::CrossKneeStrike                      : debug << "CrossKneeStrike"; break;
    case PlyoExerciseName::WeightedCrossKneeStrike              : debug << "WeightedCrossKneeStrike"; break;
    case PlyoExerciseName::DepthJump                            : debug << "DepthJump"; break;
    case PlyoExerciseName::WeightedDepthJump                    : debug << "WeightedDepthJump"; break;
    case PlyoExerciseName::DumbbellJumpSquat                    : debug << "DumbbellJumpSquat"; break;
    case PlyoExerciseName::DumbbellSplitJump                    : debug << "DumbbellSplitJump"; break;
    case PlyoExerciseName::FrontKneeStrike                      : debug << "FrontKneeStrike"; break;
    case PlyoExerciseName::WeightedFrontKneeStrike              : debug << "WeightedFrontKneeStrike"; break;
    case PlyoExerciseName::HighBoxJump                          : debug << "HighBoxJump"; break;
    case PlyoExerciseName::WeightedHighBoxJump                  : debug << "WeightedHighBoxJump"; break;
    case PlyoExerciseName::IsometricExplosiveBodyWeightJumpSquat: debug << "IsometricExplosiveBodyWeightJumpSquat"; break;
    case PlyoExerciseName::WeightedIsometricExplosiveJumpSquat  : debug << "WeightedIsometricExplosiveJumpSquat"; break;
    case PlyoExerciseName::LateralLeapAndHop                    : debug << "LateralLeapAndHop"; break;
    case PlyoExerciseName::WeightedLateralLeapAndHop            : debug << "WeightedLateralLeapAndHop"; break;
    case PlyoExerciseName::LateralPlyoSquats                    : debug << "LateralPlyoSquats"; break;
    case PlyoExerciseName::WeightedLateralPlyoSquats            : debug << "WeightedLateralPlyoSquats"; break;
    case PlyoExerciseName::LateralSlide                         : debug << "LateralSlide"; break;
    case PlyoExerciseName::WeightedLateralSlide                 : debug << "WeightedLateralSlide"; break;
    case PlyoExerciseName::MedicineBallOverheadThrows           : debug << "MedicineBallOverheadThrows"; break;
    case PlyoExerciseName::MedicineBallSideThrow                : debug << "MedicineBallSideThrow"; break;
    case PlyoExerciseName::MedicineBallSlam                     : debug << "MedicineBallSlam"; break;
    case PlyoExerciseName::SideToSideMedicineBallThrows         : debug << "SideToSideMedicineBallThrows"; break;
    case PlyoExerciseName::SideToSideShuffleJump                : debug << "SideToSideShuffleJump"; break;
    case PlyoExerciseName::WeightedSideToSideShuffleJump        : debug << "WeightedSideToSideShuffleJump"; break;
    case PlyoExerciseName::SquatJumpOntoBox                     : debug << "SquatJumpOntoBox"; break;
    case PlyoExerciseName::WeightedSquatJumpOntoBox             : debug << "WeightedSquatJumpOntoBox"; break;
    case PlyoExerciseName::SquatJumpsInAndOut                   : debug << "SquatJumpsInAndOut"; break;
    case PlyoExerciseName::WeightedSquatJumpsInAndOut           : debug << "WeightedSquatJumpsInAndOut"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const PullUpExerciseName value)
{
    switch (value) {
    case PullUpExerciseName::BandedPullUps                   : debug << "BandedPullUps"; break;
    case PullUpExerciseName::ThirtyDegreeLatPulldown         : debug << "ThirtyDegreeLatPulldown"; break;
    case PullUpExerciseName::BandAssistedChinUp              : debug << "BandAssistedChinUp"; break;
    case PullUpExerciseName::CloseGripChinUp                 : debug << "CloseGripChinUp"; break;
    case PullUpExerciseName::WeightedCloseGripChinUp         : debug << "WeightedCloseGripChinUp"; break;
    case PullUpExerciseName::CloseGripLatPulldown            : debug << "CloseGripLatPulldown"; break;
    case PullUpExerciseName::CrossoverChinUp                 : debug << "CrossoverChinUp"; break;
    case PullUpExerciseName::WeightedCrossoverChinUp         : debug << "WeightedCrossoverChinUp"; break;
    case PullUpExerciseName::EzBarPullover                   : debug << "EzBarPullover"; break;
    case PullUpExerciseName::HangingHurdle                   : debug << "HangingHurdle"; break;
    case PullUpExerciseName::WeightedHangingHurdle           : debug << "WeightedHangingHurdle"; break;
    case PullUpExerciseName::KneelingLatPulldown             : debug << "KneelingLatPulldown"; break;
    case PullUpExerciseName::KneelingUnderhandGripLatPulldown: debug << "KneelingUnderhandGripLatPulldown"; break;
    case PullUpExerciseName::LatPulldown                     : debug << "LatPulldown"; break;
    case PullUpExerciseName::MixedGripChinUp                 : debug << "MixedGripChinUp"; break;
    case PullUpExerciseName::WeightedMixedGripChinUp         : debug << "WeightedMixedGripChinUp"; break;
    case PullUpExerciseName::MixedGripPullUp                 : debug << "MixedGripPullUp"; break;
    case PullUpExerciseName::WeightedMixedGripPullUp         : debug << "WeightedMixedGripPullUp"; break;
    case PullUpExerciseName::ReverseGripPulldown             : debug << "ReverseGripPulldown"; break;
    case PullUpExerciseName::StandingCablePullover           : debug << "StandingCablePullover"; break;
    case PullUpExerciseName::StraightArmPulldown             : debug << "StraightArmPulldown"; break;
    case PullUpExerciseName::SwissBallEzBarPullover          : debug << "SwissBallEzBarPullover"; break;
    case PullUpExerciseName::TowelPullUp                     : debug << "TowelPullUp"; break;
    case PullUpExerciseName::WeightedTowelPullUp             : debug << "WeightedTowelPullUp"; break;
    case PullUpExerciseName::WeightedPullUp                  : debug << "WeightedPullUp"; break;
    case PullUpExerciseName::WideGripLatPulldown             : debug << "WideGripLatPulldown"; break;
    case PullUpExerciseName::WideGripPullUp                  : debug << "WideGripPullUp"; break;
    case PullUpExerciseName::WeightedWideGripPullUp          : debug << "WeightedWideGripPullUp"; break;
    case PullUpExerciseName::BurpeePullUp                    : debug << "BurpeePullUp"; break;
    case PullUpExerciseName::WeightedBurpeePullUp            : debug << "WeightedBurpeePullUp"; break;
    case PullUpExerciseName::JumpingPullUps                  : debug << "JumpingPullUps"; break;
    case PullUpExerciseName::WeightedJumpingPullUps          : debug << "WeightedJumpingPullUps"; break;
    case PullUpExerciseName::KippingPullUp                   : debug << "KippingPullUp"; break;
    case PullUpExerciseName::WeightedKippingPullUp           : debug << "WeightedKippingPullUp"; break;
    case PullUpExerciseName::LPullUp                         : debug << "LPullUp"; break;
    case PullUpExerciseName::WeightedLPullUp                 : debug << "WeightedLPullUp"; break;
    case PullUpExerciseName::SuspendedChinUp                 : debug << "SuspendedChinUp"; break;
    case PullUpExerciseName::WeightedSuspendedChinUp         : debug << "WeightedSuspendedChinUp"; break;
    case PullUpExerciseName::PullUp                          : debug << "PullUp"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const PushUpExerciseName value)
{
    switch (value) {
    case PushUpExerciseName::ChestPressWithBand                        : debug << "ChestPressWithBand"; break;
    case PushUpExerciseName::AlternatingStaggeredPushUp                : debug << "AlternatingStaggeredPushUp"; break;
    case PushUpExerciseName::WeightedAlternatingStaggeredPushUp        : debug << "WeightedAlternatingStaggeredPushUp"; break;
    case PushUpExerciseName::AlternatingHandsMedicineBallPushUp        : debug << "AlternatingHandsMedicineBallPushUp"; break;
    case PushUpExerciseName::WeightedAlternatingHandsMedicineBallPushUp: debug << "WeightedAlternatingHandsMedicineBallPushUp"; break;
    case PushUpExerciseName::BosuBallPushUp                            : debug << "BosuBallPushUp"; break;
    case PushUpExerciseName::WeightedBosuBallPushUp                    : debug << "WeightedBosuBallPushUp"; break;
    case PushUpExerciseName::ClappingPushUp                            : debug << "ClappingPushUp"; break;
    case PushUpExerciseName::WeightedClappingPushUp                    : debug << "WeightedClappingPushUp"; break;
    case PushUpExerciseName::CloseGripMedicineBallPushUp               : debug << "CloseGripMedicineBallPushUp"; break;
    case PushUpExerciseName::WeightedCloseGripMedicineBallPushUp       : debug << "WeightedCloseGripMedicineBallPushUp"; break;
    case PushUpExerciseName::CloseHandsPushUp                          : debug << "CloseHandsPushUp"; break;
    case PushUpExerciseName::WeightedCloseHandsPushUp                  : debug << "WeightedCloseHandsPushUp"; break;
    case PushUpExerciseName::DeclinePushUp                             : debug << "DeclinePushUp"; break;
    case PushUpExerciseName::WeightedDeclinePushUp                     : debug << "WeightedDeclinePushUp"; break;
    case PushUpExerciseName::DiamondPushUp                             : debug << "DiamondPushUp"; break;
    case PushUpExerciseName::WeightedDiamondPushUp                     : debug << "WeightedDiamondPushUp"; break;
    case PushUpExerciseName::ExplosiveCrossoverPushUp                  : debug << "ExplosiveCrossoverPushUp"; break;
    case PushUpExerciseName::WeightedExplosiveCrossoverPushUp          : debug << "WeightedExplosiveCrossoverPushUp"; break;
    case PushUpExerciseName::ExplosivePushUp                           : debug << "ExplosivePushUp"; break;
    case PushUpExerciseName::WeightedExplosivePushUp                   : debug << "WeightedExplosivePushUp"; break;
    case PushUpExerciseName::FeetElevatedSideToSidePushUp              : debug << "FeetElevatedSideToSidePushUp"; break;
    case PushUpExerciseName::WeightedFeetElevatedSideToSidePushUp      : debug << "WeightedFeetElevatedSideToSidePushUp"; break;
    case PushUpExerciseName::HandReleasePushUp                         : debug << "HandReleasePushUp"; break;
    case PushUpExerciseName::WeightedHandReleasePushUp                 : debug << "WeightedHandReleasePushUp"; break;
    case PushUpExerciseName::HandstandPushUp                           : debug << "HandstandPushUp"; break;
    case PushUpExerciseName::WeightedHandstandPushUp                   : debug << "WeightedHandstandPushUp"; break;
    case PushUpExerciseName::InclinePushUp                             : debug << "InclinePushUp"; break;
    case PushUpExerciseName::WeightedInclinePushUp                     : debug << "WeightedInclinePushUp"; break;
    case PushUpExerciseName::IsometricExplosivePushUp                  : debug << "IsometricExplosivePushUp"; break;
    case PushUpExerciseName::WeightedIsometricExplosivePushUp          : debug << "WeightedIsometricExplosivePushUp"; break;
    case PushUpExerciseName::JudoPushUp                                : debug << "JudoPushUp"; break;
    case PushUpExerciseName::WeightedJudoPushUp                        : debug << "WeightedJudoPushUp"; break;
    case PushUpExerciseName::KneelingPushUp                            : debug << "KneelingPushUp"; break;
    case PushUpExerciseName::WeightedKneelingPushUp                    : debug << "WeightedKneelingPushUp"; break;
    case PushUpExerciseName::MedicineBallChestPass                     : debug << "MedicineBallChestPass"; break;
    case PushUpExerciseName::MedicineBallPushUp                        : debug << "MedicineBallPushUp"; break;
    case PushUpExerciseName::WeightedMedicineBallPushUp                : debug << "WeightedMedicineBallPushUp"; break;
    case PushUpExerciseName::OneArmPushUp                              : debug << "OneArmPushUp"; break;
    case PushUpExerciseName::WeightedOneArmPushUp                      : debug << "WeightedOneArmPushUp"; break;
    case PushUpExerciseName::WeightedPushUp                            : debug << "WeightedPushUp"; break;
    case PushUpExerciseName::PushUpAndRow                              : debug << "PushUpAndRow"; break;
    case PushUpExerciseName::WeightedPushUpAndRow                      : debug << "WeightedPushUpAndRow"; break;
    case PushUpExerciseName::PushUpPlus                                : debug << "PushUpPlus"; break;
    case PushUpExerciseName::WeightedPushUpPlus                        : debug << "WeightedPushUpPlus"; break;
    case PushUpExerciseName::PushUpWithFeetOnSwissBall                 : debug << "PushUpWithFeetOnSwissBall"; break;
    case PushUpExerciseName::WeightedPushUpWithFeetOnSwissBall         : debug << "WeightedPushUpWithFeetOnSwissBall"; break;
    case PushUpExerciseName::PushUpWithOneHandOnMedicineBall           : debug << "PushUpWithOneHandOnMedicineBall"; break;
    case PushUpExerciseName::WeightedPushUpWithOneHandOnMedicineBall   : debug << "WeightedPushUpWithOneHandOnMedicineBall"; break;
    case PushUpExerciseName::ShoulderPushUp                            : debug << "ShoulderPushUp"; break;
    case PushUpExerciseName::WeightedShoulderPushUp                    : debug << "WeightedShoulderPushUp"; break;
    case PushUpExerciseName::SingleArmMedicineBallPushUp               : debug << "SingleArmMedicineBallPushUp"; break;
    case PushUpExerciseName::WeightedSingleArmMedicineBallPushUp       : debug << "WeightedSingleArmMedicineBallPushUp"; break;
    case PushUpExerciseName::SpidermanPushUp                           : debug << "SpidermanPushUp"; break;
    case PushUpExerciseName::WeightedSpidermanPushUp                   : debug << "WeightedSpidermanPushUp"; break;
    case PushUpExerciseName::StackedFeetPushUp                         : debug << "StackedFeetPushUp"; break;
    case PushUpExerciseName::WeightedStackedFeetPushUp                 : debug << "WeightedStackedFeetPushUp"; break;
    case PushUpExerciseName::StaggeredHandsPushUp                      : debug << "StaggeredHandsPushUp"; break;
    case PushUpExerciseName::WeightedStaggeredHandsPushUp              : debug << "WeightedStaggeredHandsPushUp"; break;
    case PushUpExerciseName::SuspendedPushUp                           : debug << "SuspendedPushUp"; break;
    case PushUpExerciseName::WeightedSuspendedPushUp                   : debug << "WeightedSuspendedPushUp"; break;
    case PushUpExerciseName::SwissBallPushUp                           : debug << "SwissBallPushUp"; break;
    case PushUpExerciseName::WeightedSwissBallPushUp                   : debug << "WeightedSwissBallPushUp"; break;
    case PushUpExerciseName::SwissBallPushUpPlus                       : debug << "SwissBallPushUpPlus"; break;
    case PushUpExerciseName::WeightedSwissBallPushUpPlus               : debug << "WeightedSwissBallPushUpPlus"; break;
    case PushUpExerciseName::TPushUp                                   : debug << "TPushUp"; break;
    case PushUpExerciseName::WeightedTPushUp                           : debug << "WeightedTPushUp"; break;
    case PushUpExerciseName::TripleStopPushUp                          : debug << "TripleStopPushUp"; break;
    case PushUpExerciseName::WeightedTripleStopPushUp                  : debug << "WeightedTripleStopPushUp"; break;
    case PushUpExerciseName::WideHandsPushUp                           : debug << "WideHandsPushUp"; break;
    case PushUpExerciseName::WeightedWideHandsPushUp                   : debug << "WeightedWideHandsPushUp"; break;
    case PushUpExerciseName::ParalletteHandstandPushUp                 : debug << "ParalletteHandstandPushUp"; break;
    case PushUpExerciseName::WeightedParalletteHandstandPushUp         : debug << "WeightedParalletteHandstandPushUp"; break;
    case PushUpExerciseName::RingHandstandPushUp                       : debug << "RingHandstandPushUp"; break;
    case PushUpExerciseName::WeightedRingHandstandPushUp               : debug << "WeightedRingHandstandPushUp"; break;
    case PushUpExerciseName::RingPushUp                                : debug << "RingPushUp"; break;
    case PushUpExerciseName::WeightedRingPushUp                        : debug << "WeightedRingPushUp"; break;
    case PushUpExerciseName::PushUp                                    : debug << "PushUp"; break;
    case PushUpExerciseName::PilatesPushup                             : debug << "PilatesPushup"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const RowExerciseName value)
{
    switch (value) {
    case RowExerciseName::BarbellStraightLegDeadliftToRow           : debug << "BarbellStraightLegDeadliftToRow"; break;
    case RowExerciseName::CableRowStanding                          : debug << "CableRowStanding"; break;
    case RowExerciseName::DumbbellRow                               : debug << "DumbbellRow"; break;
    case RowExerciseName::ElevatedFeetInvertedRow                   : debug << "ElevatedFeetInvertedRow"; break;
    case RowExerciseName::WeightedElevatedFeetInvertedRow           : debug << "WeightedElevatedFeetInvertedRow"; break;
    case RowExerciseName::FacePull                                  : debug << "FacePull"; break;
    case RowExerciseName::FacePullWithExternalRotation              : debug << "FacePullWithExternalRotation"; break;
    case RowExerciseName::InvertedRowWithFeetOnSwissBall            : debug << "InvertedRowWithFeetOnSwissBall"; break;
    case RowExerciseName::WeightedInvertedRowWithFeetOnSwissBall    : debug << "WeightedInvertedRowWithFeetOnSwissBall"; break;
    case RowExerciseName::KettlebellRow                             : debug << "KettlebellRow"; break;
    case RowExerciseName::ModifiedInvertedRow                       : debug << "ModifiedInvertedRow"; break;
    case RowExerciseName::WeightedModifiedInvertedRow               : debug << "WeightedModifiedInvertedRow"; break;
    case RowExerciseName::NeutralGripAlternatingDumbbellRow         : debug << "NeutralGripAlternatingDumbbellRow"; break;
    case RowExerciseName::OneArmBentOverRow                         : debug << "OneArmBentOverRow"; break;
    case RowExerciseName::OneLeggedDumbbellRow                      : debug << "OneLeggedDumbbellRow"; break;
    case RowExerciseName::RenegadeRow                               : debug << "RenegadeRow"; break;
    case RowExerciseName::ReverseGripBarbellRow                     : debug << "ReverseGripBarbellRow"; break;
    case RowExerciseName::RopeHandleCableRow                        : debug << "RopeHandleCableRow"; break;
    case RowExerciseName::SeatedCableRow                            : debug << "SeatedCableRow"; break;
    case RowExerciseName::SeatedDumbbellRow                         : debug << "SeatedDumbbellRow"; break;
    case RowExerciseName::SingleArmCableRow                         : debug << "SingleArmCableRow"; break;
    case RowExerciseName::SingleArmCableRowAndRotation              : debug << "SingleArmCableRowAndRotation"; break;
    case RowExerciseName::SingleArmInvertedRow                      : debug << "SingleArmInvertedRow"; break;
    case RowExerciseName::WeightedSingleArmInvertedRow              : debug << "WeightedSingleArmInvertedRow"; break;
    case RowExerciseName::SingleArmNeutralGripDumbbellRow           : debug << "SingleArmNeutralGripDumbbellRow"; break;
    case RowExerciseName::SingleArmNeutralGripDumbbellRowAndRotation: debug << "SingleArmNeutralGripDumbbellRowAndRotation"; break;
    case RowExerciseName::SuspendedInvertedRow                      : debug << "SuspendedInvertedRow"; break;
    case RowExerciseName::WeightedSuspendedInvertedRow              : debug << "WeightedSuspendedInvertedRow"; break;
    case RowExerciseName::TBarRow                                   : debug << "TBarRow"; break;
    case RowExerciseName::TowelGripInvertedRow                      : debug << "TowelGripInvertedRow"; break;
    case RowExerciseName::WeightedTowelGripInvertedRow              : debug << "WeightedTowelGripInvertedRow"; break;
    case RowExerciseName::UnderhandGripCableRow                     : debug << "UnderhandGripCableRow"; break;
    case RowExerciseName::VGripCableRow                             : debug << "VGripCableRow"; break;
    case RowExerciseName::WideGripSeatedCableRow                    : debug << "WideGripSeatedCableRow"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const ShoulderPressExerciseName value)
{
    switch (value) {
    case ShoulderPressExerciseName::AlternatingDumbbellShoulderPress        : debug << "AlternatingDumbbellShoulderPress"; break;
    case ShoulderPressExerciseName::ArnoldPress                             : debug << "ArnoldPress"; break;
    case ShoulderPressExerciseName::BarbellFrontSquatToPushPress            : debug << "BarbellFrontSquatToPushPress"; break;
    case ShoulderPressExerciseName::BarbellPushPress                        : debug << "BarbellPushPress"; break;
    case ShoulderPressExerciseName::BarbellShoulderPress                    : debug << "BarbellShoulderPress"; break;
    case ShoulderPressExerciseName::DeadCurlPress                           : debug << "DeadCurlPress"; break;
    case ShoulderPressExerciseName::DumbbellAlternatingShoulderPressAndTwist: debug << "DumbbellAlternatingShoulderPressAndTwist"; break;
    case ShoulderPressExerciseName::DumbbellHammerCurlToLungeToPress        : debug << "DumbbellHammerCurlToLungeToPress"; break;
    case ShoulderPressExerciseName::DumbbellPushPress                       : debug << "DumbbellPushPress"; break;
    case ShoulderPressExerciseName::FloorInvertedShoulderPress              : debug << "FloorInvertedShoulderPress"; break;
    case ShoulderPressExerciseName::WeightedFloorInvertedShoulderPress      : debug << "WeightedFloorInvertedShoulderPress"; break;
    case ShoulderPressExerciseName::InvertedShoulderPress                   : debug << "InvertedShoulderPress"; break;
    case ShoulderPressExerciseName::WeightedInvertedShoulderPress           : debug << "WeightedInvertedShoulderPress"; break;
    case ShoulderPressExerciseName::OneArmPushPress                         : debug << "OneArmPushPress"; break;
    case ShoulderPressExerciseName::OverheadBarbellPress                    : debug << "OverheadBarbellPress"; break;
    case ShoulderPressExerciseName::OverheadDumbbellPress                   : debug << "OverheadDumbbellPress"; break;
    case ShoulderPressExerciseName::SeatedBarbellShoulderPress              : debug << "SeatedBarbellShoulderPress"; break;
    case ShoulderPressExerciseName::SeatedDumbbellShoulderPress             : debug << "SeatedDumbbellShoulderPress"; break;
    case ShoulderPressExerciseName::SingleArmDumbbellShoulderPress          : debug << "SingleArmDumbbellShoulderPress"; break;
    case ShoulderPressExerciseName::SingleArmStepUpAndPress                 : debug << "SingleArmStepUpAndPress"; break;
    case ShoulderPressExerciseName::SmithMachineOverheadPress               : debug << "SmithMachineOverheadPress"; break;
    case ShoulderPressExerciseName::SplitStanceHammerCurlToPress            : debug << "SplitStanceHammerCurlToPress"; break;
    case ShoulderPressExerciseName::SwissBallDumbbellShoulderPress          : debug << "SwissBallDumbbellShoulderPress"; break;
    case ShoulderPressExerciseName::WeightPlateFrontRaise                   : debug << "WeightPlateFrontRaise"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const ShoulderStabilityExerciseName value)
{
    switch (value) {
    case ShoulderStabilityExerciseName::NinetyDegreeCableExternalRotation     : debug << "NinetyDegreeCableExternalRotation"; break;
    case ShoulderStabilityExerciseName::BandExternalRotation                  : debug << "BandExternalRotation"; break;
    case ShoulderStabilityExerciseName::BandInternalRotation                  : debug << "BandInternalRotation"; break;
    case ShoulderStabilityExerciseName::BentArmLateralRaiseAndExternalRotation: debug << "BentArmLateralRaiseAndExternalRotation"; break;
    case ShoulderStabilityExerciseName::CableExternalRotation                 : debug << "CableExternalRotation"; break;
    case ShoulderStabilityExerciseName::DumbbellFacePullWithExternalRotation  : debug << "DumbbellFacePullWithExternalRotation"; break;
    case ShoulderStabilityExerciseName::FloorIRaise                           : debug << "FloorIRaise"; break;
    case ShoulderStabilityExerciseName::WeightedFloorIRaise                   : debug << "WeightedFloorIRaise"; break;
    case ShoulderStabilityExerciseName::FloorTRaise                           : debug << "FloorTRaise"; break;
    case ShoulderStabilityExerciseName::WeightedFloorTRaise                   : debug << "WeightedFloorTRaise"; break;
    case ShoulderStabilityExerciseName::FloorYRaise                           : debug << "FloorYRaise"; break;
    case ShoulderStabilityExerciseName::WeightedFloorYRaise                   : debug << "WeightedFloorYRaise"; break;
    case ShoulderStabilityExerciseName::InclineIRaise                         : debug << "InclineIRaise"; break;
    case ShoulderStabilityExerciseName::WeightedInclineIRaise                 : debug << "WeightedInclineIRaise"; break;
    case ShoulderStabilityExerciseName::InclineLRaise                         : debug << "InclineLRaise"; break;
    case ShoulderStabilityExerciseName::WeightedInclineLRaise                 : debug << "WeightedInclineLRaise"; break;
    case ShoulderStabilityExerciseName::InclineTRaise                         : debug << "InclineTRaise"; break;
    case ShoulderStabilityExerciseName::WeightedInclineTRaise                 : debug << "WeightedInclineTRaise"; break;
    case ShoulderStabilityExerciseName::InclineWRaise                         : debug << "InclineWRaise"; break;
    case ShoulderStabilityExerciseName::WeightedInclineWRaise                 : debug << "WeightedInclineWRaise"; break;
    case ShoulderStabilityExerciseName::InclineYRaise                         : debug << "InclineYRaise"; break;
    case ShoulderStabilityExerciseName::WeightedInclineYRaise                 : debug << "WeightedInclineYRaise"; break;
    case ShoulderStabilityExerciseName::LyingExternalRotation                 : debug << "LyingExternalRotation"; break;
    case ShoulderStabilityExerciseName::SeatedDumbbellExternalRotation        : debug << "SeatedDumbbellExternalRotation"; break;
    case ShoulderStabilityExerciseName::StandingLRaise                        : debug << "StandingLRaise"; break;
    case ShoulderStabilityExerciseName::SwissBallIRaise                       : debug << "SwissBallIRaise"; break;
    case ShoulderStabilityExerciseName::WeightedSwissBallIRaise               : debug << "WeightedSwissBallIRaise"; break;
    case ShoulderStabilityExerciseName::SwissBallTRaise                       : debug << "SwissBallTRaise"; break;
    case ShoulderStabilityExerciseName::WeightedSwissBallTRaise               : debug << "WeightedSwissBallTRaise"; break;
    case ShoulderStabilityExerciseName::SwissBallWRaise                       : debug << "SwissBallWRaise"; break;
    case ShoulderStabilityExerciseName::WeightedSwissBallWRaise               : debug << "WeightedSwissBallWRaise"; break;
    case ShoulderStabilityExerciseName::SwissBallYRaise                       : debug << "SwissBallYRaise"; break;
    case ShoulderStabilityExerciseName::WeightedSwissBallYRaise               : debug << "WeightedSwissBallYRaise"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const ShrugExerciseName value)
{
    switch (value) {
    case ShrugExerciseName::BarbellJumpShrug              : debug << "BarbellJumpShrug"; break;
    case ShrugExerciseName::BarbellShrug                  : debug << "BarbellShrug"; break;
    case ShrugExerciseName::BarbellUprightRow             : debug << "BarbellUprightRow"; break;
    case ShrugExerciseName::BehindTheBackSmithMachineShrug: debug << "BehindTheBackSmithMachineShrug"; break;
    case ShrugExerciseName::DumbbellJumpShrug             : debug << "DumbbellJumpShrug"; break;
    case ShrugExerciseName::DumbbellShrug                 : debug << "DumbbellShrug"; break;
    case ShrugExerciseName::DumbbellUprightRow            : debug << "DumbbellUprightRow"; break;
    case ShrugExerciseName::InclineDumbbellShrug          : debug << "InclineDumbbellShrug"; break;
    case ShrugExerciseName::OverheadBarbellShrug          : debug << "OverheadBarbellShrug"; break;
    case ShrugExerciseName::OverheadDumbbellShrug         : debug << "OverheadDumbbellShrug"; break;
    case ShrugExerciseName::ScaptionAndShrug              : debug << "ScaptionAndShrug"; break;
    case ShrugExerciseName::ScapularRetraction            : debug << "ScapularRetraction"; break;
    case ShrugExerciseName::SerratusChairShrug            : debug << "SerratusChairShrug"; break;
    case ShrugExerciseName::WeightedSerratusChairShrug    : debug << "WeightedSerratusChairShrug"; break;
    case ShrugExerciseName::SerratusShrug                 : debug << "SerratusShrug"; break;
    case ShrugExerciseName::WeightedSerratusShrug         : debug << "WeightedSerratusShrug"; break;
    case ShrugExerciseName::WideGripJumpShrug             : debug << "WideGripJumpShrug"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const SitUpExerciseName value)
{
    switch (value) {
    case SitUpExerciseName::AlternatingSitUp                   : debug << "AlternatingSitUp"; break;
    case SitUpExerciseName::WeightedAlternatingSitUp           : debug << "WeightedAlternatingSitUp"; break;
    case SitUpExerciseName::BentKneeVUp                        : debug << "BentKneeVUp"; break;
    case SitUpExerciseName::WeightedBentKneeVUp                : debug << "WeightedBentKneeVUp"; break;
    case SitUpExerciseName::ButterflySitUp                     : debug << "ButterflySitUp"; break;
    case SitUpExerciseName::WeightedButterflySitup             : debug << "WeightedButterflySitup"; break;
    case SitUpExerciseName::CrossPunchRollUp                   : debug << "CrossPunchRollUp"; break;
    case SitUpExerciseName::WeightedCrossPunchRollUp           : debug << "WeightedCrossPunchRollUp"; break;
    case SitUpExerciseName::CrossedArmsSitUp                   : debug << "CrossedArmsSitUp"; break;
    case SitUpExerciseName::WeightedCrossedArmsSitUp           : debug << "WeightedCrossedArmsSitUp"; break;
    case SitUpExerciseName::GetUpSitUp                         : debug << "GetUpSitUp"; break;
    case SitUpExerciseName::WeightedGetUpSitUp                 : debug << "WeightedGetUpSitUp"; break;
    case SitUpExerciseName::HoveringSitUp                      : debug << "HoveringSitUp"; break;
    case SitUpExerciseName::WeightedHoveringSitUp              : debug << "WeightedHoveringSitUp"; break;
    case SitUpExerciseName::KettlebellSitUp                    : debug << "KettlebellSitUp"; break;
    case SitUpExerciseName::MedicineBallAlternatingVUp         : debug << "MedicineBallAlternatingVUp"; break;
    case SitUpExerciseName::MedicineBallSitUp                  : debug << "MedicineBallSitUp"; break;
    case SitUpExerciseName::MedicineBallVUp                    : debug << "MedicineBallVUp"; break;
    case SitUpExerciseName::ModifiedSitUp                      : debug << "ModifiedSitUp"; break;
    case SitUpExerciseName::NegativeSitUp                      : debug << "NegativeSitUp"; break;
    case SitUpExerciseName::OneArmFullSitUp                    : debug << "OneArmFullSitUp"; break;
    case SitUpExerciseName::RecliningCircle                    : debug << "RecliningCircle"; break;
    case SitUpExerciseName::WeightedRecliningCircle            : debug << "WeightedRecliningCircle"; break;
    case SitUpExerciseName::ReverseCurlUp                      : debug << "ReverseCurlUp"; break;
    case SitUpExerciseName::WeightedReverseCurlUp              : debug << "WeightedReverseCurlUp"; break;
    case SitUpExerciseName::SingleLegSwissBallJackknife        : debug << "SingleLegSwissBallJackknife"; break;
    case SitUpExerciseName::WeightedSingleLegSwissBallJackknife: debug << "WeightedSingleLegSwissBallJackknife"; break;
    case SitUpExerciseName::TheTeaser                          : debug << "TheTeaser"; break;
    case SitUpExerciseName::TheTeaserWeighted                  : debug << "TheTeaserWeighted"; break;
    case SitUpExerciseName::ThreePartRollDown                  : debug << "ThreePartRollDown"; break;
    case SitUpExerciseName::WeightedThreePartRollDown          : debug << "WeightedThreePartRollDown"; break;
    case SitUpExerciseName::VUp                                : debug << "VUp"; break;
    case SitUpExerciseName::WeightedVUp                        : debug << "WeightedVUp"; break;
    case SitUpExerciseName::WeightedRussianTwistOnSwissBall    : debug << "WeightedRussianTwistOnSwissBall"; break;
    case SitUpExerciseName::WeightedSitUp                      : debug << "WeightedSitUp"; break;
    case SitUpExerciseName::XAbs                               : debug << "XAbs"; break;
    case SitUpExerciseName::WeightedXAbs                       : debug << "WeightedXAbs"; break;
    case SitUpExerciseName::SitUp                              : debug << "SitUp"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const SquatExerciseName value)
{
    switch (value) {
    case SquatExerciseName::LegPress                                       : debug << "LegPress"; break;
    case SquatExerciseName::BackSquatWithBodyBar                           : debug << "BackSquatWithBodyBar"; break;
    case SquatExerciseName::BackSquats                                     : debug << "BackSquats"; break;
    case SquatExerciseName::WeightedBackSquats                             : debug << "WeightedBackSquats"; break;
    case SquatExerciseName::BalancingSquat                                 : debug << "BalancingSquat"; break;
    case SquatExerciseName::WeightedBalancingSquat                         : debug << "WeightedBalancingSquat"; break;
    case SquatExerciseName::BarbellBackSquat                               : debug << "BarbellBackSquat"; break;
    case SquatExerciseName::BarbellBoxSquat                                : debug << "BarbellBoxSquat"; break;
    case SquatExerciseName::BarbellFrontSquat                              : debug << "BarbellFrontSquat"; break;
    case SquatExerciseName::BarbellHackSquat                               : debug << "BarbellHackSquat"; break;
    case SquatExerciseName::BarbellHangSquatSnatch                         : debug << "BarbellHangSquatSnatch"; break;
    case SquatExerciseName::BarbellLateralStepUp                           : debug << "BarbellLateralStepUp"; break;
    case SquatExerciseName::BarbellQuarterSquat                            : debug << "BarbellQuarterSquat"; break;
    case SquatExerciseName::BarbellSiffSquat                               : debug << "BarbellSiffSquat"; break;
    case SquatExerciseName::BarbellSquatSnatch                             : debug << "BarbellSquatSnatch"; break;
    case SquatExerciseName::BarbellSquatWithHeelsRaised                    : debug << "BarbellSquatWithHeelsRaised"; break;
    case SquatExerciseName::BarbellStepover                                : debug << "BarbellStepover"; break;
    case SquatExerciseName::BarbellStepUp                                  : debug << "BarbellStepUp"; break;
    case SquatExerciseName::BenchSquatWithRotationalChop                   : debug << "BenchSquatWithRotationalChop"; break;
    case SquatExerciseName::WeightedBenchSquatWithRotationalChop           : debug << "WeightedBenchSquatWithRotationalChop"; break;
    case SquatExerciseName::BodyWeightWallSquat                            : debug << "BodyWeightWallSquat"; break;
    case SquatExerciseName::WeightedWallSquat                              : debug << "WeightedWallSquat"; break;
    case SquatExerciseName::BoxStepSquat                                   : debug << "BoxStepSquat"; break;
    case SquatExerciseName::WeightedBoxStepSquat                           : debug << "WeightedBoxStepSquat"; break;
    case SquatExerciseName::BracedSquat                                    : debug << "BracedSquat"; break;
    case SquatExerciseName::CrossedArmBarbellFrontSquat                    : debug << "CrossedArmBarbellFrontSquat"; break;
    case SquatExerciseName::CrossoverDumbbellStepUp                        : debug << "CrossoverDumbbellStepUp"; break;
    case SquatExerciseName::DumbbellFrontSquat                             : debug << "DumbbellFrontSquat"; break;
    case SquatExerciseName::DumbbellSplitSquat                             : debug << "DumbbellSplitSquat"; break;
    case SquatExerciseName::DumbbellSquat                                  : debug << "DumbbellSquat"; break;
    case SquatExerciseName::DumbbellSquatClean                             : debug << "DumbbellSquatClean"; break;
    case SquatExerciseName::DumbbellStepover                               : debug << "DumbbellStepover"; break;
    case SquatExerciseName::DumbbellStepUp                                 : debug << "DumbbellStepUp"; break;
    case SquatExerciseName::ElevatedSingleLegSquat                         : debug << "ElevatedSingleLegSquat"; break;
    case SquatExerciseName::WeightedElevatedSingleLegSquat                 : debug << "WeightedElevatedSingleLegSquat"; break;
    case SquatExerciseName::FigureFourSquats                               : debug << "FigureFourSquats"; break;
    case SquatExerciseName::WeightedFigureFourSquats                       : debug << "WeightedFigureFourSquats"; break;
    case SquatExerciseName::GobletSquat                                    : debug << "GobletSquat"; break;
    case SquatExerciseName::KettlebellSquat                                : debug << "KettlebellSquat"; break;
    case SquatExerciseName::KettlebellSwingOverhead                        : debug << "KettlebellSwingOverhead"; break;
    case SquatExerciseName::KettlebellSwingWithFlipToSquat                 : debug << "KettlebellSwingWithFlipToSquat"; break;
    case SquatExerciseName::LateralDumbbellStepUp                          : debug << "LateralDumbbellStepUp"; break;
    case SquatExerciseName::OneLeggedSquat                                 : debug << "OneLeggedSquat"; break;
    case SquatExerciseName::OverheadDumbbellSquat                          : debug << "OverheadDumbbellSquat"; break;
    case SquatExerciseName::OverheadSquat                                  : debug << "OverheadSquat"; break;
    case SquatExerciseName::PartialSingleLegSquat                          : debug << "PartialSingleLegSquat"; break;
    case SquatExerciseName::WeightedPartialSingleLegSquat                  : debug << "WeightedPartialSingleLegSquat"; break;
    case SquatExerciseName::PistolSquat                                    : debug << "PistolSquat"; break;
    case SquatExerciseName::WeightedPistolSquat                            : debug << "WeightedPistolSquat"; break;
    case SquatExerciseName::PlieSlides                                     : debug << "PlieSlides"; break;
    case SquatExerciseName::WeightedPlieSlides                             : debug << "WeightedPlieSlides"; break;
    case SquatExerciseName::PlieSquat                                      : debug << "PlieSquat"; break;
    case SquatExerciseName::WeightedPlieSquat                              : debug << "WeightedPlieSquat"; break;
    case SquatExerciseName::PrisonerSquat                                  : debug << "PrisonerSquat"; break;
    case SquatExerciseName::WeightedPrisonerSquat                          : debug << "WeightedPrisonerSquat"; break;
    case SquatExerciseName::SingleLegBenchGetUp                            : debug << "SingleLegBenchGetUp"; break;
    case SquatExerciseName::WeightedSingleLegBenchGetUp                    : debug << "WeightedSingleLegBenchGetUp"; break;
    case SquatExerciseName::SingleLegBenchSquat                            : debug << "SingleLegBenchSquat"; break;
    case SquatExerciseName::WeightedSingleLegBenchSquat                    : debug << "WeightedSingleLegBenchSquat"; break;
    case SquatExerciseName::SingleLegSquatOnSwissBall                      : debug << "SingleLegSquatOnSwissBall"; break;
    case SquatExerciseName::WeightedSingleLegSquatOnSwissBall              : debug << "WeightedSingleLegSquatOnSwissBall"; break;
    case SquatExerciseName::Squat                                          : debug << "Squat"; break;
    case SquatExerciseName::WeightedSquat                                  : debug << "WeightedSquat"; break;
    case SquatExerciseName::SquatsWithBand                                 : debug << "SquatsWithBand"; break;
    case SquatExerciseName::StaggeredSquat                                 : debug << "StaggeredSquat"; break;
    case SquatExerciseName::WeightedStaggeredSquat                         : debug << "WeightedStaggeredSquat"; break;
    case SquatExerciseName::StepUp                                         : debug << "StepUp"; break;
    case SquatExerciseName::WeightedStepUp                                 : debug << "WeightedStepUp"; break;
    case SquatExerciseName::SuitcaseSquats                                 : debug << "SuitcaseSquats"; break;
    case SquatExerciseName::SumoSquat                                      : debug << "SumoSquat"; break;
    case SquatExerciseName::SumoSquatSlideIn                               : debug << "SumoSquatSlideIn"; break;
    case SquatExerciseName::WeightedSumoSquatSlideIn                       : debug << "WeightedSumoSquatSlideIn"; break;
    case SquatExerciseName::SumoSquatToHighPull                            : debug << "SumoSquatToHighPull"; break;
    case SquatExerciseName::SumoSquatToStand                               : debug << "SumoSquatToStand"; break;
    case SquatExerciseName::WeightedSumoSquatToStand                       : debug << "WeightedSumoSquatToStand"; break;
    case SquatExerciseName::SumoSquatWithRotation                          : debug << "SumoSquatWithRotation"; break;
    case SquatExerciseName::WeightedSumoSquatWithRotation                  : debug << "WeightedSumoSquatWithRotation"; break;
    case SquatExerciseName::SwissBallBodyWeightWallSquat                   : debug << "SwissBallBodyWeightWallSquat"; break;
    case SquatExerciseName::WeightedSwissBallWallSquat                     : debug << "WeightedSwissBallWallSquat"; break;
    case SquatExerciseName::Thrusters                                      : debug << "Thrusters"; break;
    case SquatExerciseName::UnevenSquat                                    : debug << "UnevenSquat"; break;
    case SquatExerciseName::WeightedUnevenSquat                            : debug << "WeightedUnevenSquat"; break;
    case SquatExerciseName::WaistSlimmingSquat                             : debug << "WaistSlimmingSquat"; break;
    case SquatExerciseName::WallBall                                       : debug << "WallBall"; break;
    case SquatExerciseName::WideStanceBarbellSquat                         : debug << "WideStanceBarbellSquat"; break;
    case SquatExerciseName::WideStanceGobletSquat                          : debug << "WideStanceGobletSquat"; break;
    case SquatExerciseName::ZercherSquat                                   : debug << "ZercherSquat"; break;
    case SquatExerciseName::KbsOverhead                                    : debug << "KbsOverhead"; break;
    case SquatExerciseName::SquatAndSideKick                               : debug << "SquatAndSideKick"; break;
    case SquatExerciseName::SquatJumpsInNOut                               : debug << "SquatJumpsInNOut"; break;
    case SquatExerciseName::PilatesPlieSquatsParallelTurnedOutFlatAndHeels : debug << "PilatesPlieSquatsParallelTurnedOutFlatAndHeels"; break;
    case SquatExerciseName::ReleveStraightLegAndKneeBentWithOneLegVariation: debug << "ReleveStraightLegAndKneeBentWithOneLegVariation"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const TotalBodyExerciseName value)
{
    switch (value) {
    case TotalBodyExerciseName::Burpee                          : debug << "Burpee"; break;
    case TotalBodyExerciseName::WeightedBurpee                  : debug << "WeightedBurpee"; break;
    case TotalBodyExerciseName::BurpeeBoxJump                   : debug << "BurpeeBoxJump"; break;
    case TotalBodyExerciseName::WeightedBurpeeBoxJump           : debug << "WeightedBurpeeBoxJump"; break;
    case TotalBodyExerciseName::HighPullBurpee                  : debug << "HighPullBurpee"; break;
    case TotalBodyExerciseName::ManMakers                       : debug << "ManMakers"; break;
    case TotalBodyExerciseName::OneArmBurpee                    : debug << "OneArmBurpee"; break;
    case TotalBodyExerciseName::SquatThrusts                    : debug << "SquatThrusts"; break;
    case TotalBodyExerciseName::WeightedSquatThrusts            : debug << "WeightedSquatThrusts"; break;
    case TotalBodyExerciseName::SquatPlankPushUp                : debug << "SquatPlankPushUp"; break;
    case TotalBodyExerciseName::WeightedSquatPlankPushUp        : debug << "WeightedSquatPlankPushUp"; break;
    case TotalBodyExerciseName::StandingTRotationBalance        : debug << "StandingTRotationBalance"; break;
    case TotalBodyExerciseName::WeightedStandingTRotationBalance: debug << "WeightedStandingTRotationBalance"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const TricepsExtensionExerciseName value)
{
    switch (value) {
    case TricepsExtensionExerciseName::BenchDip                                    : debug << "BenchDip"; break;
    case TricepsExtensionExerciseName::WeightedBenchDip                            : debug << "WeightedBenchDip"; break;
    case TricepsExtensionExerciseName::BodyWeightDip                               : debug << "BodyWeightDip"; break;
    case TricepsExtensionExerciseName::CableKickback                               : debug << "CableKickback"; break;
    case TricepsExtensionExerciseName::CableLyingTricepsExtension                  : debug << "CableLyingTricepsExtension"; break;
    case TricepsExtensionExerciseName::CableOverheadTricepsExtension               : debug << "CableOverheadTricepsExtension"; break;
    case TricepsExtensionExerciseName::DumbbellKickback                            : debug << "DumbbellKickback"; break;
    case TricepsExtensionExerciseName::DumbbellLyingTricepsExtension               : debug << "DumbbellLyingTricepsExtension"; break;
    case TricepsExtensionExerciseName::EzBarOverheadTricepsExtension               : debug << "EzBarOverheadTricepsExtension"; break;
    case TricepsExtensionExerciseName::InclineDip                                  : debug << "InclineDip"; break;
    case TricepsExtensionExerciseName::WeightedInclineDip                          : debug << "WeightedInclineDip"; break;
    case TricepsExtensionExerciseName::InclineEzBarLyingTricepsExtension           : debug << "InclineEzBarLyingTricepsExtension"; break;
    case TricepsExtensionExerciseName::LyingDumbbellPulloverToExtension            : debug << "LyingDumbbellPulloverToExtension"; break;
    case TricepsExtensionExerciseName::LyingEzBarTricepsExtension                  : debug << "LyingEzBarTricepsExtension"; break;
    case TricepsExtensionExerciseName::LyingTricepsExtensionToCloseGripBenchPress  : debug << "LyingTricepsExtensionToCloseGripBenchPress"; break;
    case TricepsExtensionExerciseName::OverheadDumbbellTricepsExtension            : debug << "OverheadDumbbellTricepsExtension"; break;
    case TricepsExtensionExerciseName::RecliningTricepsPress                       : debug << "RecliningTricepsPress"; break;
    case TricepsExtensionExerciseName::ReverseGripPressdown                        : debug << "ReverseGripPressdown"; break;
    case TricepsExtensionExerciseName::ReverseGripTricepsPressdown                 : debug << "ReverseGripTricepsPressdown"; break;
    case TricepsExtensionExerciseName::RopePressdown                               : debug << "RopePressdown"; break;
    case TricepsExtensionExerciseName::SeatedBarbellOverheadTricepsExtension       : debug << "SeatedBarbellOverheadTricepsExtension"; break;
    case TricepsExtensionExerciseName::SeatedDumbbellOverheadTricepsExtension      : debug << "SeatedDumbbellOverheadTricepsExtension"; break;
    case TricepsExtensionExerciseName::SeatedEzBarOverheadTricepsExtension         : debug << "SeatedEzBarOverheadTricepsExtension"; break;
    case TricepsExtensionExerciseName::SeatedSingleArmOverheadDumbbellExtension    : debug << "SeatedSingleArmOverheadDumbbellExtension"; break;
    case TricepsExtensionExerciseName::SingleArmDumbbellOverheadTricepsExtension   : debug << "SingleArmDumbbellOverheadTricepsExtension"; break;
    case TricepsExtensionExerciseName::SingleDumbbellSeatedOverheadTricepsExtension: debug << "SingleDumbbellSeatedOverheadTricepsExtension"; break;
    case TricepsExtensionExerciseName::SingleLegBenchDipAndKick                    : debug << "SingleLegBenchDipAndKick"; break;
    case TricepsExtensionExerciseName::WeightedSingleLegBenchDipAndKick            : debug << "WeightedSingleLegBenchDipAndKick"; break;
    case TricepsExtensionExerciseName::SingleLegDip                                : debug << "SingleLegDip"; break;
    case TricepsExtensionExerciseName::WeightedSingleLegDip                        : debug << "WeightedSingleLegDip"; break;
    case TricepsExtensionExerciseName::StaticLyingTricepsExtension                 : debug << "StaticLyingTricepsExtension"; break;
    case TricepsExtensionExerciseName::SuspendedDip                                : debug << "SuspendedDip"; break;
    case TricepsExtensionExerciseName::WeightedSuspendedDip                        : debug << "WeightedSuspendedDip"; break;
    case TricepsExtensionExerciseName::SwissBallDumbbellLyingTricepsExtension      : debug << "SwissBallDumbbellLyingTricepsExtension"; break;
    case TricepsExtensionExerciseName::SwissBallEzBarLyingTricepsExtension         : debug << "SwissBallEzBarLyingTricepsExtension"; break;
    case TricepsExtensionExerciseName::SwissBallEzBarOverheadTricepsExtension      : debug << "SwissBallEzBarOverheadTricepsExtension"; break;
    case TricepsExtensionExerciseName::TabletopDip                                 : debug << "TabletopDip"; break;
    case TricepsExtensionExerciseName::WeightedTabletopDip                         : debug << "WeightedTabletopDip"; break;
    case TricepsExtensionExerciseName::TricepsExtensionOnFloor                     : debug << "TricepsExtensionOnFloor"; break;
    case TricepsExtensionExerciseName::TricepsPressdown                            : debug << "TricepsPressdown"; break;
    case TricepsExtensionExerciseName::WeightedDip                                 : debug << "WeightedDip"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const WarmUpExerciseName value)
{
    switch (value) {
    case WarmUpExerciseName::QuadrupedRocking           : debug << "QuadrupedRocking"; break;
    case WarmUpExerciseName::NeckTilts                  : debug << "NeckTilts"; break;
    case WarmUpExerciseName::AnkleCircles               : debug << "AnkleCircles"; break;
    case WarmUpExerciseName::AnkleDorsiflexionWithBand  : debug << "AnkleDorsiflexionWithBand"; break;
    case WarmUpExerciseName::AnkleInternalRotation      : debug << "AnkleInternalRotation"; break;
    case WarmUpExerciseName::ArmCircles                 : debug << "ArmCircles"; break;
    case WarmUpExerciseName::BentOverReachToSky         : debug << "BentOverReachToSky"; break;
    case WarmUpExerciseName::CatCamel                   : debug << "CatCamel"; break;
    case WarmUpExerciseName::ElbowToFootLunge           : debug << "ElbowToFootLunge"; break;
    case WarmUpExerciseName::ForwardAndBackwardLegSwings: debug << "ForwardAndBackwardLegSwings"; break;
    case WarmUpExerciseName::Groiners                   : debug << "Groiners"; break;
    case WarmUpExerciseName::InvertedHamstringStretch   : debug << "InvertedHamstringStretch"; break;
    case WarmUpExerciseName::LateralDuckUnder           : debug << "LateralDuckUnder"; break;
    case WarmUpExerciseName::NeckRotations              : debug << "NeckRotations"; break;
    case WarmUpExerciseName::OppositeArmAndLegBalance   : debug << "OppositeArmAndLegBalance"; break;
    case WarmUpExerciseName::ReachRollAndLift           : debug << "ReachRollAndLift"; break;
    case WarmUpExerciseName::Scorpion                   : debug << "Scorpion"; break;
    case WarmUpExerciseName::ShoulderCircles            : debug << "ShoulderCircles"; break;
    case WarmUpExerciseName::SideToSideLegSwings        : debug << "SideToSideLegSwings"; break;
    case WarmUpExerciseName::SleeperStretch             : debug << "SleeperStretch"; break;
    case WarmUpExerciseName::SlideOut                   : debug << "SlideOut"; break;
    case WarmUpExerciseName::SwissBallHipCrossover      : debug << "SwissBallHipCrossover"; break;
    case WarmUpExerciseName::SwissBallReachRollAndLift  : debug << "SwissBallReachRollAndLift"; break;
    case WarmUpExerciseName::SwissBallWindshieldWipers  : debug << "SwissBallWindshieldWipers"; break;
    case WarmUpExerciseName::ThoracicRotation           : debug << "ThoracicRotation"; break;
    case WarmUpExerciseName::WalkingHighKicks           : debug << "WalkingHighKicks"; break;
    case WarmUpExerciseName::WalkingHighKnees           : debug << "WalkingHighKnees"; break;
    case WarmUpExerciseName::WalkingKneeHugs            : debug << "WalkingKneeHugs"; break;
    case WarmUpExerciseName::WalkingLegCradles          : debug << "WalkingLegCradles"; break;
    case WarmUpExerciseName::Walkout                    : debug << "Walkout"; break;
    case WarmUpExerciseName::WalkoutFromPushUpPosition  : debug << "WalkoutFromPushUpPosition"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const RunExerciseName value)
{
    switch (value) {
    case RunExerciseName::Run   : debug << "Run"; break;
    case RunExerciseName::Walk  : debug << "Walk"; break;
    case RunExerciseName::Jog   : debug << "Jog"; break;
    case RunExerciseName::Sprint: debug << "Sprint"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const WaterType value)
{
    switch (value) {
    case WaterType::Fresh  : debug << "Fresh"; break;
    case WaterType::Salt   : debug << "Salt"; break;
    case WaterType::En13319: debug << "En13319"; break;
    case WaterType::Custom : debug << "Custom"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const TissueModelType value)
{
    switch (value) {
    case TissueModelType::Zhl16c: debug << "Zhl16c"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const DiveGasStatus value)
{
    switch (value) {
    case DiveGasStatus::Disabled  : debug << "Disabled"; break;
    case DiveGasStatus::Enabled   : debug << "Enabled"; break;
    case DiveGasStatus::BackupOnly: debug << "BackupOnly"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const DiveAlarmType value)
{
    switch (value) {
    case DiveAlarmType::Depth: debug << "Depth"; break;
    case DiveAlarmType::Time : debug << "Time"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const DiveBacklightMode value)
{
    switch (value) {
    case DiveBacklightMode::AtDepth : debug << "AtDepth"; break;
    case DiveBacklightMode::AlwaysOn: debug << "AlwaysOn"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const FaveroProduct value)
{
    switch (value) {
    case FaveroProduct::AssiomaUno: debug << "AssiomaUno"; break;
    case FaveroProduct::AssiomaDuo: debug << "AssiomaDuo"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const ClimbProEvent value)
{
    switch (value) {
    case ClimbProEvent::Approach: debug << "Approach"; break;
    case ClimbProEvent::Start   : debug << "Start"; break;
    case ClimbProEvent::Complete: debug << "Complete"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const TapSensitivity value)
{
    switch (value) {
    case TapSensitivity::High  : debug << "High"; break;
    case TapSensitivity::Medium: debug << "Medium"; break;
    case TapSensitivity::Low   : debug << "Low"; break;
    default: debug << "unknown";
    }
    return debug;
}

QDebug operator<<(QDebug debug, const RadarThreatLevelType value)
{
    switch (value) {
    case RadarThreatLevelType::ThreatUnknown        : debug << "ThreatUnknown"; break;
    case RadarThreatLevelType::ThreatNone           : debug << "ThreatNone"; break;
    case RadarThreatLevelType::ThreatApproaching    : debug << "ThreatApproaching"; break;
    case RadarThreatLevelType::ThreatApproachingFast: debug << "ThreatApproachingFast"; break;
    default: debug << "unknown";
    }
    return debug;
}

QTFIT_END_NAMESPACE
