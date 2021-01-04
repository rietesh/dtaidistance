//
//  dd_globals.c
//  DTAIDistanceC
//
//  Created by Wannes Meert on 24/08/2020.
//  Copyright © 2020 Wannes Meert. All rights reserved.
//

#include <stdio.h>
#include "dd_ed.h"

bool is_openmp_supported() {
#if defined(_OPENMP)
    return true;
#else
    return false;
#endif
}
