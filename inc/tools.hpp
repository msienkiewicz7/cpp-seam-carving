#ifndef _SEAMCARVE_MAIN_CPP
#define _SEAMCARVE_MAIN_CPP

#include <iostream>
#include <cstdlib>

#include <boost/gil.hpp>
#include <boost/gil/io/io.hpp>
#include <boost/gil/extension/io/jpeg.hpp>
#include <boost/gil/extension/io/png.hpp>

//include <boost/python/numpy.hpp>

namespace seam_carving {

    /* Additional:
     * - maximal mögliche Reduktion selbst berechenen
     * - horizontal + vertikale Anwendung des Seam-Carvings
    **/

    boost::gil::gray8c_view_t magnitude_of_gradients(boost::gil::rgba8_image_t rgb_image);

    boost::gil::gray8c_view_t filter(boost::gil::gray8c_view_t image, const signed int kernel[]);

    boost::gil::gray8c_view_t calculate_accum_energy(boost::gil::gray8c_view_t energy);

    int* create_seam_mask(boost::gil::gray8c_view_t accum_energy);

    //boost image representation as return value
    boost::gil::gray8c_view_t seam_carve(boost::gil::rgba8_image_t src, const int seam_mask[], const int seam_mask_size);

}

#endif