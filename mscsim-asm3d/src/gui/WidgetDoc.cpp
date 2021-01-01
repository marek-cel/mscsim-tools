/****************************************************************************//*
 * Copyright (C) 2021 Marek M. Cel
 *
 * Creative Commons Legal Code
 *
 * CC0 1.0 Universal
 *
 *     CREATIVE COMMONS CORPORATION IS NOT A LAW FIRM AND DOES NOT PROVIDE
 *     LEGAL SERVICES. DISTRIBUTION OF THIS DOCUMENT DOES NOT CREATE AN
 *     ATTORNEY-CLIENT RELATIONSHIP. CREATIVE COMMONS PROVIDES THIS
 *     INFORMATION ON AN "AS-IS" BASIS. CREATIVE COMMONS MAKES NO WARRANTIES
 *     REGARDING THE USE OF THIS DOCUMENT OR THE INFORMATION OR WORKS
 *     PROVIDED HEREUNDER, AND DISCLAIMS LIABILITY FOR DAMAGES RESULTING FROM
 *     THE USE OF THIS DOCUMENT OR THE INFORMATION OR WORKS PROVIDED
 *     HEREUNDER.
 *
 * Statement of Purpose
 *
 * The laws of most jurisdictions throughout the world automatically confer
 * exclusive Copyright and Related Rights (defined below) upon the creator
 * and subsequent owner(s) (each and all, an "owner") of an original work of
 * authorship and/or a database (each, a "Work").
 *
 * Certain owners wish to permanently relinquish those rights to a Work for
 * the purpose of contributing to a commons of creative, cultural and
 * scientific works ("Commons") that the public can reliably and without fear
 * of later claims of infringement build upon, modify, incorporate in other
 * works, reuse and redistribute as freely as possible in any form whatsoever
 * and for any purposes, including without limitation commercial purposes.
 * These owners may contribute to the Commons to promote the ideal of a free
 * culture and the further production of creative, cultural and scientific
 * works, or to gain reputation or greater distribution for their Work in
 * part through the use and efforts of others.
 *
 * For these and/or other purposes and motivations, and without any
 * expectation of additional consideration or compensation, the person
 * associating CC0 with a Work (the "Affirmer"), to the extent that he or she
 * is an owner of Copyright and Related Rights in the Work, voluntarily
 * elects to apply CC0 to the Work and publicly distribute the Work under its
 * terms, with knowledge of his or her Copyright and Related Rights in the
 * Work and the meaning and intended legal effect of CC0 on those rights.
 *
 * 1. Copyright and Related Rights. A Work made available under CC0 may be
 * protected by copyright and related or neighboring rights ("Copyright and
 * Related Rights"). Copyright and Related Rights include, but are not
 * limited to, the following:
 *
 *   i. the right to reproduce, adapt, distribute, perform, display,
 *      communicate, and translate a Work;
 *  ii. moral rights retained by the original author(s) and/or performer(s);
 * iii. publicity and privacy rights pertaining to a person's image or
 *      likeness depicted in a Work;
 *  iv. rights protecting against unfair competition in regards to a Work,
 *      subject to the limitations in paragraph 4(a), below;
 *   v. rights protecting the extraction, dissemination, use and reuse of data
 *      in a Work;
 *  vi. database rights (such as those arising under Directive 96/9/EC of the
 *      European Parliament and of the Council of 11 March 1996 on the legal
 *      protection of databases, and under any national implementation
 *      thereof, including any amended or successor version of such
 *      directive); and
 * vii. other similar, equivalent or corresponding rights throughout the
 *      world based on applicable law or treaty, and any national
 *      implementations thereof.
 *
 * 2. Waiver. To the greatest extent permitted by, but not in contravention
 * of, applicable law, Affirmer hereby overtly, fully, permanently,
 * irrevocably and unconditionally waives, abandons, and surrenders all of
 * Affirmer's Copyright and Related Rights and associated claims and causes
 * of action, whether now known or unknown (including existing as well as
 * future claims and causes of action), in the Work (i) in all territories
 * worldwide, (ii) for the maximum duration provided by applicable law or
 * treaty (including future time extensions), (iii) in any current or future
 * medium and for any number of copies, and (iv) for any purpose whatsoever,
 * including without limitation commercial, advertising or promotional
 * purposes (the "Waiver"). Affirmer makes the Waiver for the benefit of each
 * member of the public at large and to the detriment of Affirmer's heirs and
 * successors, fully intending that such Waiver shall not be subject to
 * revocation, rescission, cancellation, termination, or any other legal or
 * equitable action to disrupt the quiet enjoyment of the Work by the public
 * as contemplated by Affirmer's express Statement of Purpose.
 *
 * 3. Public License Fallback. Should any part of the Waiver for any reason
 * be judged legally invalid or ineffective under applicable law, then the
 * Waiver shall be preserved to the maximum extent permitted taking into
 * account Affirmer's express Statement of Purpose. In addition, to the
 * extent the Waiver is so judged Affirmer hereby grants to each affected
 * person a royalty-free, non transferable, non sublicensable, non exclusive,
 * irrevocable and unconditional license to exercise Affirmer's Copyright and
 * Related Rights in the Work (i) in all territories worldwide, (ii) for the
 * maximum duration provided by applicable law or treaty (including future
 * time extensions), (iii) in any current or future medium and for any number
 * of copies, and (iv) for any purpose whatsoever, including without
 * limitation commercial, advertising or promotional purposes (the
 * "License"). The License shall be deemed effective as of the date CC0 was
 * applied by Affirmer to the Work. Should any part of the License for any
 * reason be judged legally invalid or ineffective under applicable law, such
 * partial invalidity or ineffectiveness shall not invalidate the remainder
 * of the License, and in such case Affirmer hereby affirms that he or she
 * will not (i) exercise any of his or her remaining Copyright and Related
 * Rights in the Work or (ii) assert any associated claims and causes of
 * action with respect to the Work, in either case contrary to Affirmer's
 * express Statement of Purpose.
 *
 * 4. Limitations and Disclaimers.
 *
 *  a. No trademark or patent rights held by Affirmer are waived, abandoned,
 *     surrendered, licensed or otherwise affected by this document.
 *  b. Affirmer offers the Work as-is and makes no representations or
 *     warranties of any kind concerning the Work, express, implied,
 *     statutory or otherwise, including without limitation warranties of
 *     title, merchantability, fitness for a particular purpose, non
 *     infringement, or the absence of latent or other defects, accuracy, or
 *     the present or absence of errors, whether or not discoverable, all to
 *     the greatest extent permissible under applicable law.
 *  c. Affirmer disclaims responsibility for clearing rights of other persons
 *     that may apply to the Work or any use thereof, including without
 *     limitation any person's Copyright and Related Rights in the Work.
 *     Further, Affirmer disclaims responsibility for obtaining any necessary
 *     consents, permissions or other rights required for any use of the
 *     Work.
 *  d. Affirmer understands and acknowledges that Creative Commons is not a
 *     party to this document and has no duty or obligation with respect to
 *     this CC0 or use of the Work.
 ******************************************************************************/
#include <iostream>

#include "WidgetDoc.h"
#include "ui_WidgetDoc.h"

////////////////////////////////////////////////////////////////////////////////

WidgetDoc::WidgetDoc( QWidget *parent ) :
    QWidget ( parent ),
    _ui ( new Ui::WidgetDoc ),

    _doc ( nullptr ),

    _dialogEditGroup    ( new DialogEditGroup    ( this ) ),
    _dialogEditLOD      ( new DialogEditLOD      ( this ) ),
    _dialogEditNodeFile ( new DialogEditNodeFile ( this ) ),
    _dialogEditPAT      ( new DialogEditPAT      ( this ) ),
    _dialogEditSwitch   ( new DialogEditSwitch   ( this ) ),
    _dialogEditSmoke    ( new DialogEditSmoke    ( this ) ),
    _dialogEditRotor    ( new DialogEditRotor    ( this ) ),
    _dialogEditFLOLS    ( new DialogEditFLOLS    ( this ) ),
    _dialogEditRunway   ( new DialogEditRunway   ( this ) ),
    _dialogEditWorld    ( new DialogEditWorld    ( this ) ),
    _dialogEditNozzle   ( new DialogEditNozzle   ( this ) ),

    _timedId ( 0 )
{
    _ui->setupUi( this );

    _doc = new Document();

    connect( _dialogEditGroup    , SIGNAL(accepted()), this, SLOT(dialogEditGroup_accepted())    );
    connect( _dialogEditLOD      , SIGNAL(accepted()), this, SLOT(dialogEditLOD_accepted())      );
    connect( _dialogEditNodeFile , SIGNAL(accepted()), this, SLOT(dialogEditNodeFile_accepted()) );
    connect( _dialogEditPAT      , SIGNAL(accepted()), this, SLOT(dialogEditPAT_accepted())      );
    connect( _dialogEditSwitch   , SIGNAL(accepted()), this, SLOT(dialogEditSwitch_accepted())   );
    connect( _dialogEditSmoke    , SIGNAL(accepted()), this, SLOT(dialogEditSmoke_accepted())    );
    connect( _dialogEditRotor    , SIGNAL(accepted()), this, SLOT(dialogEditRotor_accepted())    );
    connect( _dialogEditFLOLS    , SIGNAL(accepted()), this, SLOT(dialogEditFLOLS_accepted())    );
    connect( _dialogEditRunway   , SIGNAL(accepted()), this, SLOT(dialogEditRunway_accepted())   );
    connect( _dialogEditWorld    , SIGNAL(accepted()), this, SLOT(dialogEditWorld_accepted())    );
    connect( _dialogEditNozzle   , SIGNAL(accepted()), this, SLOT(dialogEditNozzle_accepted())   );

    _timedId = startTimer( 17 ); // ca. 60Hz
}

////////////////////////////////////////////////////////////////////////////////

WidgetDoc::~WidgetDoc()
{
    killTimer( _timedId );

    if ( _dialogEditGroup ) delete _dialogEditGroup;
    _dialogEditGroup = nullptr;

    if ( _dialogEditLOD ) delete _dialogEditLOD;
    _dialogEditLOD = nullptr;

    if ( _dialogEditNodeFile ) delete _dialogEditNodeFile;
    _dialogEditNodeFile = nullptr;

    if ( _dialogEditPAT ) delete _dialogEditPAT;
    _dialogEditPAT = nullptr;

    if ( _dialogEditSwitch ) delete _dialogEditSwitch;
    _dialogEditSwitch = nullptr;

    if ( _dialogEditSmoke ) delete _dialogEditSmoke;
    _dialogEditSmoke = nullptr;

    if ( _dialogEditRotor ) delete _dialogEditRotor;
    _dialogEditRotor = nullptr;

    if ( _dialogEditFLOLS ) delete _dialogEditFLOLS;
    _dialogEditFLOLS = nullptr;

    if ( _dialogEditRunway ) delete _dialogEditRunway;
    _dialogEditRunway = nullptr;

    if ( _dialogEditWorld ) delete _dialogEditWorld;
    _dialogEditWorld = nullptr;

    if ( _dialogEditNozzle ) delete _dialogEditNozzle;
    _dialogEditNozzle = nullptr;

    if ( _doc ) delete _doc;
    _doc = nullptr;

    if ( _ui ) delete _ui;
    _ui = nullptr;
}

////////////////////////////////////////////////////////////////////////////////

void WidgetDoc::newEmpty()
{
    _doc->newEmpty();

    updateGUI();
}

////////////////////////////////////////////////////////////////////////////////

bool WidgetDoc::readFile( QString file )
{
    bool result = _doc->readFile( file );

    if ( result ) updateGUI();

    return result;
}

////////////////////////////////////////////////////////////////////////////////

bool WidgetDoc::saveFile( QString file )
{
    return _doc->saveFile( file );
}

////////////////////////////////////////////////////////////////////////////////

bool WidgetDoc::exportAs( QString file )
{
    return _doc->exportAs( file );
}

////////////////////////////////////////////////////////////////////////////////

osg::Node* WidgetDoc::getRootNode()
{
    return _doc->getRootNode();
}

////////////////////////////////////////////////////////////////////////////////

osg::Node* WidgetDoc::getCurrentNode()
{
    return getNode( _ui->treeWidget->currentIndex() )->getNode();
}

////////////////////////////////////////////////////////////////////////////////

void WidgetDoc::timerEvent( QTimerEvent *event )
{
    /////////////////////////////
    QWidget::timerEvent( event );
    /////////////////////////////

    if ( _doc )
    {
        _doc->update();
    }
}

////////////////////////////////////////////////////////////////////////////////

void WidgetDoc::addTreeWidgetItem( Component *node, int index,
                                           QTreeWidgetItem *parent )
{
    if ( node )
    {
        QTreeWidgetItem *item = 0;

        if ( parent )
        {
            item = new QTreeWidgetItem( parent );
        }
        else
        {
            item = new QTreeWidgetItem( _ui->treeWidget );
        }

        item->setText( 0, node->getName().c_str() );

        Group *group = dynamic_cast<Group*>( node );

        if ( group )
        {
            for ( size_t i = 0; i < group->getNumChildren(); i++ )
            {
                Component *child = group->getChild( i );

                if ( child ) addTreeWidgetItem( child, index, item );
            }
        }

        if ( parent )
        {
            parent->insertChild( index, item );
            _ui->treeWidget->expandItem( parent );
        }
        else
        {
            _ui->treeWidget->insertTopLevelItem( 0, item );
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

Component* WidgetDoc::getNode( QModelIndex index )
{
    Component *node = _doc->getRootGroup();

    if ( node )
    {
        std::vector< int > indecies;
        indecies.clear();

        QModelIndex temp = index;

        while ( temp.parent().isValid() )
        {
            indecies.push_back( temp.row() );
            temp = temp.parent();
        }

        for ( int i = indecies.size() - 1; i >= 0; i-- )
        {
            Group *group = dynamic_cast<Group*>( node );

            if ( group )
            {
                node = group->getChild( indecies.at( i ) );
            }
            else
            {
                break;
            }
        }
    }

    return node;
}

////////////////////////////////////////////////////////////////////////////////

void WidgetDoc::removeNode( QModelIndex index )
{
    Component *node = _doc->getRootGroup();

    std::vector< int > indecies;
    indecies.clear();

    QModelIndex temp = index;

    while ( temp.parent().isValid() )
    {
        indecies.push_back( temp.row() );
        temp = temp.parent();
    }

    for ( int i = indecies.size() - 1; i >= 0; i-- )
    {
        Group *group = dynamic_cast<Group*>( node );

        if ( group )
        {
            if ( i == 0 )
            {
                group->removeChild( indecies.at( i ) );
                emit( changed() );
            }
            else
            {
                node = group->getChild( indecies.at( i ) );
            }
        }
        else
        {
            break;
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void WidgetDoc::addComponent()
{
    Component *component = 0;

    if ( _ui->comboBoxComponents->currentIndex() == 0 )
    {
        component = new NodeFile();
        component->setName( "File" );
    }
    else if ( _ui->comboBoxComponents->currentIndex() == 1 )
    {
        component = new Group();
        component->setName( "Group" );
    }
    else if ( _ui->comboBoxComponents->currentIndex() == 2 )
    {
        component = new LOD();
        component->setName( "LOD" );
    }
    else if ( _ui->comboBoxComponents->currentIndex() == 3 )
    {
        component = new PAT();
        component->setName( "PAT" );
    }
    else if ( _ui->comboBoxComponents->currentIndex() == 4 )
    {
        component = new Switch();
        component->setName( "Switch" );
    }
    else if ( _ui->comboBoxComponents->currentIndex() == 5 )
    {
        component = new Smoke();
        component->setName( "Smoke" );
    }
    else if ( _ui->comboBoxComponents->currentIndex() == 6 )
    {
        component = new Rotor();
        component->setName( "Rotor" );
    }
    else if ( _ui->comboBoxComponents->currentIndex() == 7 )
    {
        component = new FLOLS();
        component->setName( "FLOLS" );
    }
    else if ( _ui->comboBoxComponents->currentIndex() == 8 )
    {
        component = new Runway();
        component->setName( "Runway" );
    }
    else if ( _ui->comboBoxComponents->currentIndex() == 9 )
    {
        component = new World();
        component->setName( "World" );
    }
    else if ( _ui->comboBoxComponents->currentIndex() == 10 )
    {
        component = new Nozzle();
        component->setName( "Nozzle" );
    }


    if ( component )
    {
        Group *parent = dynamic_cast<Group*>( getNode( _ui->treeWidget->currentIndex() ) );

        if ( parent )
        {
            parent->addChild( component );
            emit( changed() );
        }
        else
        {
            Group *group = dynamic_cast<Group*>( component );

            if ( group )
            {
                _doc->setRootGroup( group );
                emit( changed() );
            }
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void WidgetDoc::editComponent()
{
    Component *node = getNode( _ui->treeWidget->currentIndex() );

    NodeFile *file  = dynamic_cast< NodeFile * >( node );
    Group    *group = dynamic_cast< Group    * >( node );
    LOD      *lod   = dynamic_cast< LOD      * >( node );
    PAT      *pat   = dynamic_cast< PAT      * >( node );
    Switch   *sw    = dynamic_cast< Switch   * >( node );

    Smoke  *smoke  = dynamic_cast< Smoke  * >( node );
    Rotor  *rotor  = dynamic_cast< Rotor  * >( node );
    FLOLS  *flols  = dynamic_cast< FLOLS  * >( node );
    Runway *runway = dynamic_cast< Runway * >( node );
    World  *world  = dynamic_cast< World  * >( node );
    Nozzle *nozzle = dynamic_cast< Nozzle * >( node );



    if      ( file   ) _dialogEditNodeFile ->edit( file   );
    else if ( nozzle ) _dialogEditNozzle   ->edit( nozzle );
    else if ( world  ) _dialogEditWorld    ->edit( world  );
    else if ( runway ) _dialogEditRunway   ->edit( runway );
    else if ( flols  ) _dialogEditFLOLS    ->edit( flols  );
    else if ( rotor  ) _dialogEditRotor    ->edit( rotor  );
    else if ( smoke  ) _dialogEditSmoke    ->edit( smoke  );
    else if ( pat    ) _dialogEditPAT      ->edit( pat    );
    else if ( lod    ) _dialogEditLOD      ->edit( lod    );
    else if ( sw     ) _dialogEditSwitch   ->edit( sw     );
    else if ( group  ) _dialogEditGroup    ->edit( group  );
}

////////////////////////////////////////////////////////////////////////////////

void WidgetDoc::updateGUI()
{
    _ui->treeWidget->setCurrentIndex( QModelIndex() );
    _ui->treeWidget->clear();

    addTreeWidgetItem( _doc->getRootGroup() );
}

////////////////////////////////////////////////////////////////////////////////

void WidgetDoc::dialogEditGroup_accepted()
{
    _dialogEditGroup->save();
    updateGUI();
    emit( changed() );
}

////////////////////////////////////////////////////////////////////////////////

void WidgetDoc::dialogEditLOD_accepted()
{
    _dialogEditLOD->save();
    updateGUI();
    emit( changed() );
}

////////////////////////////////////////////////////////////////////////////////

void WidgetDoc::dialogEditNodeFile_accepted()
{
    _dialogEditNodeFile->save();
    updateGUI();
    emit( changed() );
}

////////////////////////////////////////////////////////////////////////////////

void WidgetDoc::dialogEditPAT_accepted()
{
    _dialogEditPAT->save();
    updateGUI();
    emit( changed() );
}

////////////////////////////////////////////////////////////////////////////////

void WidgetDoc::dialogEditSwitch_accepted()
{
    _dialogEditSwitch->save();
    updateGUI();
    emit( changed() );
}

////////////////////////////////////////////////////////////////////////////////

void WidgetDoc::dialogEditSmoke_accepted()
{
    _dialogEditSmoke->save();
    updateGUI();
    emit( changed() );
}

////////////////////////////////////////////////////////////////////////////////

void WidgetDoc::dialogEditRotor_accepted()
{
    _dialogEditRotor->save();
    updateGUI();
    emit( changed() );
}

////////////////////////////////////////////////////////////////////////////////

void WidgetDoc::dialogEditFLOLS_accepted()
{
    _dialogEditFLOLS->save();
    updateGUI();
    emit( changed() );
}

////////////////////////////////////////////////////////////////////////////////

void WidgetDoc::dialogEditRunway_accepted()
{
    _dialogEditRunway->save();
    updateGUI();
    emit( changed() );
}

////////////////////////////////////////////////////////////////////////////////

void WidgetDoc::dialogEditWorld_accepted()
{
    _dialogEditWorld->save();
    updateGUI();
    emit( changed() );
}

////////////////////////////////////////////////////////////////////////////////

void WidgetDoc::dialogEditNozzle_accepted()
{
    _dialogEditNozzle->save();
    updateGUI();
    emit( changed() );
}

////////////////////////////////////////////////////////////////////////////////

void WidgetDoc::on_pushButtonAdd_clicked()
{
    addComponent();
    updateGUI();
}

////////////////////////////////////////////////////////////////////////////////

void WidgetDoc::on_pushButtonEdit_clicked()
{
    editComponent();
}

////////////////////////////////////////////////////////////////////////////////

void WidgetDoc::on_pushButtonRemove_clicked()
{
    removeNode( _ui->treeWidget->currentIndex() );
    updateGUI();
}

////////////////////////////////////////////////////////////////////////////////

void WidgetDoc::on_treeWidget_currentItemChanged( QTreeWidgetItem *current,
                                                  QTreeWidgetItem * )
{
    _ui->comboBoxComponents ->setEnabled( false );
    _ui->pushButtonAdd      ->setEnabled( false );
    _ui->pushButtonEdit     ->setEnabled( false );
    _ui->pushButtonRemove   ->setEnabled( false );

    Component *node = getNode( _ui->treeWidget->currentIndex() );
    Group *group = dynamic_cast<Group*>( node );

    if ( current && node  )
    {
        _ui->pushButtonEdit->setEnabled( true );

        if ( group )
        {
            _ui->comboBoxComponents ->setEnabled( true );
            _ui->pushButtonAdd      ->setEnabled( true );
            _ui->pushButtonRemove   ->setEnabled( true );
        }
        else
        {
            _ui->comboBoxComponents ->setEnabled( false );
            _ui->pushButtonAdd      ->setEnabled( false );
            _ui->pushButtonRemove   ->setEnabled( true );
        }
    }
    else if ( _ui->treeWidget->currentIndex().row() == -1 )
    {
        _ui->pushButtonEdit     ->setEnabled( true );
        _ui->comboBoxComponents ->setEnabled( true );
        _ui->pushButtonAdd      ->setEnabled( true );
        _ui->pushButtonRemove   ->setEnabled( true );
    }

    //std::cout << _ui->treeWidget->currentIndex().row() << std::endl;
}

////////////////////////////////////////////////////////////////////////////////

void WidgetDoc::on_treeWidget_doubleClicked( const QModelIndex & )
{
    editComponent();
}
