#ifndef _SEAMCARVE_ALGORITHM_HPP
#define _SEAMCARVE_ALGORITHM_HPP

#include <boost/gil.hpp>

namespace tools {

    namespace algorithm {

        boost::gil::rgb8_view_t pixel_energy(boost::gil::rgb8_view_t energy_view);

        int* find_seam(boost::gil::rgb8_view_t accumE);

        boost::gil::rgb8_view_t carve_seam(boost::gil::rgb8_view_t view_original, int* seam);

    }

}

#endif