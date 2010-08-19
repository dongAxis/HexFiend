/*! @mainpage HexFiend.framework
 *
 * @section intro Introduction
 * HexFiend.framework (hereafter "Hex Fiend" when there is no risk of confusion with the app by the same name) is a framework designed to enable applications to support viewing and editing of binary data.  The emphasis is on editing data in a natural way, following Mac OS X text editing conventions.
 *
 * Hex Fiend is designed to work efficiently with large amounts (64 bits worth) of data.  As such, it can work with arbitrarily large files without reading the entire file into memory.  This includes insertions, deletions, and in-place editing.  Hex Fiend can also efficiently save such changes back to the file, without requiring any additional temporary disk space.
 *
 * Hex Fiend has a clean separation between the model, view, and controller layers.  The model layer allows for efficient manipulation of raw data of mixed sources, making it useful for tools that need to work with large files.
 *
 * Both the framework and the app are open source under a BSD-style license.  In summary, you may use Hex Fiend in any project as long as you include the copyright notice somewhere in the documentation.
 *
 * @section requirements Requirements
 * Hex Fiend is only available on Mac OS X, and supported on Tiger and later.  It is compiled "hybrid" (works with both garbage collection and reference counting) and 4-way fat (64 bit and 32 bit, PowerPC and Intel).  Support for 64 bits worth of data  is available in both 32 bit and 64 bit - there is no functional difference between the 32 bit and 64 bit versions.
 *
 * @section getting_started Getting Started
 *
 * The Hex Fiend source code is available at http://ridiculousfish.com/hexfiend/
 *
 * The easiest way to get started is to use the Interface Builder plugin to drag a hex view into your project!  Hex Fiend also comes with some sample code ("HexFiendling"), distributed as part of the project.  And of course the Hex Fiend application itself is open source, acting as a more sophisticated sample code.
*/


#import <HexFiend/HFTypes.h>
#import <HexFiend/HFFunctions.h>
#import <HexFiend/HFController.h>
#import <HexFiend/HFRepresenter.h>
#import <HexFiend/HFFullMemoryByteArray.h>
#import <HexFiend/HFFullMemoryByteSlice.h>
#import <HexFiend/HFHexTextRepresenter.h>
#import <HexFiend/HFLineCountingRepresenter.h>
#import <HexFiend/HFStatusBarRepresenter.h>
#import <HexFiend/HFLayoutRepresenter.h>
#import <HexFiend/HFStringEncodingTextRepresenter.h>
#import <HexFiend/HFVerticalScrollerRepresenter.h>
#import <HexFiend/HFByteArray.h>
#import <HexFiend/HFFileByteSlice.h>
#import <HexFiend/HFFileReference.h>
#import <HexFiend/HFByteArrayEditScript.h>
#import <HexFiend/HFBTreeByteArray.h>
#import <HexFiend/HFProgressTracker.h>
#import <HexFiend/HFTextField.h>
#import <HexFiend/HFTextView.h>
#import <HexFiend/HFSharedMemoryByteSlice.h>
#import <HexFiend/HFIndexSet.h>
#import <HexFiend/HFByteRangeAttribute.h>
#import <HexFiend/HFByteRangeAttributeArray.h>


/* The following is all for Doxygen */


/*! @defgroup model Model
 *  Hex Fiend's model classes
 */
///@{
///@class HFByteArray
///@class HFBTreeByteArray
///@class HFFullMemoryByteArray
///@class HFByteSlice
///@class HFFileByteSlice
///@class HFSharedMemoryByteSlice
///@class HFFullMemoryByteSlice

///@}


/*! @defgroup view View
 *  Hex Fiend's view classes
 */
///@{
///@class HFRepresenter
///@class HFHexTextRepresenter
///@class HFStringEncodingTextRepresenter
///@class HFLayoutRepresenter
///@class HFLineCountingRepresenter
///@class HFStatusBarRepresenter
///@class HFVerticalScrollerRepresenter
///@class HFLineCountingRepresenter

///@}

/*! @defgroup controller Controller
 *  Hex Fiend's controller classes
 */
///@{
///@class HFController

///@}

/*! @defgroup highlevel High Level
 *  Hex Fiend's "do it all" classes
 */
///@{
///@class HFTextView
///@class HFTextField

///@}
