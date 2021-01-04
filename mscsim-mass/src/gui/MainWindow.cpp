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

#include <gui/MainWindow.h>
#include <ui_MainWindow.h>

#include <QCloseEvent>
#include <QFileDialog>
#include <QMessageBox>

#include <qwt/qwt_plot_curve.h>
#include <qwt/qwt_scale_engine.h>

#include <gui/DialogEdit.h>

////////////////////////////////////////////////////////////////////////////////

MainWindow::MainWindow( QWidget *parent ) :
    QMainWindow ( parent ),
    _ui ( new Ui::MainWindow ),

    _saved ( true )
{
    _ui->setupUi( this );

    _scSave   = new QShortcut( QKeySequence(Qt::CTRL + Qt::Key_S), this, SLOT(on_actionSave_triggered())   );
    _scExport = new QShortcut( QKeySequence(Qt::CTRL + Qt::Key_E), this, SLOT(on_actionExport_triggered()) );

    updateGUI();

    settingsRead();
}

////////////////////////////////////////////////////////////////////////////////

MainWindow::~MainWindow()
{
    settingsSave();

    DELPTR( _scSave   );
    DELPTR( _scExport );

    DELPTR( _ui );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::closeEvent( QCloseEvent *event )
{
    askIfSave();

    /////////////////////////////////
    QMainWindow::closeEvent( event );
    /////////////////////////////////
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::askIfSave()
{
    if ( !_saved )
    {
        QString title = windowTitle();
        QString text = tr( "File have unsaved changes." );

        QMessageBox::StandardButton result = QMessageBox::question( this, title, text,
                                                                    QMessageBox::Save | QMessageBox::Discard,
                                                                    QMessageBox::Save );

        if ( result == QMessageBox::Save )
        {
            saveFile();
        }
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::newFile()
{
    askIfSave();

    _currentFile = "";

    _doc.newEmpty();

    updateGUI();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::openFile()
{
    askIfSave();

    QString caption = "Open...";
    QString dir = ( _currentFile.length() > 0 ) ? QFileInfo( _currentFile ).absolutePath() : "";
    QString filter;
    QString selectedFilter;

    filter += selectedFilter = "XML (*.xml)";

    QString file = QFileDialog::getOpenFileName( this, caption, dir, filter, &selectedFilter );

    if ( file.length() > 0 )
    {
        _currentFile = file;

        updateRecentFiles( _currentFile );
        readFile( _currentFile );
    }

    updateGUI();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::saveFile()
{
    if ( _currentFile.length() > 0 )
    {
        saveFile( _currentFile );
    }
    else
    {
        saveFileAs();
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::saveFileAs()
{
    QString caption = "Save as...";
    QString dir = ( _currentFile.length() > 0 ) ? QFileInfo( _currentFile ).absolutePath() : ".";
    QString filter;
    QString selectedFilter;

    filter += selectedFilter = "XML (*.xml)";

    QString newFile = QFileDialog::getSaveFileName( this, caption, dir, filter, &selectedFilter );

    if ( newFile.length() > 0 )
    {
        _currentFile = newFile;
        saveFile( _currentFile );
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::exportFileAs()
{
    QString fileName = "";

    QString caption = "Export as...";
    QString dir = ( fileName.length() > 0 ) ? QFileInfo( fileName ).absolutePath() : ".";
    QString filter;
    QString selectedFilter;

    filter += selectedFilter = "Text File (*.txt)";

    fileName = QFileDialog::getSaveFileName( this, caption, dir, filter, &selectedFilter );

    if ( fileName.length() > 0 )
    {
        exportAs( fileName );
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::readFile( QString fileName )
{
    if ( QFileInfo( fileName ).suffix() == QString( "xml" ) )
    {
        if ( !_doc.readFile( fileName.toStdString().c_str() ) )
        {
            QMessageBox::warning( this, tr( APP_TITLE ),
                                 tr( "Cannot read file %1." ).arg( fileName ) );
        }
    }

    updateGUI();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::saveFile( QString fileName )
{
    if ( _doc.saveFile( fileName.toStdString().c_str() ) )
    {
        _saved = true;
    }
    else
    {
        QMessageBox::warning( this, tr( APP_TITLE ),
                             tr( "Cannot save file %1." ).arg(fileName) );
    }

    updateGUI();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::exportAs( QString fileName )
{
    if ( !_doc.exportAs( fileName.toStdString().c_str() ) )
    {
        QMessageBox::warning( this, tr( APP_TITLE ),
                             tr( "Cannot export file %1." ).arg(fileName) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::settingsRead()
{
    QSettings settings( ORG_NAME, APP_NAME );
    
    settings.beginGroup( "main_window" );

    restoreState( settings.value( "state" ).toByteArray() );
    restoreGeometry( settings.value( "geometry" ).toByteArray() );

    settingsRead_RecentFiles( settings );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::settingsRead_RecentFiles( QSettings &settings )
{
    _recentFilesList = settings.value( "recent_files" ).toStringList();

    updateRecentFiles();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::settingsSave()
{
    QSettings settings( ORG_NAME, APP_NAME );
    
    settings.beginGroup( "main_window" );

    settings.setValue( "state", saveState() );
    settings.setValue( "geometry", saveGeometry() );

    settingsSave_RecentFiles( settings );

    settings.endGroup();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::settingsSave_RecentFiles( QSettings &settings )
{
    settings.setValue( "recent_files", _recentFilesList );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::addComponent()
{
    Component *component = 0;

    if ( _ui->comboBoxComponents->currentIndex() == 0 )
    {
        component = new Fuselage( _doc.getAircraft() );
    }
    else if ( _ui->comboBoxComponents->currentIndex() == 1 )
    {
        component = new Wing( _doc.getAircraft() );
    }
    else if ( _ui->comboBoxComponents->currentIndex() == 2 )
    {
        component = new TailH( _doc.getAircraft() );
    }
    else if ( _ui->comboBoxComponents->currentIndex() == 3 )
    {
        component = new TailV( _doc.getAircraft() );
    }

    if ( component )
    {
        _doc.addComponent( component );
        _saved = false;
    }

    updateGUI();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::editComponent()
{
    int index = _ui->listComponents->currentRow();

    Component *component = _doc.getComponent( index );

    if ( component )
    {
        DialogEdit::edit( this, component );

        _doc.update();

        _saved = false;
        updateGUI();
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::updateGUI()
{
    switch ( _doc.getType() )
    {
        case FighterAttack   : _ui->comboBoxAircraftType->setCurrentIndex( 0 ); break;
        case CargoTransport  : _ui->comboBoxAircraftType->setCurrentIndex( 1 ); break;
        case GeneralAviation : _ui->comboBoxAircraftType->setCurrentIndex( 2 ); break;
    }

    _ui->spinBoxMassMaxTO->setValue( _doc.getM_maxto() );

    _ui->listComponents->clear();

    Aircraft::Components components = _doc.getComponents();
    Aircraft::Components::iterator it = components.begin();

    while ( it != components.end() )
    {
        QString name = (*it)->getName();
        _ui->listComponents->addItem( new QListWidgetItem( name, _ui->listComponents ) );

        it++;
    }

    _ui->spinBox_M->setValue( _doc.getMassTotal() );

    Vector3 centerOfMass = _doc.getCenterOfMass();

    _ui->spinBox_CG_X->setValue( centerOfMass.x() );
    _ui->spinBox_CG_Y->setValue( centerOfMass.y() );
    _ui->spinBox_CG_Z->setValue( centerOfMass.z() );

    Matrix3x3 inertiaMatrix = _doc.getInertiaMatrix();

    _ui->spinBox_I_XX->setValue( inertiaMatrix.xx() );
    _ui->spinBox_I_YY->setValue( inertiaMatrix.yy() );
    _ui->spinBox_I_ZZ->setValue( inertiaMatrix.zz() );

    _ui->spinBox_I_XY->setValue( inertiaMatrix.xy() );
    _ui->spinBox_I_XZ->setValue( inertiaMatrix.xz() );
    _ui->spinBox_I_YZ->setValue( inertiaMatrix.yz() );

    QString title = tr( APP_TITLE );

    if ( _currentFile.length() > 0 )
    {
        title += " - " + QFileInfo( _currentFile ).fileName();
    }

    if ( !_saved ) title += " (*)";

    setWindowTitle( title );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::updateRecentFiles( QString file )
{
    for ( unsigned int i = 0; i < _recentFilesActions.size(); i++ )
    {
        disconnect( _recentFilesActions.at( i ), SIGNAL(triggered(int)), this, SLOT(recentFile_triggered(int)) );
    }

    _recentFilesActions.clear();

    if ( file.length() > 0 )
    {
        QStringList temp;

        temp.push_back( file );

        for ( int i = 0; i < _recentFilesList.size() && i < 4; i++ )
        {
            temp.push_back( _recentFilesList.at( i ) );
        }

        _recentFilesList = temp;
    }

    _ui->menuRecentFiles->clear();

    for ( int i = 0; i < _recentFilesList.size(); i++ )
    {
        _recentFilesActions.push_back( new RecentFileAction( i, _recentFilesList.at( i ), _ui->menuRecentFiles ) );
        connect( _recentFilesActions.at( i ), SIGNAL(triggered(int)), this, SLOT(recentFile_triggered(int)) );
        _ui->menuRecentFiles->addAction( _recentFilesActions.at( i ) );
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionNew_triggered()
{
    newFile();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionOpen_triggered()
{
    openFile();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionSave_triggered()
{
    saveFile();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionSaveAs_triggered()
{
    saveFileAs();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionExport_triggered()
{
    exportFileAs();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionExit_triggered()
{
    close();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionClearRecent_triggered()
{
    _recentFilesList.clear();

    updateRecentFiles();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::recentFile_triggered( int id )
{
    _currentFile = _recentFilesList.at( id );

    readFile( _currentFile );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_actionAbout_triggered()
{
    QFile aboutHtmlFile( ":/gui/html/about.html" );

    QString aboutWinTitle;
    QString aboutInfoText;

    aboutWinTitle = tr( "About" );

    if ( aboutHtmlFile.open( QIODevice::ReadOnly ) )
    {
        aboutInfoText = aboutHtmlFile.readAll();
        aboutHtmlFile.close();
    }

    QMessageBox::about( this, aboutWinTitle, aboutInfoText );
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_comboBoxAircraftType_currentIndexChanged( int index )
{
    Type type = FighterAttack;

    switch ( index )
    {
        case 0: type = FighterAttack;   break;
        case 1: type = CargoTransport;  break;
        case 2: type = GeneralAviation; break;
    }

    _doc.setType( type );

    updateGUI();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_spinBoxMassMaxTO_valueChanged( double arg1 )
{
    _doc.setM_maxto( arg1 );

    _saved = false;

    updateGUI();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_listComponents_currentRowChanged( int currentRow )
{
    Aircraft::Components components = _doc.getComponents();

    if ( currentRow >=0 && currentRow < (int)components.size() )
    {
        _ui->pushButtonDel  ->setEnabled( true );
        _ui->pushButtonEdit ->setEnabled( true );
    }
    else
    {
        _ui->pushButtonDel  ->setEnabled( false );
        _ui->pushButtonEdit ->setEnabled( false );
    }
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_listComponents_doubleClicked( const QModelIndex & )
{
    editComponent();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_pushButtonAdd_clicked()
{
    addComponent();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_pushButtonDel_clicked()
{
    Aircraft::Components components = _doc.getComponents();
    int currentRow = _ui->listComponents->currentRow();

    if ( currentRow >=0 && currentRow < (int)components.size() )
    {
        _doc.delComponent( currentRow );
        _saved = false;
    }

    updateGUI();
}

////////////////////////////////////////////////////////////////////////////////

void MainWindow::on_pushButtonEdit_clicked()
{
    editComponent();
}
