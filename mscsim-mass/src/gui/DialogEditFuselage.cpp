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
#include <gui/DialogEditFuselage.h>
#include <ui_DialogEditFuselage.h>

////////////////////////////////////////////////////////////////////////////////

void DialogEditFuselage::edit( QWidget *parent, Fuselage *fuselage )
{
    DialogEditFuselage *dialog = new DialogEditFuselage( parent );

    dialog->init( *fuselage );

    if ( dialog->exec() == QDialog::Accepted )
    {
        dialog->getData( fuselage );
    }

    DELPTR( dialog );
}

////////////////////////////////////////////////////////////////////////////////

DialogEditFuselage::DialogEditFuselage( QWidget *parent ) :
    QDialog( parent ),
    _ui( new Ui::DialogEditFuselage )
{
    _ui->setupUi( this );
}

////////////////////////////////////////////////////////////////////////////////

DialogEditFuselage::~DialogEditFuselage()
{
    DELPTR( _ui );
}

////////////////////////////////////////////////////////////////////////////////

void DialogEditFuselage::init( const Fuselage &fuselage )
{
    _fuselage = &fuselage;

    _ui->lineEditName->setText( fuselage.getName() );

    _ui->spinBox_Mass->setValue( fuselage.getMass() );

    _ui->spinBox_X->setValue( fuselage.getPosition().x() );
    _ui->spinBox_Y->setValue( fuselage.getPosition().y() );
    _ui->spinBox_Z->setValue( fuselage.getPosition().z() );

    _ui->spinBox_L->setValue( fuselage.getLength () );
    _ui->spinBox_W->setValue( fuselage.getWidth  () );
    _ui->spinBox_H->setValue( fuselage.getHeight () );

    setType( _fuselage->getAircraft()->getType() );

    _ui->spinBoxMTOW       ->setValue( fuselage.getMTOW() );
    _ui->spinBoxNz         ->setValue( fuselage.getNzMax() );
    _ui->checkBoxDelta     ->setChecked( fuselage.getDelta() );
    _ui->comboBoxDoor      ->setCurrentIndex( fuselage.getDoor() );
    _ui->checkBoxMount     ->setChecked( fuselage.getMount() );
    _ui->spinBoxSpan       ->setValue( fuselage.getSpan     () );
    _ui->spinBoxSweep      ->setValue( fuselage.getSweep    () );
    _ui->spinBoxLambda     ->setValue( fuselage.getLambda   () );
    _ui->spinBoxTailLength ->setValue( fuselage.getLTail    () );
    _ui->spinBoxPressVol   ->setValue( fuselage.getVolPress () );
    _ui->spinBoxCruiseV    ->setValue( fuselage.getVCruise  () );
    _ui->spinBoxCruiseH    ->setValue( fuselage.getHCruise  () );
}

////////////////////////////////////////////////////////////////////////////////

void DialogEditFuselage::getData( Fuselage *fuselage ) const
{
    fuselage->setName( _ui->lineEditName->text().toStdString().c_str() );

    fuselage->setMass( _ui->spinBox_Mass->value() );

    Vector3 position( _ui->spinBox_X->value(),
                      _ui->spinBox_Y->value(),
                      _ui->spinBox_Z->value() );

    fuselage->setPosition( position );

    fuselage->setLength ( _ui->spinBox_L->value() );
    fuselage->setWidth  ( _ui->spinBox_W->value() );
    fuselage->setHeight ( _ui->spinBox_H->value() );


    Fuselage::CargoDoor door = Fuselage::NoCargoDoor;

    switch ( _ui->comboBoxDoor->currentIndex() )
    {
        case Fuselage::NoCargoDoor       : door = Fuselage::NoCargoDoor       ; break;
        case Fuselage::OneSideCargoDoor  : door = Fuselage::OneSideCargoDoor  ; break;
        case Fuselage::TwoSideCargoDoor  : door = Fuselage::TwoSideCargoDoor  ; break;
        case Fuselage::AftClamshellDoor  : door = Fuselage::AftClamshellDoor  ; break;
        case Fuselage::TwoSideAndAftDoor : door = Fuselage::TwoSideAndAftDoor ; break;
    }

    fuselage->setMTOW      ( _ui->spinBoxMTOW       ->value() );
    fuselage->setNzMax     ( _ui->spinBoxNz         ->value() );
    fuselage->setDelta( _ui->checkBoxDelta->isChecked() );
    fuselage->setDoor( door );
    fuselage->setMount( _ui->checkBoxMount->isChecked() );
    fuselage->setSpan     ( _ui->spinBoxSpan       ->value() );
    fuselage->setSweep    ( _ui->spinBoxSweep      ->value() );
    fuselage->setLambda   ( _ui->spinBoxLambda     ->value() );
    fuselage->setLTail    ( _ui->spinBoxTailLength ->value() );
    fuselage->setVolPress ( _ui->spinBoxPressVol   ->value() );
    fuselage->setVCruise  ( _ui->spinBoxCruiseV    ->value() );
    fuselage->setHCruise  ( _ui->spinBoxCruiseH    ->value() );
}

////////////////////////////////////////////////////////////////////////////////

void DialogEditFuselage::setType( Type type )
{
    _ui->labelMTOW       ->hide();
    _ui->labelNz         ->hide();
    _ui->labelDoor       ->hide();
    _ui->labelSpan       ->hide();
    _ui->labelSweep      ->hide();
    _ui->labelLambda     ->hide();
    _ui->labelTailLength ->hide();
    _ui->labelPressVol   ->hide();
    _ui->labelCruiseV    ->hide();
    _ui->labelCruiseH    ->hide();

    _ui->spinBoxMTOW       ->hide();
    _ui->spinBoxNz         ->hide();
    _ui->checkBoxDelta     ->hide();
    _ui->comboBoxDoor      ->hide();
    _ui->checkBoxMount     ->hide();
    _ui->spinBoxSpan       ->hide();
    _ui->spinBoxSweep      ->hide();
    _ui->spinBoxLambda     ->hide();
    _ui->spinBoxTailLength ->hide();
    _ui->spinBoxPressVol   ->hide();
    _ui->spinBoxCruiseV    ->hide();
    _ui->spinBoxCruiseH    ->hide();

    switch ( type )
    {
    case FighterAttack:
        _ui->labelMTOW ->show();
        _ui->labelNz   ->show();

        _ui->spinBoxMTOW   ->show();
        _ui->spinBoxNz     ->show();
        _ui->checkBoxDelta ->show();
        break;

    case CargoTransport:
        _ui->labelMTOW   ->show();
        _ui->labelNz     ->show();
        _ui->labelDoor   ->show();
        _ui->labelSpan   ->show();
        _ui->labelSweep  ->show();
        _ui->labelLambda ->show();

        _ui->spinBoxMTOW   ->show();
        _ui->spinBoxNz     ->show();
        _ui->comboBoxDoor  ->show();
        _ui->checkBoxMount ->show();
        _ui->spinBoxSpan   ->show();
        _ui->spinBoxSweep  ->show();
        _ui->spinBoxLambda ->show();
        break;

    case GeneralAviation:
        _ui->labelMTOW       ->show();
        _ui->labelNz         ->show();
        _ui->labelTailLength ->show();
        _ui->labelPressVol   ->show();
        _ui->labelCruiseV    ->show();
        _ui->labelCruiseH    ->show();

        _ui->spinBoxMTOW       ->show();
        _ui->spinBoxNz         ->show();
        _ui->spinBoxTailLength ->show();
        _ui->spinBoxPressVol   ->show();
        _ui->spinBoxCruiseV    ->show();
        _ui->spinBoxCruiseH    ->show();
        break;
    }
}

////////////////////////////////////////////////////////////////////////////////

void DialogEditFuselage::updateFuselage()
{
    Fuselage::CargoDoor door = Fuselage::NoCargoDoor;

    switch( _ui->comboBoxDoor->currentIndex() )
    {
        case Fuselage::NoCargoDoor       : door = Fuselage::NoCargoDoor       ; break;
        case Fuselage::OneSideCargoDoor  : door = Fuselage::OneSideCargoDoor  ; break;
        case Fuselage::TwoSideCargoDoor  : door = Fuselage::TwoSideCargoDoor  ; break;
        case Fuselage::AftClamshellDoor  : door = Fuselage::AftClamshellDoor  ; break;
        case Fuselage::TwoSideAndAftDoor : door = Fuselage::TwoSideAndAftDoor ; break;
    }

    double mass = Fuselage::computeMass( _fuselage->getAircraft()->getType(),
                                         _ui->spinBox_L->value(),
                                         _ui->spinBox_W->value(),
                                         _ui->spinBox_H->value(),
                                         _ui->spinBoxMTOW->value(),
                                         _ui->spinBoxNz->value(),
                                         _ui->checkBoxDelta->isChecked(),
                                         door,
                                         _ui->checkBoxMount->isChecked(),
                                         _ui->spinBoxSpan->value(),
                                         _ui->spinBoxSweep->value(),
                                         _ui->spinBoxLambda->value(),
                                         _ui->spinBoxTailLength->value(),
                                         _ui->spinBoxPressVol->value(),
                                         _ui->spinBoxCruiseV->value(),
                                         _ui->spinBoxCruiseH->value()
                                       );

    _ui->spinBoxOutputMass->setValue( mass );
}

////////////////////////////////////////////////////////////////////////////////

void DialogEditFuselage::on_spinBox_L_valueChanged(double )
{
    updateFuselage();
}

////////////////////////////////////////////////////////////////////////////////

void DialogEditFuselage::on_spinBox_W_valueChanged(double )
{
    updateFuselage();
}

////////////////////////////////////////////////////////////////////////////////

void DialogEditFuselage::on_spinBox_H_valueChanged(double )
{
    updateFuselage();
}

////////////////////////////////////////////////////////////////////////////////

void DialogEditFuselage::on_spinBoxNz_valueChanged(double )
{
    updateFuselage();
}

////////////////////////////////////////////////////////////////////////////////

void DialogEditFuselage::on_spinBoxMTOW_valueChanged(double )
{
    updateFuselage();
}

////////////////////////////////////////////////////////////////////////////////

void DialogEditFuselage::on_checkBoxDelta_toggled(bool checked)
{
    updateFuselage();
}

////////////////////////////////////////////////////////////////////////////////

void DialogEditFuselage::on_comboBoxDoor_currentIndexChanged(int )
{
    updateFuselage();
}

////////////////////////////////////////////////////////////////////////////////

void DialogEditFuselage::on_checkBoxMount_toggled(bool )
{
    updateFuselage();
}

////////////////////////////////////////////////////////////////////////////////

void DialogEditFuselage::on_spinBoxSpan_valueChanged(double )
{
    updateFuselage();
}

////////////////////////////////////////////////////////////////////////////////

void DialogEditFuselage::on_spinBoxSweep_valueChanged(double )
{
    updateFuselage();
}

////////////////////////////////////////////////////////////////////////////////

void DialogEditFuselage::on_spinBoxLambda_valueChanged(double )
{
    updateFuselage();
}

////////////////////////////////////////////////////////////////////////////////

void DialogEditFuselage::on_spinBoxTailLength_valueChanged(double )
{
    updateFuselage();
}

void DialogEditFuselage::on_spinBoxPressVol_valueChanged(double )
{
    updateFuselage();
}

void DialogEditFuselage::on_spinBoxCruiseV_valueChanged(double )
{
    updateFuselage();
}

////////////////////////////////////////////////////////////////////////////////

void DialogEditFuselage::on_spinBoxCruiseH_valueChanged(double )
{
    updateFuselage();
}
