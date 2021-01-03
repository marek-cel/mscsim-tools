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
#include <gui/DialogEditWing.h>
#include <ui_DialogEditWing.h>

////////////////////////////////////////////////////////////////////////////////

void DialogEditWing::edit( QWidget *parent, Wing *wing )
{
    DialogEditWing *dialog = new DialogEditWing( parent );

    dialog->init( *wing );

    if ( dialog->exec() == QDialog::Accepted )
    {
        dialog->getData( wing );
    }

    DELPTR( dialog );
}

////////////////////////////////////////////////////////////////////////////////

DialogEditWing::DialogEditWing( QWidget *parent ) :
    QDialog( parent ),
    _ui( new Ui::DialogEditWing )
{
    _ui->setupUi( this );
}

////////////////////////////////////////////////////////////////////////////////

DialogEditWing::~DialogEditWing()
{
    DELPTR( _ui );
}

////////////////////////////////////////////////////////////////////////////////

void DialogEditWing::init( const Wing &wing )
{
    _wing = &wing;

    _ui->lineEditName->setText( wing.getName() );

    _ui->spinBox_Mass->setValue( wing.getMass() );

    _ui->spinBox_X->setValue( wing.getPosition().x() );
    _ui->spinBox_Y->setValue( wing.getPosition().y() );
    _ui->spinBox_Z->setValue( wing.getPosition().z() );

    _ui->spinBox_L->setValue( wing.getLength () );
    _ui->spinBox_W->setValue( wing.getWidth  () );
    _ui->spinBox_H->setValue( wing.getHeight () );


    _ui->checkBoxDelta->setChecked( wing.getDelta() );
    _ui->checkBoxVariable->setCheckable( wing.getVariable() );

    _ui->spinBoxArea       ->setValue( wing.getArea     () );
    _ui->spinBoxMTOW       ->setValue( wing.getMTOW     () );
    _ui->spinBoxNz         ->setValue( wing.getNzMax    () );
    _ui->spinBoxSweep      ->setValue( wing.getSweep    () );
    _ui->spinBoxLambda     ->setValue( wing.getLambda   () );
    _ui->spinBoxAR         ->setValue( wing.getAR       () );
    _ui->spinBoxAreaCtrl   ->setValue( wing.getAreaCtrl () );
    _ui->spinBoxTCRoot     ->setValue( wing.getTCRoot   () );
}

////////////////////////////////////////////////////////////////////////////////

void DialogEditWing::getData( Wing *wing ) const
{
    wing->setName( _ui->lineEditName->text().toStdString().c_str() );

    wing->setMass( _ui->spinBox_Mass->value() );

    Vector3 position( _ui->spinBox_X->value(),
                      _ui->spinBox_Y->value(),
                      _ui->spinBox_Z->value() );

    wing->setPosition( position );

    wing->setLength ( _ui->spinBox_L->value() );
    wing->setWidth  ( _ui->spinBox_W->value() );
    wing->setHeight ( _ui->spinBox_H->value() );

    wing->setDelta( _ui->checkBoxDelta->isChecked() );
    wing->setVariable( _ui->checkBoxVariable->isChecked() );

    wing->setArea     ( _ui->spinBoxArea     ->value() );
    wing->setMTOW     ( _ui->spinBoxMTOW     ->value() );
    wing->setNzMax    ( _ui->spinBoxNz       ->value() );
    wing->setSweep    ( _ui->spinBoxSweep    ->value() );
    wing->setLambda   ( _ui->spinBoxLambda   ->value() );
    wing->setAR       ( _ui->spinBoxAR       ->value() );
    wing->setAreaCtrl ( _ui->spinBoxAreaCtrl ->value() );
    wing->setTCRoot   ( _ui->spinBoxTCRoot   ->value() );
}

////////////////////////////////////////////////////////////////////////////////

void DialogEditWing::setType( Type type )
{

}

////////////////////////////////////////////////////////////////////////////////

void DialogEditWing::updateWing()
{
    double mass = Wing::computeMass( _wing->getAircraft()->getType(),
                                     _ui->spinBoxArea->value(),
                                     _ui->spinBoxMTOW->value(),
                                     _ui->spinBoxNz->value(),
                                     _ui->checkBoxDelta->isChecked(),
                                     _ui->spinBoxSweep->value(),
                                     _ui->spinBoxLambda->value(),
                                     _ui->spinBoxAR->value(),
                                     _ui->checkBoxVariable->isChecked(),
                                     _ui->spinBoxAreaCtrl->value(),
                                     _ui->spinBoxTCRoot->value(),
                                     _ui->spinBoxFuel->value(),
                                     _ui->spinBoxCruiseV->value(),
                                     _ui->spinBoxCruiseH->value()
                                       );

    _ui->spinBoxOutputMass->setValue( mass );
}

////////////////////////////////////////////////////////////////////////////////

void DialogEditWing::on_spinBox_L_valueChanged(double )
{
    updateWing();
}

////////////////////////////////////////////////////////////////////////////////

void DialogEditWing::on_spinBox_W_valueChanged(double )
{
    updateWing();
}

////////////////////////////////////////////////////////////////////////////////

void DialogEditWing::on_spinBox_H_valueChanged(double )
{
    updateWing();
}

void DialogEditWing::on_spinBoxArea_valueChanged(double )
{
    updateWing();
}

void DialogEditWing::on_spinBoxNz_valueChanged(double )
{
    updateWing();
}

void DialogEditWing::on_spinBoxMTOW_valueChanged(double )
{
    updateWing();
}

void DialogEditWing::on_spinBoxSweep_valueChanged(double )
{
    updateWing();
}

void DialogEditWing::on_spinBoxLambda_valueChanged(double )
{
    updateWing();
}

void DialogEditWing::on_spinBoxAR_valueChanged(double )
{
    updateWing();
}

void DialogEditWing::on_spinBoxAreaCtrl_valueChanged(double )
{
    updateWing();
}

void DialogEditWing::on_spinBoxTCRoot_valueChanged(double )
{
    updateWing();
}

void DialogEditWing::on_checkBoxDelta_toggled(bool )
{
    updateWing();
}

void DialogEditWing::on_checkBoxVariable_toggled(bool )
{
    updateWing();
}

void DialogEditWing::on_spinBoxFuel_valueChanged(double )
{
    updateWing();
}

void DialogEditWing::on_spinBoxCruiseV_valueChanged(double )
{
    updateWing();
}

void DialogEditWing::on_spinBoxCruiseH_valueChanged(double )
{
    updateWing();
}
