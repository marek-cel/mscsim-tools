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
#include <gui/DialogEditRunway.h>
#include <ui_DialogEditRunway.h>

#include <QFileDialog>

#include <gui/DialogEditGap.h>

////////////////////////////////////////////////////////////////////////////////

DialogEditRunway::DialogEditRunway(QWidget *parent) :
    QDialog(parent),
    _ui(new Ui::DialogEditRunway),
    _runway( nullptr )
{
    _ui->setupUi(this);
}

////////////////////////////////////////////////////////////////////////////////

DialogEditRunway::~DialogEditRunway()
{
    if ( _ui ) delete _ui;
    _ui = nullptr;
}

////////////////////////////////////////////////////////////////////////////////

void DialogEditRunway::edit( Runway *runway )
{
    _runway = runway;

    _gaps.clear();
    _gaps = _runway->getGaps();

    _ui->lineEditName->setText( _runway->getName().c_str() );

    _ui->checkBoxDepthSortedBin->setChecked( _runway->getDepthSortedBinState() );
    _ui->spinBoxDepthSortedBin->setValue( _runway->getDepthSortedBinValue() );

    _ui->spinBoxPositionX->setValue( _runway->getPx() );
    _ui->spinBoxPositionY->setValue( _runway->getPy() );
    _ui->spinBoxPositionZ->setValue( _runway->getPz() );

    _ui->spinBoxAttitudeX->setValue( _runway->getAx() );
    _ui->spinBoxAttitudeY->setValue( _runway->getAy() );
    _ui->spinBoxAttitudeZ->setValue( _runway->getAz() );

    if ( _runway->getConvention() == PAT::XYZ )
    {
        _ui->radioButtonXYZ->setChecked( true );
    }
    else
    {
        _ui->radioButtonZYX->setChecked( true );
    }

    ///////////

    _ui->spinBoxLength->setValue( _runway->getLength() );
    _ui->spinBoxWidth->setValue( _runway->getWidth() );

    _ui->comboBoxRALS_Lo->setCurrentIndex( _runway->getRALS_Lo() );
    _ui->comboBoxRALS_Hi->setCurrentIndex( _runway->getRALS_Hi() );

    _ui->comboBoxVGSI_Lo->setCurrentIndex( _runway->getVGSI_Lo() );
    _ui->comboBoxVGSI_Hi->setCurrentIndex( _runway->getVGSI_Hi() );

    _ui->spinBoxVGSI_X_Lo->setValue( _runway->getVGSI_X_Lo() );
    _ui->spinBoxVGSI_X_Hi->setValue( _runway->getVGSI_X_Hi() );

    _ui->checkBoxRCLS->setChecked( _runway->getRCLS() );
    _ui->checkBoxTDZL->setChecked( _runway->getTDZL() );

    updateListWidgetGaps();

    ///////////

    show();
}

////////////////////////////////////////////////////////////////////////////////

void DialogEditRunway::save()
{
    _runway->setName( _ui->lineEditName->text().toLatin1().data() );

    _runway->setDepthSortedBinValue( _ui->spinBoxDepthSortedBin->value() );
    _runway->setDepthSortedBinState( _ui->checkBoxDepthSortedBin->isChecked() );

    double px = _ui->spinBoxPositionX->value();
    double py = _ui->spinBoxPositionY->value();
    double pz = _ui->spinBoxPositionZ->value();

    double ax = _ui->spinBoxAttitudeX->value();
    double ay = _ui->spinBoxAttitudeY->value();
    double az = _ui->spinBoxAttitudeZ->value();

    _runway->setPx( px );
    _runway->setPy( py );
    _runway->setPz( pz );

    _runway->setAx( ax );
    _runway->setAy( ay );
    _runway->setAz( az );

    PAT::Convention convention = PAT::XYZ;

    if ( _ui->radioButtonZYX->isChecked() )
    {
        convention = PAT::ZYX;
    }

    _runway->setConvention( convention );

    ///////////

    _runway->setLength( _ui->spinBoxLength->value() );
    _runway->setWidth( _ui->spinBoxWidth->value() );

    _runway->setRALS_Lo( getRALS( _ui->comboBoxRALS_Lo->currentIndex() ) );
    _runway->setRALS_Hi( getRALS( _ui->comboBoxRALS_Hi->currentIndex() ) );

    _runway->setVGSI_Lo( getVGSI( _ui->comboBoxVGSI_Lo->currentIndex() ) );
    _runway->setVGSI_Hi( getVGSI( _ui->comboBoxVGSI_Hi->currentIndex() ) );

    _runway->setVGSI_X_Lo( _ui->spinBoxVGSI_X_Lo->value() );
    _runway->setVGSI_X_Hi( _ui->spinBoxVGSI_X_Hi->value() );

    _runway->setRCLS( _ui->checkBoxRCLS->isChecked() );
    _runway->setTDZL( _ui->checkBoxTDZL->isChecked() );

    _runway->setGaps( _gaps );
}

////////////////////////////////////////////////////////////////////////////////

void DialogEditRunway::on_checkBoxDepthSortedBin_toggled( bool checked )
{
    _ui->spinBoxDepthSortedBin->setEnabled( checked );
}

////////////////////////////////////////////////////////////////////////////////

void DialogEditRunway::on_pushButtonGapAdd_clicked()
{
    Gap gap;

    gap.from = 0.0;
    gap.to = 0.0;
    gap.side = Gap::Left;

    _gaps.push_back( gap );

    updateListWidgetGaps();
}

////////////////////////////////////////////////////////////////////////////////

void DialogEditRunway::on_pushButtonGapEdit_clicked()
{
    editGap();
}

////////////////////////////////////////////////////////////////////////////////

void DialogEditRunway::on_pushButtonGapRemove_clicked()
{
    if ( _ui->listWidgetGaps->currentRow() > -1
      && _ui->listWidgetGaps->currentRow() < _gaps.size() )
    {
        _gaps.erase( _gaps.begin() + _ui->listWidgetGaps->currentRow() );
    }

    updateListWidgetGaps();
}

////////////////////////////////////////////////////////////////////////////////

void DialogEditRunway::on_listWidgetGaps_doubleClicked( const QModelIndex & )
{
    editGap();
}

////////////////////////////////////////////////////////////////////////////////

Runway::RALS DialogEditRunway::getRALS( int index )
{
    switch ( index )
    {
        default:
        case 0: return Runway::RALS_NONE;  break;
        case 1: return Runway::RALS_ALSF1; break;
        case 2: return Runway::RALS_ALSF2; break;
        case 3: return Runway::RALS_MALS;  break;
        case 4: return Runway::RALS_MALSF; break;
        case 5: return Runway::RALS_MALSR; break;
    }
}

////////////////////////////////////////////////////////////////////////////////

Runway::VGSI DialogEditRunway::getVGSI( int index )
{
    switch ( index )
    {
        default:
        case 0: return Runway::VGSI_NONE; break;
        case 1: return Runway::VGSI_P4L;  break;
        case 2: return Runway::VGSI_P4R;  break;
        case 3: return Runway::VGSI_V4L;  break;
        case 4: return Runway::VGSI_V4R;  break;
        case 5: return Runway::VGSI_V6L;  break;
        case 6: return Runway::VGSI_V6R;  break;
    }
}

////////////////////////////////////////////////////////////////////////////////

void DialogEditRunway::editGap()
{
    if ( _ui->listWidgetGaps->currentRow() > -1
      && _ui->listWidgetGaps->currentRow() < _gaps.size() )
    {
        Gap gap = _gaps.at( _ui->listWidgetGaps->currentRow() );

        gap = DialogEditGap::edit( gap );

        _gaps[ _ui->listWidgetGaps->currentRow() ] = gap;
    }

    updateListWidgetGaps();
}

////////////////////////////////////////////////////////////////////////////////

void DialogEditRunway::updateListWidgetGaps()
{
    _ui->listWidgetGaps->clear();

    for ( int i = 0; i < _gaps.size(); i++ )
    {
        QString text = "Gap #" + QString::number( i + 1 ) + ": ";

        text += " from " + QString::number( _gaps.at( i ).from );
        text += " to "   + QString::number( _gaps.at( i ).to   );
        text += " on ";

        switch ( _gaps.at( i ).side )
        {
            case Gap::Left:  text += "LEFT";  break;
            case Gap::Right: text += "RIGHT"; break;
            case Gap::Both:  text += "BOTH";  break;
        }

        _ui->listWidgetGaps->addItem( new QListWidgetItem( text, _ui->listWidgetGaps ) );
    }
}
