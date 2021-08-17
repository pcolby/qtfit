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

#include "fitdatamessage.h"
#include "fitdatamessage_p.h"

#include "fileidmessage.h"
//#include "fileidmessage.h"
//#include "capabilitiesmessage.h"
//#include "devicesettingsmessage.h"
//#include "userprofilemessage.h"
//#include "hrmprofilemessage.h"
//#include "sdmprofilemessage.h"
//#include "bikeprofilemessage.h"
//#include "zonestargetmessage.h"
//#include "hrzonemessage.h"
//#include "powerzonemessage.h"
//#include "metzonemessage.h"
//#include "sportmessage.h"
//#include "goalmessage.h"
//#include "sessionmessage.h"
//#include "lapmessage.h"
//#include "recordmessage.h"
//#include "eventmessage.h"
//#include "deviceinfomessage.h"
//#include "workoutmessage.h"
//#include "workoutstepmessage.h"
//#include "schedulemessage.h"
//#include "weightscalemessage.h"
//#include "coursemessage.h"
//#include "coursepointmessage.h"
//#include "totalsmessage.h"
//#include "activitymessage.h"
//#include "softwaremessage.h"
//#include "filecapabilitiesmessage.h"
//#include "mesgcapabilitiesmessage.h"
//#include "fieldcapabilitiesmessage.h"
//#include "filecreatormessage.h"
//#include "bloodpressuremessage.h"
//#include "speedzonemessage.h"
//#include "monitoringmessage.h"
//#include "trainingfilemessage.h"
//#include "hrvmessage.h"
//#include "antrxmessage.h"
//#include "anttxmessage.h"
//#include "antchannelidmessage.h"
//#include "lengthmessage.h"
//#include "monitoringinfomessage.h"
//#include "padmessage.h"
//#include "slavedevicemessage.h"
//#include "connectivitymessage.h"
//#include "weatherconditionsmessage.h"
//#include "weatheralertmessage.h"
//#include "cadencezonemessage.h"
//#include "hrmessage.h"
//#include "segmentlapmessage.h"
//#include "memoglobmessage.h"
//#include "segmentidmessage.h"
//#include "segmentleaderboardentrymessage.h"
//#include "segmentpointmessage.h"
//#include "segmentfilemessage.h"
//#include "workoutsessionmessage.h"
//#include "watchfacesettingsmessage.h"
//#include "gpsmetadatamessage.h"
//#include "cameraeventmessage.h"
//#include "timestampcorrelationmessage.h"
//#include "gyroscopedatamessage.h"
//#include "accelerometerdatamessage.h"
//#include "threedsensorcalibrationmessage.h"
//#include "videoframemessage.h"
//#include "obdiidatamessage.h"
//#include "nmeasentencemessage.h"
//#include "aviationattitudemessage.h"
//#include "videomessage.h"
//#include "videotitlemessage.h"
//#include "videodescriptionmessage.h"
//#include "videoclipmessage.h"
//#include "ohrsettingsmessage.h"
//#include "exdscreenconfigurationmessage.h"
//#include "exddatafieldconfigurationmessage.h"
//#include "exddataconceptconfigurationmessage.h"
//#include "fielddescriptionmessage.h"
//#include "developerdataidmessage.h"
//#include "magnetometerdatamessage.h"
//#include "barometerdatamessage.h"
//#include "onedsensorcalibrationmessage.h"
//#include "setmessage.h"
//#include "stresslevelmessage.h"
//#include "divesettingsmessage.h"
//#include "divegasmessage.h"
//#include "divealarmmessage.h"
//#include "exercisetitlemessage.h"
//#include "divesummarymessage.h"
//#include "jumpmessage.h"
//#include "climbpromessage.h"
//#include "mfgrangeminmessage.h"
//#include "mfgrangemaxmessage.h"

QTFIT_BEGIN_NAMESPACE

FitDataMessage * FitDataMessage::fromData(const DataDefinition * const defn, const QByteArray &record)
{
    Q_ASSERT(defn);
    FitDataMessage * message = nullptr;
    switch (defn->globalMessageNumber) {
    case MesgNum::FileId                     : message = nullptr; break; //new FileIdMessage              ; break;
    case MesgNum::Capabilities               : message = nullptr; break; //new CapabilitiesMessage        ; break;
    case MesgNum::DeviceSettings             : message = nullptr; break; //new DeviceSettingsMessage      ; break;
    case MesgNum::UserProfile                : message = nullptr; break; //new UserProfileMessage         ; break;
    case MesgNum::HrmProfile                 : message = nullptr; break; //new HrmProfileMessage          ; break;
    case MesgNum::SdmProfile                 : message = nullptr; break; //new SdmProfileMessage          ; break;
    case MesgNum::BikeProfile                : message = nullptr; break; //new BikeProfileMessage         ; break;
    case MesgNum::ZonesTarget                : message = nullptr; break; //new ZonesTargetMessage         ; break;
    case MesgNum::HrZone                     : message = nullptr; break; //new HrZoneMessage              ; break;
    case MesgNum::PowerZone                  : message = nullptr; break; //new PowerZoneMessage           ; break;
    case MesgNum::MetZone                    : message = nullptr; break; //new MetZoneMessage             ; break;
    case MesgNum::Sport                      : message = nullptr; break; //new SportMessage               ; break;
    case MesgNum::Goal                       : message = nullptr; break; //new GoalMessage                ; break;
    case MesgNum::Session                    : message = nullptr; break; //new SessionMessage             ; break;
    case MesgNum::Lap                        : message = nullptr; break; //new LapMessage                 ; break;
    case MesgNum::Record                     : message = nullptr; break; //new RecordMessage              ; break;
    case MesgNum::Event                      : message = nullptr; break; //new EventMessage               ; break;
    case MesgNum::DeviceInfo                 : message = nullptr; break; //new DeviceInfoMessage          ; break;
    case MesgNum::Workout                    : message = nullptr; break; //new WorkoutMessage             ; break;
    case MesgNum::WorkoutStep                : message = nullptr; break; //new WorkoutStepMessage         ; break;
    case MesgNum::Schedule                   : message = nullptr; break; //new ScheduleMessage            ; break;
    case MesgNum::WeightScale                : message = nullptr; break; //new WeightScaleMessage         ; break;
    case MesgNum::Course                     : message = nullptr; break; //new CourseMessage              ; break;
    case MesgNum::CoursePoint                : message = nullptr; break; //new CoursePointMessage         ; break;
    case MesgNum::Totals                     : message = nullptr; break; //new TotalsMessage              ; break;
    case MesgNum::Activity                   : message = nullptr; break; //new ActivityMessage            ; break;
    case MesgNum::Software                   : message = nullptr; break; //new SoftwareMessage            ; break;
    case MesgNum::FileCapabilities           : message = nullptr; break; //new FileCapabilitiesMessage    ; break;
    case MesgNum::MesgCapabilities           : message = nullptr; break; //new MesgCapabilitiesMessage    ; break;
    case MesgNum::FieldCapabilities          : message = nullptr; break; //new FieldCapabilitiesMessage   ; break;
    case MesgNum::FileCreator                : message = nullptr; break; //new FileCreatorMessage         ; break;
    case MesgNum::BloodPressure              : message = nullptr; break; //new BloodPressureMessage       ; break;
    case MesgNum::SpeedZone                  : message = nullptr; break; //new SpeedZoneMessage           ; break;
    case MesgNum::Monitoring                 : message = nullptr; break; //new MonitoringMessage          ; break;
    case MesgNum::TrainingFile               : message = nullptr; break; //new TrainingFileMessage        ; break;
    case MesgNum::Hrv                        : message = nullptr; break; //new HrvMessage                 ; break;
    case MesgNum::AntRx                      : message = nullptr; break; //new AntRxMessage               ; break;
    case MesgNum::AntTx                      : message = nullptr; break; //new AntTxMessage               ; break;
    case MesgNum::AntChannelId               : message = nullptr; break; //new AntChannelIdMessage        ; break;
    case MesgNum::Length                     : message = nullptr; break; //new LengthMessage              ; break;
    case MesgNum::MonitoringInfo             : message = nullptr; break; //new MonitoringInfoMessage      ; break;
    case MesgNum::Pad                        : message = nullptr; break; //new PadMessage                 ; break;
    case MesgNum::SlaveDevice                : message = nullptr; break; //new SlaveDeviceMessage         ; break;
    case MesgNum::Connectivity               : message = nullptr; break; //new ConnectivityMessage        ; break;
    case MesgNum::WeatherConditions          : message = nullptr; break; //new WeatherConditionsMessage   ; break;
    case MesgNum::WeatherAlert               : message = nullptr; break; //new WeatherAlertMessage        ; break;
    case MesgNum::CadenceZone                : message = nullptr; break; //new CadenceZoneMessage         ; break;
    case MesgNum::Hr                         : message = nullptr; break; //new HrMessage                  ; break;
    case MesgNum::SegmentLap                 : message = nullptr; break; //new SegmentLapMessage          ; break;
    case MesgNum::MemoGlob                   : message = nullptr; break; //new MemoGlobMessage            ; break;
    case MesgNum::SegmentId                  : message = nullptr; break; //new SegmentIdMessage           ; break;
    case MesgNum::SegmentLeaderboardEntry    : message = nullptr; break; //new SegmentLeaderboardEntryMessage; break;
    case MesgNum::SegmentPoint               : message = nullptr; break; //new SegmentPointMessage        ; break;
    case MesgNum::SegmentFile                : message = nullptr; break; //new SegmentFileMessage         ; break;
    case MesgNum::WorkoutSession             : message = nullptr; break; //new WorkoutSessionMessage      ; break;
    case MesgNum::WatchfaceSettings          : message = nullptr; break; //new WatchfaceSettingsMessage   ; break;
    case MesgNum::GpsMetadata                : message = nullptr; break; //new GpsMetadataMessage         ; break;
    case MesgNum::CameraEvent                : message = nullptr; break; //new CameraEventMessage         ; break;
    case MesgNum::TimestampCorrelation       : message = nullptr; break; //new TimestampCorrelationMessage; break;
    case MesgNum::GyroscopeData              : message = nullptr; break; //new GyroscopeDataMessage       ; break;
    case MesgNum::AccelerometerData          : message = nullptr; break; //new AccelerometerDataMessage   ; break;
    case MesgNum::ThreeDSensorCalibration    : message = nullptr; break; //new ThreeDSensorCalibrationMessage; break;
    case MesgNum::VideoFrame                 : message = nullptr; break; //new VideoFrameMessage          ; break;
    case MesgNum::ObdiiData                  : message = nullptr; break; //new ObdiiDataMessage           ; break;
    case MesgNum::NmeaSentence               : message = nullptr; break; //new NmeaSentenceMessage        ; break;
    case MesgNum::AviationAttitude           : message = nullptr; break; //new AviationAttitudeMessage    ; break;
    case MesgNum::Video                      : message = nullptr; break; //new VideoMessage               ; break;
    case MesgNum::VideoTitle                 : message = nullptr; break; //new VideoTitleMessage          ; break;
    case MesgNum::VideoDescription           : message = nullptr; break; //new VideoDescriptionMessage    ; break;
    case MesgNum::VideoClip                  : message = nullptr; break; //new VideoClipMessage           ; break;
    case MesgNum::OhrSettings                : message = nullptr; break; //new OhrSettingsMessage         ; break;
    case MesgNum::ExdScreenConfiguration     : message = nullptr; break; //new ExdScreenConfigurationMessage; break;
    case MesgNum::ExdDataFieldConfiguration  : message = nullptr; break; //new ExdDataFieldConfigurationMessage; break;
    case MesgNum::ExdDataConceptConfiguration: message = nullptr; break; //new ExdDataConceptConfigurationMessage; break;
    case MesgNum::FieldDescription           : message = nullptr; break; //new FieldDescriptionMessage    ; break;
    case MesgNum::DeveloperDataId            : message = nullptr; break; //new DeveloperDataIdMessage     ; break;
    case MesgNum::MagnetometerData           : message = nullptr; break; //new MagnetometerDataMessage    ; break;
    case MesgNum::BarometerData              : message = nullptr; break; //new BarometerDataMessage       ; break;
    case MesgNum::OneDSensorCalibration      : message = nullptr; break; //new OneDSensorCalibrationMessage; break;
    case MesgNum::Set                        : message = nullptr; break; //new SetMessage                 ; break;
    case MesgNum::StressLevel                : message = nullptr; break; //new StressLevelMessage         ; break;
    case MesgNum::DiveSettings               : message = nullptr; break; //new DiveSettingsMessage        ; break;
    case MesgNum::DiveGas                    : message = nullptr; break; //new DiveGasMessage             ; break;
    case MesgNum::DiveAlarm                  : message = nullptr; break; //new DiveAlarmMessage           ; break;
    case MesgNum::ExerciseTitle              : message = nullptr; break; //new ExerciseTitleMessage       ; break;
    case MesgNum::DiveSummary                : message = nullptr; break; //new DiveSummaryMessage         ; break;
    case MesgNum::Jump                       : message = nullptr; break; //new JumpMessage                ; break;
    case MesgNum::ClimbPro                   : message = nullptr; break; //new ClimbProMessage            ; break;
    case MesgNum::MfgRangeMin                : message = nullptr; break; //new MfgRangeMinMessage         ; break;
    case MesgNum::MfgRangeMax                : message = nullptr; break; //new MfgRangeMaxMessage         ; break;
    }
    if (message) {
        message->d_ptr->setFields(defn, record);
    }
    return message;
}

QTFIT_END_NAMESPACE
