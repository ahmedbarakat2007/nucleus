/**
 * (c) 2015 Alexandro Sanchez Bach. All rights reserved.
 * Released under GPL v2 license. Read LICENSE for more details.
 */

#include "widget.h"
#include "nucleus/ui/ui.h"

namespace ui {

float Widget::getCoordinateX(Length x)
{
    float coordinate;
    switch (x.unit) {
    case Length::Unit::PCT:
        coordinate = (x.value * 2.0f) - 1.0f;
        break;
    }
    return coordinate;
}

float Widget::getCoordinateY(Length y)
{
    float coordinate;
    switch (y.unit) {
    case Length::Unit::PCT:
        coordinate = 1.0f - (y.value * 2.0f);
        break;
    }

    return coordinate;
}

Length Widget::correctHeight(Length height)
{
    //height.value *= ui.surfaceProportion;
    return height;
}

}  // namespace ui
