#include <string>
namespace luxrays { namespace ocl {
std::string KernelSource_ray_funcs = 
"#line 2 \"ray_funcs.cl\"\n"
"\n"
"/***************************************************************************\n"
" *   Copyright (C) 1998-2013 by authors (see AUTHORS.txt)                  *\n"
" *                                                                         *\n"
" *   This file is part of LuxRays.                                         *\n"
" *                                                                         *\n"
" *   LuxRays is free software; you can redistribute it and/or modify       *\n"
" *   it under the terms of the GNU General Public License as published by  *\n"
" *   the Free Software Foundation; either version 3 of the License, or     *\n"
" *   (at your option) any later version.                                   *\n"
" *                                                                         *\n"
" *   LuxRays is distributed in the hope that it will be useful,            *\n"
" *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *\n"
" *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *\n"
" *   GNU General Public License for more details.                          *\n"
" *                                                                         *\n"
" *   You should have received a copy of the GNU General Public License     *\n"
" *   along with this program.  If not, see <http://www.gnu.org/licenses/>. *\n"
" *                                                                         *\n"
" *   LuxRays website: http://www.luxrender.net                             *\n"
" ***************************************************************************/\n"
"\n"
"void Ray_Init4(__global Ray *ray, const float3 orig, const float3 dir,\n"
"		const float mint, const float maxt) {\n"
"	VSTORE3F(orig, &ray->o.x);\n"
"	VSTORE3F(dir, &ray->d.x);\n"
"	ray->mint = mint;\n"
"	ray->maxt = maxt;\n"
"}\n"
"\n"
"void Ray_Init3(__global Ray *ray, const float3 orig, const float3 dir, const float maxt) {\n"
"	VSTORE3F(orig, &ray->o.x);\n"
"	VSTORE3F(dir, &ray->d.x);\n"
"	ray->mint = MachineEpsilon_E_Float3(orig);\n"
"	ray->maxt = maxt;\n"
"}\n"
"\n"
"void Ray_Init2(__global Ray *ray, const float3 orig, const float3 dir) {\n"
"	VSTORE3F(orig, &ray->o.x);\n"
"	VSTORE3F(dir, &ray->d.x);\n"
"	ray->mint = MachineEpsilon_E_Float3(orig);\n"
"	ray->maxt = INFINITY;\n"
"}\n"
; } }