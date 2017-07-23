/*  Copyright 2011 AIT Austrian Institute of Technology
*
*   This file is part of OpenTLD.
*
*   OpenTLD is free software: you can redistribute it and/or modify
*   it under the terms of the GNU General Public License as published by
*    the Free Software Foundation, either version 3 of the License, or
*   (at your option) any later version.
*
*   OpenTLD is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*   GNU General Public License for more details.
*
*   You should have received a copy of the GNU General Public License
*   along with OpenTLD.  If not, see <http://www.gnu.org/licenses/>.
*
*/

#include "Settings.h"

using namespace std;

/**
 * @author Clemens Korner
 */

namespace tld
{
    Settings::Settings() :
        m_useProportionalShift(true),
        m_varianceFilterEnabled(true),
        m_ensembleClassifierEnabled(true),
        m_nnClassifierEnabled(true),
        m_trackerEnabled(true),
        m_detectorEnabled(true),
        m_selectManually(false),
        m_learningEnabled(true),
        m_showOutput(true),
        m_showNotConfident(true),
        m_showColorImage(false),
        m_showDetections(false),
        m_saveOutput(false),
        m_alternating(false),
        m_useDsstTracker(false),
        m_trajectory(0),
        m_method(IMACQ_CAM),
        m_startFrame(1),
        m_lastFrame(0),
        m_minScale(-10),
        m_maxScale(10),
        m_numFeatures(13),
        m_numTrees(10),
        m_thetaP(0.55f),
        m_thetaN(0.5f),
        m_minSize(25),
        m_camNo(0),
        m_fps(24),
        m_seed(0),
        m_threshold(0.7f),
        m_proportionalShift(0.1f),
        m_initialBoundingBox(vector<int>())
    {
    }

    Settings::~Settings()
    {
    }
}
