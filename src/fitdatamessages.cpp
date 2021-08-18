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

#include "accelerometerdatamessage.h"
#include "activitymessage.h"
#include "antchannelidmessage.h"
#include "antrxmessage.h"
#include "anttxmessage.h"
#include "aviationattitudemessage.h"
#include "barometerdatamessage.h"
#include "bikeprofilemessage.h"
#include "bloodpressuremessage.h"
#include "cadencezonemessage.h"
#include "cameraeventmessage.h"
#include "capabilitiesmessage.h"
#include "climbpromessage.h"
#include "connectivitymessage.h"
#include "coursemessage.h"
#include "coursepointmessage.h"
#include "developerdataidmessage.h"
#include "deviceinfomessage.h"
#include "devicesettingsmessage.h"
#include "divealarmmessage.h"
#include "divegasmessage.h"
#include "divesettingsmessage.h"
#include "divesummarymessage.h"
#include "eventmessage.h"
#include "exddataconceptconfigurationmessage.h"
#include "exddatafieldconfigurationmessage.h"
#include "exdscreenconfigurationmessage.h"
#include "exercisetitlemessage.h"
#include "fieldcapabilitiesmessage.h"
#include "fielddescriptionmessage.h"
#include "filecapabilitiesmessage.h"
#include "filecreatormessage.h"
#include "fileidmessage.h"
#include "goalmessage.h"
#include "gpsmetadatamessage.h"
#include "gyroscopedatamessage.h"
#include "hrmessage.h"
#include "hrzonemessage.h"
#include "hrmprofilemessage.h"
#include "hrvmessage.h"
#include "jumpmessage.h"
#include "lapmessage.h"
#include "lengthmessage.h"
#include "magnetometerdatamessage.h"
#include "memoglobmessage.h"
#include "mesgcapabilitiesmessage.h"
#include "metzonemessage.h"
//#include "mfgrangemaxmessage.h"
//#include "mfgrangeminmessage.h"
#include "monitoringmessage.h"
#include "monitoringinfomessage.h"
#include "nmeasentencemessage.h"
#include "obdiidatamessage.h"
#include "ohrsettingsmessage.h"
#include "onedsensorcalibrationmessage.h"
//#include "padmessage.h"
#include "powerzonemessage.h"
#include "recordmessage.h"
#include "schedulemessage.h"
#include "sdmprofilemessage.h"
#include "segmentfilemessage.h"
#include "segmentidmessage.h"
#include "segmentlapmessage.h"
#include "segmentleaderboardentrymessage.h"
#include "segmentpointmessage.h"
#include "sessionmessage.h"
#include "setmessage.h"
#include "slavedevicemessage.h"
#include "softwaremessage.h"
#include "speedzonemessage.h"
#include "sportmessage.h"
#include "stresslevelmessage.h"
#include "threedsensorcalibrationmessage.h"
#include "timestampcorrelationmessage.h"
#include "totalsmessage.h"
#include "trainingfilemessage.h"
#include "userprofilemessage.h"
#include "videomessage.h"
#include "videoclipmessage.h"
#include "videodescriptionmessage.h"
#include "videoframemessage.h"
#include "videotitlemessage.h"
#include "watchfacesettingsmessage.h"
#include "weatheralertmessage.h"
#include "weatherconditionsmessage.h"
#include "weightscalemessage.h"
#include "workoutmessage.h"
#include "workoutsessionmessage.h"
#include "workoutstepmessage.h"
#include "zonestargetmessage.h"

QTFIT_BEGIN_NAMESPACE

FitDataMessage * FitDataMessage::fromData(const DataDefinition * const defn, const QByteArray &record)
{
    Q_ASSERT(defn);
    FitDataMessage * message = nullptr;
    switch (defn->globalMessageNumber) {
    case MesgNum::FileId                     : message = new FileIdMessage              ; break;
    case MesgNum::Capabilities               : message = new CapabilitiesMessage        ; break;
    case MesgNum::DeviceSettings             : message = new DeviceSettingsMessage      ; break;
    case MesgNum::UserProfile                : message = new UserProfileMessage         ; break;
    case MesgNum::HrmProfile                 : message = new HrmProfileMessage          ; break;
    case MesgNum::SdmProfile                 : message = new SdmProfileMessage          ; break;
    case MesgNum::BikeProfile                : message = new BikeProfileMessage         ; break;
    case MesgNum::ZonesTarget                : message = new ZonesTargetMessage         ; break;
    case MesgNum::HrZone                     : message = new HrZoneMessage              ; break;
    case MesgNum::PowerZone                  : message = new PowerZoneMessage           ; break;
    case MesgNum::MetZone                    : message = new MetZoneMessage             ; break;
    case MesgNum::Sport                      : message = new SportMessage               ; break;
    case MesgNum::Goal                       : message = new GoalMessage                ; break;
    case MesgNum::Session                    : message = new SessionMessage             ; break;
    case MesgNum::Lap                        : message = new LapMessage                 ; break;
    case MesgNum::Record                     : message = new RecordMessage              ; break;
    case MesgNum::Event                      : message = new EventMessage               ; break;
    case MesgNum::DeviceInfo                 : message = new DeviceInfoMessage          ; break;
    case MesgNum::Workout                    : message = new WorkoutMessage             ; break;
    case MesgNum::WorkoutStep                : message = new WorkoutStepMessage         ; break;
    case MesgNum::Schedule                   : message = new ScheduleMessage            ; break;
    case MesgNum::WeightScale                : message = new WeightScaleMessage         ; break;
    case MesgNum::Course                     : message = new CourseMessage              ; break;
    case MesgNum::CoursePoint                : message = new CoursePointMessage         ; break;
    case MesgNum::Totals                     : message = new TotalsMessage              ; break;
    case MesgNum::Activity                   : message = new ActivityMessage            ; break;
    case MesgNum::Software                   : message = new SoftwareMessage            ; break;
    case MesgNum::FileCapabilities           : message = new FileCapabilitiesMessage    ; break;
    case MesgNum::MesgCapabilities           : message = new MesgCapabilitiesMessage    ; break;
    case MesgNum::FieldCapabilities          : message = new FieldCapabilitiesMessage   ; break;
    case MesgNum::FileCreator                : message = new FileCreatorMessage         ; break;
    case MesgNum::BloodPressure              : message = new BloodPressureMessage       ; break;
    case MesgNum::SpeedZone                  : message = new SpeedZoneMessage           ; break;
    case MesgNum::Monitoring                 : message = new MonitoringMessage          ; break;
    case MesgNum::TrainingFile               : message = new TrainingFileMessage        ; break;
    case MesgNum::Hrv                        : message = new HrvMessage                 ; break;
    case MesgNum::AntRx                      : message = new AntRxMessage               ; break;
    case MesgNum::AntTx                      : message = new AntTxMessage               ; break;
    case MesgNum::AntChannelId               : message = new AntChannelIdMessage        ; break;
    case MesgNum::Length                     : message = new LengthMessage              ; break;
    case MesgNum::MonitoringInfo             : message = new MonitoringInfoMessage      ; break;
    case MesgNum::Pad                        : message = nullptr; break;
    case MesgNum::SlaveDevice                : message = new SlaveDeviceMessage         ; break;
    case MesgNum::Connectivity               : message = new ConnectivityMessage        ; break;
    case MesgNum::WeatherConditions          : message = new WeatherConditionsMessage   ; break;
    case MesgNum::WeatherAlert               : message = new WeatherAlertMessage        ; break;
    case MesgNum::CadenceZone                : message = new CadenceZoneMessage         ; break;
    case MesgNum::Hr                         : message = new HrMessage                  ; break;
    case MesgNum::SegmentLap                 : message = new SegmentLapMessage          ; break;
    case MesgNum::MemoGlob                   : message = new MemoGlobMessage            ; break;
    case MesgNum::SegmentId                  : message = new SegmentIdMessage           ; break;
    case MesgNum::SegmentLeaderboardEntry    : message = new SegmentLeaderboardEntryMessage; break;
    case MesgNum::SegmentPoint               : message = new SegmentPointMessage        ; break;
    case MesgNum::SegmentFile                : message = new SegmentFileMessage         ; break;
    case MesgNum::WorkoutSession             : message = new WorkoutSessionMessage      ; break;
    case MesgNum::WatchfaceSettings          : message = new WatchfaceSettingsMessage   ; break;
    case MesgNum::GpsMetadata                : message = new GpsMetadataMessage         ; break;
    case MesgNum::CameraEvent                : message = new CameraEventMessage         ; break;
    case MesgNum::TimestampCorrelation       : message = new TimestampCorrelationMessage; break;
    case MesgNum::GyroscopeData              : message = new GyroscopeDataMessage       ; break;
    case MesgNum::AccelerometerData          : message = new AccelerometerDataMessage   ; break;
    case MesgNum::ThreeDSensorCalibration    : message = new ThreeDSensorCalibrationMessage; break;
    case MesgNum::VideoFrame                 : message = new VideoFrameMessage          ; break;
    case MesgNum::ObdiiData                  : message = new ObdiiDataMessage           ; break;
    case MesgNum::NmeaSentence               : message = new NmeaSentenceMessage        ; break;
    case MesgNum::AviationAttitude           : message = new AviationAttitudeMessage    ; break;
    case MesgNum::Video                      : message = new VideoMessage               ; break;
    case MesgNum::VideoTitle                 : message = new VideoTitleMessage          ; break;
    case MesgNum::VideoDescription           : message = new VideoDescriptionMessage    ; break;
    case MesgNum::VideoClip                  : message = new VideoClipMessage           ; break;
    case MesgNum::OhrSettings                : message = new OhrSettingsMessage         ; break;
    case MesgNum::ExdScreenConfiguration     : message = new ExdScreenConfigurationMessage; break;
    case MesgNum::ExdDataFieldConfiguration  : message = new ExdDataFieldConfigurationMessage; break;
    case MesgNum::ExdDataConceptConfiguration: message = new ExdDataConceptConfigurationMessage; break;
    case MesgNum::FieldDescription           : message = new FieldDescriptionMessage    ; break;
    case MesgNum::DeveloperDataId            : message = new DeveloperDataIdMessage     ; break;
    case MesgNum::MagnetometerData           : message = new MagnetometerDataMessage    ; break;
    case MesgNum::BarometerData              : message = new BarometerDataMessage       ; break;
    case MesgNum::OneDSensorCalibration      : message = new OneDSensorCalibrationMessage; break;
    case MesgNum::Set                        : message = new SetMessage                 ; break;
    case MesgNum::StressLevel                : message = new StressLevelMessage         ; break;
    case MesgNum::DiveSettings               : message = new DiveSettingsMessage        ; break;
    case MesgNum::DiveGas                    : message = new DiveGasMessage             ; break;
    case MesgNum::DiveAlarm                  : message = new DiveAlarmMessage           ; break;
    case MesgNum::ExerciseTitle              : message = new ExerciseTitleMessage       ; break;
    case MesgNum::DiveSummary                : message = new DiveSummaryMessage         ; break;
    case MesgNum::Jump                       : message = new JumpMessage                ; break;
    case MesgNum::ClimbPro                   : message = new ClimbProMessage            ; break;
    case MesgNum::MfgRangeMin                : message = nullptr; break;
    case MesgNum::MfgRangeMax                : message = nullptr; break;
    }
    if (message) {
        message->d_ptr->setFields(defn, record);
    }
    return message;
}

QTFIT_END_NAMESPACE
