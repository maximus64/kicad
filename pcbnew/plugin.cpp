/*
 * This program source code file is part of KiCad, a free EDA CAD application.
 *
 * Copyright (C) 2011-2012 SoftPLC Corporation, Dick Hollenbeck <dick@softplc.com>
 * Copyright (C) 2016-2020 KiCad Developers, see AUTHORS.txt for contributors.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, you may find one here:
 * http://www.gnu.org/licenses/old-licenses/gpl-2.0.html
 * or you may search the http://www.gnu.org website for the version 2 license,
 * or you may write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA
 */

#include <io_mgr.h>
#include <string_utf8_map.h>
#include <wx/translation.h>


#define FMT_UNIMPLEMENTED   wxT( "Plugin \"%s\" does not implement the \"%s\" function." )

/**
 * Throw an #IO_ERROR and complains of an API function not being implemented.
 *
 * @param aPlugin is a #PLUGIN instance.
 * @param aCaller is the name of the unimplemented API function.
 */
static void not_implemented( PLUGIN* aPlugin, const char* aCaller )
{
    THROW_IO_ERROR( wxString::Format( FMT_UNIMPLEMENTED,
                                      aPlugin->PluginName(),
                                      wxString::FromUTF8( aCaller ) ) );
}


BOARD* PLUGIN::Load( const wxString& aFileName, BOARD* aAppendToMe, const STRING_UTF8_MAP* aProperties,
                     PROJECT* aProject, PROGRESS_REPORTER* aProgressReporter )
{
    not_implemented( this, __FUNCTION__ );
    return nullptr;
}


std::vector<FOOTPRINT*> PLUGIN::GetImportedCachedLibraryFootprints()
{
    not_implemented( this, __FUNCTION__ );
    return std::vector<FOOTPRINT*>();
}

void PLUGIN::Save( const wxString& aFileName, BOARD* aBoard, const STRING_UTF8_MAP* aProperties )
{
    // not pure virtual so that plugins only have to implement subset of the PLUGIN interface.
    not_implemented( this, __FUNCTION__ );
}


void PLUGIN::FootprintEnumerate( wxArrayString& aFootprintNames, const wxString& aLibraryPath,
                                 bool aBestEfforts, const STRING_UTF8_MAP* aProperties )
{
    // not pure virtual so that plugins only have to implement subset of the PLUGIN interface.
    not_implemented( this, __FUNCTION__ );
}


void PLUGIN::PrefetchLib( const wxString&, const STRING_UTF8_MAP* )
{
}


const FOOTPRINT* PLUGIN::GetEnumeratedFootprint( const wxString& aLibraryPath,
                                                 const wxString& aFootprintName,
                                                 const STRING_UTF8_MAP* aProperties )
{
    // default implementation
    return FootprintLoad( aLibraryPath, aFootprintName, false, aProperties );
}


bool PLUGIN::FootprintExists( const wxString& aLibraryPath, const wxString& aFootprintName,
                              const STRING_UTF8_MAP* aProperties )
{
    // default implementation
    return FootprintLoad( aLibraryPath, aFootprintName, true, aProperties ) != nullptr;
}


FOOTPRINT* PLUGIN::FootprintLoad( const wxString& aLibraryPath, const wxString& aFootprintName,
                                  bool  aKeepUUID, const STRING_UTF8_MAP* aProperties )
{
    // not pure virtual so that plugins only have to implement subset of the PLUGIN interface.
    not_implemented( this, __FUNCTION__ );
    return nullptr;
}


void PLUGIN::FootprintSave( const wxString& aLibraryPath, const FOOTPRINT* aFootprint,
                            const STRING_UTF8_MAP* aProperties )
{
    // not pure virtual so that plugins only have to implement subset of the PLUGIN interface.
    not_implemented( this, __FUNCTION__ );
}


void PLUGIN::FootprintDelete( const wxString& aLibraryPath, const wxString& aFootprintName,
                              const STRING_UTF8_MAP* aProperties )
{
    // not pure virtual so that plugins only have to implement subset of the PLUGIN interface.
    not_implemented( this, __FUNCTION__ );
}


void PLUGIN::FootprintLibCreate( const wxString& aLibraryPath, const STRING_UTF8_MAP* aProperties )
{
    // not pure virtual so that plugins only have to implement subset of the PLUGIN interface.
    not_implemented( this, __FUNCTION__ );
}


bool PLUGIN::FootprintLibDelete( const wxString& aLibraryPath, const STRING_UTF8_MAP* aProperties )
{
    // not pure virtual so that plugins only have to implement subset of the PLUGIN interface.
    not_implemented( this, __FUNCTION__ );
    return false;
}


bool PLUGIN::IsFootprintLibWritable( const wxString& aLibraryPath )
{
    // not pure virtual so that plugins only have to implement subset of the PLUGIN interface.
    not_implemented( this, __FUNCTION__ );
    return false;
}


void PLUGIN::FootprintLibOptions( STRING_UTF8_MAP* aListToAppendTo ) const
{
    // disable all these in another couple of months, after everyone has seen them:
#if 1
    (*aListToAppendTo)["debug_level"] = UTF8( _( "Enable <b>debug</b> logging for Footprint*() "
                                                 "functions in this PLUGIN." ) );

    (*aListToAppendTo)["read_filter_regex"] = UTF8( _( "Regular expression <b>footprint name</b> "
                                                       "filter." ) );

    (*aListToAppendTo)["enable_transaction_logging"] = UTF8( _( "Enable transaction logging. The "
                                                                "mere presence of this option "
                                                                "turns on the logging, no need to "
                                                                "set a Value." ) );

    (*aListToAppendTo)["username"] = UTF8( _( "User name for <b>login</b> to some special library "
                                              "server." ) );

    (*aListToAppendTo)["password"] = UTF8( _( "Password for <b>login</b> to some special library "
                                              "server." ) );
#endif

#if 1
    // Suitable for a C++ to python PLUGIN::Footprint*() adapter, move it to the adapter
    // if and when implemented.
    (*aListToAppendTo)["python_footprint_plugin"] = UTF8( _( "Enter the python module which "
                                                             "implements the PLUGIN::Footprint*() "
                                                             "functions." ) );
#endif
}

