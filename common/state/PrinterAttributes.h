/*****************************************************************************
*
* Copyright (c) 2000 - 2017, Lawrence Livermore National Security, LLC
* Produced at the Lawrence Livermore National Laboratory
* LLNL-CODE-442911
* All rights reserved.
*
* This file is  part of VisIt. For  details, see https://visit.llnl.gov/.  The
* full copyright notice is contained in the file COPYRIGHT located at the root
* of the VisIt distribution or at http://www.llnl.gov/visit/copyright.html.
*
* Redistribution  and  use  in  source  and  binary  forms,  with  or  without
* modification, are permitted provided that the following conditions are met:
*
*  - Redistributions of  source code must  retain the above  copyright notice,
*    this list of conditions and the disclaimer below.
*  - Redistributions in binary form must reproduce the above copyright notice,
*    this  list of  conditions  and  the  disclaimer (as noted below)  in  the
*    documentation and/or other materials provided with the distribution.
*  - Neither the name of  the LLNS/LLNL nor the names of  its contributors may
*    be used to endorse or promote products derived from this software without
*    specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT  HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR  IMPLIED WARRANTIES, INCLUDING,  BUT NOT  LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND  FITNESS FOR A PARTICULAR  PURPOSE
* ARE  DISCLAIMED. IN  NO EVENT  SHALL LAWRENCE  LIVERMORE NATIONAL  SECURITY,
* LLC, THE  U.S.  DEPARTMENT OF  ENERGY  OR  CONTRIBUTORS BE  LIABLE  FOR  ANY
* DIRECT,  INDIRECT,   INCIDENTAL,   SPECIAL,   EXEMPLARY,  OR   CONSEQUENTIAL
* DAMAGES (INCLUDING, BUT NOT  LIMITED TO, PROCUREMENT OF  SUBSTITUTE GOODS OR
* SERVICES; LOSS OF  USE, DATA, OR PROFITS; OR  BUSINESS INTERRUPTION) HOWEVER
* CAUSED  AND  ON  ANY  THEORY  OF  LIABILITY,  WHETHER  IN  CONTRACT,  STRICT
* LIABILITY, OR TORT  (INCLUDING NEGLIGENCE OR OTHERWISE)  ARISING IN ANY  WAY
* OUT OF THE  USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
* DAMAGE.
*
*****************************************************************************/

#ifndef PRINTERATTRIBUTES_H
#define PRINTERATTRIBUTES_H
#include <state_exports.h>
#include <string>
#include <AttributeSubject.h>


// ****************************************************************************
// Class: PrinterAttributes
//
// Purpose:
//    This class contains the attributes used for controlling printers.
//
// Notes:      Autogenerated by xml2atts.
//
// Programmer: xml2atts
// Creation:   omitted
//
// Modifications:
//   
// ****************************************************************************

class STATE_API PrinterAttributes : public AttributeSubject
{
public:
    // These constructors are for objects of this class
    PrinterAttributes();
    PrinterAttributes(const PrinterAttributes &obj);
protected:
    // These constructors are for objects derived from this class
    PrinterAttributes(private_tmfs_t tmfs);
    PrinterAttributes(const PrinterAttributes &obj, private_tmfs_t tmfs);
public:
    virtual ~PrinterAttributes();

    virtual PrinterAttributes& operator = (const PrinterAttributes &obj);
    virtual bool operator == (const PrinterAttributes &obj) const;
    virtual bool operator != (const PrinterAttributes &obj) const;
private:
    void Init();
    void Copy(const PrinterAttributes &obj);
public:

    virtual const std::string TypeName() const;
    virtual bool CopyAttributes(const AttributeGroup *);
    virtual AttributeSubject *CreateCompatible(const std::string &) const;
    virtual AttributeSubject *NewInstance(bool) const;

    // Property selection methods
    virtual void SelectAll();
    void SelectPrinterName();
    void SelectPrintProgram();
    void SelectDocumentName();
    void SelectCreator();
    void SelectOutputToFileName();

    // Property setting methods
    void SetPrinterName(const std::string &printerName_);
    void SetPrintProgram(const std::string &printProgram_);
    void SetDocumentName(const std::string &documentName_);
    void SetCreator(const std::string &creator_);
    void SetNumCopies(int numCopies_);
    void SetPortrait(bool portrait_);
    void SetPrintColor(bool printColor_);
    void SetOutputToFile(bool outputToFile_);
    void SetOutputToFileName(const std::string &outputToFileName_);
    void SetPageSize(int pageSize_);

    // Property getting methods
    const std::string &GetPrinterName() const;
          std::string &GetPrinterName();
    const std::string &GetPrintProgram() const;
          std::string &GetPrintProgram();
    const std::string &GetDocumentName() const;
          std::string &GetDocumentName();
    const std::string &GetCreator() const;
          std::string &GetCreator();
    int               GetNumCopies() const;
    bool              GetPortrait() const;
    bool              GetPrintColor() const;
    bool              GetOutputToFile() const;
    const std::string &GetOutputToFileName() const;
          std::string &GetOutputToFileName();
    int               GetPageSize() const;

    // Persistence methods
    virtual bool CreateNode(DataNode *node, bool completeSave, bool forceAdd);
    virtual void SetFromNode(DataNode *node);


    // Keyframing methods
    virtual std::string               GetFieldName(int index) const;
    virtual AttributeGroup::FieldType GetFieldType(int index) const;
    virtual std::string               GetFieldTypeName(int index) const;
    virtual bool                      FieldsEqual(int index, const AttributeGroup *rhs) const;


    // IDs that can be used to identify fields in case statements
    enum {
        ID_printerName = 0,
        ID_printProgram,
        ID_documentName,
        ID_creator,
        ID_numCopies,
        ID_portrait,
        ID_printColor,
        ID_outputToFile,
        ID_outputToFileName,
        ID_pageSize,
        ID__LAST
    };

private:
    std::string printerName;
    std::string printProgram;
    std::string documentName;
    std::string creator;
    int         numCopies;
    bool        portrait;
    bool        printColor;
    bool        outputToFile;
    std::string outputToFileName;
    int         pageSize;

    // Static class format string for type map.
    static const char *TypeMapFormatString;
    static const private_tmfs_t TmfsStruct;
};
#define PRINTERATTRIBUTES_TMFS "ssssibbbsi"

#endif
