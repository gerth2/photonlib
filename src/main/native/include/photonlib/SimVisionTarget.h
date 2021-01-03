/**
 * Copyright (C) 2020-2021 Photon Vision.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#pragma once

#include <frc/geometry/Pose2d.h>
#include <units/area.h>
#include <units/length.h>

namespace photonlib {

/**
 * Represents a target on the field which the vision processing system could detect.
 */
class SimVisionTarget {
 public:

  explicit SimVisionTarget(frc::Pose2d& targetPos, units::length::meter_t targetHeightAboveGroundMeters, units::length::meter_t targetWidthMeters, units::length::meter_t targetHeightMeters);

  frc::Pose2d targetPos;
  units::length::meter_t targetHeightAboveGroundMeters;
  units::length::meter_t targetWidthMeters;
  units::length::meter_t targetHeightMeters;
  double targetInfill_pct;
  units::area::square_meter_t tgtAreaMeters2;

};

}  // namespace photonlib
