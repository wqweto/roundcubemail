<?php

/*
 +-----------------------------------------------------------------------+
 | localization/<lang>/labels.inc                                        |
 |                                                                       |
 | Localization file of the Roundcube Webmail client                     |
 | Copyright (C) 2005-2013, The Roundcube Dev Team                       |
 |                                                                       |
 | Licensed under the GNU General Public License version 3 or            |
 | any later version with exceptions for skins & plugins.                |
 | See the README file for a full license statement.                     |
 |                                                                       |
 +-----------------------------------------------------------------------+

 For translation see https://www.transifex.com/projects/p/roundcube-webmail/resource/labels/
*/

$labels = array();

// login page
$labels['welcome']   = 'Willkommen bei $product';
$labels['username']  = 'Benutzername';
$labels['password']  = 'Passwort';
$labels['server']    = 'Server';
$labels['login']     = 'Anmelden';

// taskbar
$labels['logout']   = 'Abmelden';
$labels['mail']     = 'E-Mail';
$labels['settings'] = 'Einstellungen';
$labels['addressbook'] = 'Adressbuch';

// mailbox names
$labels['inbox']  = 'Posteingang';
$labels['drafts'] = 'Entwürfe';
$labels['sent']   = 'Gesendet';
$labels['trash']  = 'Gelöscht';
$labels['junk']   = 'Spam';
$labels['show_real_foldernames'] = 'Echte Namen für Spezialordner anzeigen';

// message listing
$labels['subject'] = 'Betreff';
$labels['from']    = 'Von';
$labels['sender']  = 'Absender';
$labels['to']      = 'An';
$labels['cc']      = 'Kopie';
$labels['bcc']     = 'Blindkopie';
$labels['replyto'] = 'Antwort an';
$labels['followupto'] = 'Followup-To';
$labels['date']    = 'Datum';
$labels['size']    = 'Größe';
$labels['priority'] = 'Priorität';
$labels['organization'] = 'Organisation';
$labels['readstatus'] = 'Gelesen/Ungelesen';
$labels['listoptions'] = 'Listenoptionen...';

$labels['mailboxlist'] = 'Ordner';
$labels['messagesfromto'] = 'Nachrichten $from bis $to von $count';
$labels['threadsfromto'] = 'Konversationen $from bis $to von $count';
$labels['messagenrof'] = 'Nachricht $nr von $count';
$labels['fromtoshort'] = '$from – $to von $count';

$labels['copy']     = 'Kopieren';
$labels['move']     = 'Verschieben';
$labels['moveto']   = 'Verschieben nach...';
$labels['download'] = 'Herunterladen';
$labels['open']     = 'Offen';
$labels['showattachment'] = 'Anzeigen';
$labels['showanyway'] = 'Trotzdem anzeigen';

$labels['filename'] = 'Dateiname';
$labels['filesize'] = 'Dateigröße';

$labels['addtoaddressbook'] = 'Ins Adressbuch übernehmen';

// weekdays short
$labels['sun'] = 'So';
$labels['mon'] = 'Mo';
$labels['tue'] = 'Di';
$labels['wed'] = 'Mi';
$labels['thu'] = 'Do';
$labels['fri'] = 'Fr';
$labels['sat'] = 'Sa';

// weekdays long
$labels['sunday']    = 'Sonntag';
$labels['monday']    = 'Montag';
$labels['tuesday']   = 'Dienstag';
$labels['wednesday'] = 'Mittwoch';
$labels['thursday']  = 'Donnerstag';
$labels['friday']    = 'Freitag';
$labels['saturday']  = 'Samstag';

// months short
$labels['jan']	= 'Jan';
$labels['feb']	= 'Feb';
$labels['mar']	= 'Mär';
$labels['apr']	= 'Apr';
$labels['may']	= 'Mai';
$labels['jun']	= 'Jun';
$labels['jul'] 	= 'Jul';
$labels['aug']	= 'Aug';
$labels['sep']	= 'Sep';
$labels['oct']	= 'Okt';
$labels['nov']	= 'Nov';
$labels['dec']	= 'Dez';

// months long
$labels['longjan']	= 'Januar';
$labels['longfeb']	= 'Februar';
$labels['longmar']	= 'März';
$labels['longapr']	= 'April';
$labels['longmay']	= 'Mai';
$labels['longjun']	= 'Juni';
$labels['longjul']	= 'Juli';
$labels['longaug']	= 'August';
$labels['longsep']	= 'September';
$labels['longoct']	= 'Oktober';
$labels['longnov']	= 'November';
$labels['longdec']	= 'Dezember';

$labels['today'] = 'Heute';

// toolbar buttons
$labels['refresh']          = 'Aktualisieren';
$labels['checkmail']        = 'Auf neue Nachrichten überprüfen';
$labels['compose']          = 'Schreiben';
$labels['writenewmessage']  = 'Neue Nachricht schreiben';
$labels['reply']            = 'Antworten';
$labels['replytomessage']   = 'Antwort verfassen';
$labels['replytoallmessage'] = 'Antwort an Mailingliste oder an Absender und alle Empfänger verfassen';
$labels['replyall']         = 'Allen antworten';
$labels['replylist']        = 'Liste antworten';
$labels['forward']          = 'Weiterleiten';
$labels['forwardinline']    = 'innerhalb der Nachricht';
$labels['forwardattachment'] = 'als Dateianhang';
$labels['forwardmessage']   = 'Nachricht weiterleiten';
$labels['deletemessage']    = 'Nachricht löschen';
$labels['movemessagetotrash'] = 'Nachricht in den Papierkorb verschieben';
$labels['printmessage']     = 'Nachricht drucken';
$labels['previousmessage']  = 'Vorherige Nachricht anzeigen';
$labels['firstmessage']     = 'Die erste Nachricht anzeigen';
$labels['nextmessage']      = 'Nächste Nachricht anzeigen';
$labels['lastmessage']      = 'Die letzte Nachricht anzeigen';
$labels['backtolist']       = 'Zurück zur Liste';
$labels['viewsource']       = 'Quelltext anzeigen';
$labels['mark']             = 'Markieren';
$labels['markmessages']     = 'Nachrichten markieren';
$labels['markread']         = 'Als gelesen';
$labels['markunread']       = 'Als ungelesen';
$labels['markflagged']      = 'Markierung hinzufügen';
$labels['markunflagged']    = 'Markierung entfernen';
$labels['moreactions']      = 'Mehr...';
$labels['more']             = 'Mehr';
$labels['back']             = 'Zurück';
$labels['options']          = 'Optionen';

$labels['select'] = 'Auswahl';
$labels['all'] = 'Alle';
$labels['none'] = 'Keine';
$labels['currpage'] = 'Aktuelle Seite';
$labels['unread'] = 'Ungelesene';
$labels['flagged'] = 'Markierte';
$labels['unanswered'] = 'Unbeantwortete';
$labels['withattachment'] = 'Mit Anhang';
$labels['deleted'] = 'Gelöschte';
$labels['undeleted'] = 'Nicht gelöscht';
$labels['invert'] = 'Invertieren';
$labels['filter'] = 'Filter';
$labels['list'] = 'Liste';
$labels['threads'] = 'Konversationen';
$labels['expand-all'] = 'Alle aufklappen';
$labels['expand-unread'] = 'Ungelesene aufklappen';
$labels['collapse-all'] = 'Alle zuklappen';
$labels['threaded'] = 'Gruppiert';

$labels['autoexpand_threads'] = 'Konversationen aufklappen';
$labels['do_expand'] = 'alle';
$labels['expand_only_unread'] = 'nur ungelesene';
$labels['fromto'] = 'Von/An';
$labels['flag'] = 'Markierung';
$labels['attachment'] = 'Anhang';
$labels['nonesort'] = 'Keine';
$labels['sentdate'] = 'Sendedatum';
$labels['arrival'] = 'Empfangsdatum';
$labels['asc'] = 'aufsteigend';
$labels['desc'] = 'absteigend';
$labels['listcolumns'] = 'Spalten';
$labels['listsorting'] = 'Sortierung';
$labels['listorder'] = 'Ordnung';
$labels['listmode'] = 'Anzeigemodus';

$labels['folderactions'] = 'Ordneraktionen...';
$labels['compact'] = 'Packen';
$labels['empty'] = 'Leeren';
$labels['importmessages'] = 'Nachrichten importieren';

$labels['quota'] = 'Speicherplatz';
$labels['unknown']  = 'unbekannt';
$labels['unlimited']  = 'unbegrenzt';

$labels['quicksearch']  = 'Schnellsuche';
$labels['resetsearch']  = 'Suche zurücksetzen';
$labels['searchmod']  = 'Suchkriterien ändern';
$labels['msgtext']  = 'Nachricht';
$labels['body']  = 'Inhalt';
$labels['type'] = 'Type';

$labels['openinextwin'] = 'In neuem Fenster öffnen';
$labels['emlsave'] = 'Lokal speichern (.eml)';
$labels['changeformattext'] = 'Als reiner Text anzeigen';
$labels['changeformathtml'] = 'Als original HTML anzeigen';

// message compose
$labels['editasnew']      = 'Als neue Nachricht öffnen';
$labels['send']           = 'Senden';
$labels['sendmessage']    = 'Nachricht jetzt senden';
$labels['savemessage']    = 'Nachricht speichern';
$labels['addattachment']  = 'Datei anfügen';
$labels['charset']        = 'Zeichensatz';
$labels['editortype']     = 'Editor Typ';
$labels['returnreceipt']  = 'Empfangsbestätigung (MDN)';
$labels['dsn']            = 'Übermittlungsbestätigung (DSN)';
$labels['mailreplyintro'] = 'Am $date, schrieb $sender:';
$labels['originalmessage'] = 'Originalnachricht';

$labels['editidents']    = 'Absender ändern';
$labels['spellcheck']    = 'Rechtschreibung';
$labels['checkspelling'] = 'Rechtschreibung prüfen';
$labels['resumeediting'] = 'Bearbeitung fortsetzen';
$labels['revertto']      = 'Zurück zu';

$labels['attach'] = 'Anhängen';
$labels['attachments'] = 'Anhänge';
$labels['upload'] = 'Hochladen';
$labels['uploadprogress'] = '$percent ($current von $total)';
$labels['close']  = 'Schließen';
$labels['messageoptions']  = 'Optionen...';

$labels['low']     = 'Niedrig';
$labels['lowest']  = 'Niedrigste';
$labels['normal']  = 'Normal';
$labels['high']    = 'Hoch';
$labels['highest'] = 'Höchste';

$labels['nosubject']  = '(kein Betreff)';
$labels['showimages'] = 'Bilder anzeigen';
$labels['alwaysshow'] = 'Bilder von $sender immer zeigen';
$labels['isdraft']    = 'Dies ist ein Entwurf';
$labels['andnmore']   = '$nr weitere';
$labels['togglemoreheaders'] = 'Zeige weitere Nachrichten-Header';
$labels['togglefullheaders'] = 'Original-Kopfzeilen ein-/ausblenden';

$labels['htmltoggle'] = 'HTML';
$labels['plaintoggle'] = 'Nur-Text';
$labels['savesentmessagein'] = 'Nachricht speichern in';
$labels['dontsave'] = 'nicht speichern';
$labels['maxuploadsize'] = 'Maximal erlaubte Dateigröße ist $size';

$labels['addcc'] = 'Cc hinzufügen';
$labels['addbcc'] = 'Bcc hinzufügen';
$labels['addreplyto'] = 'Antwortadresse hinzufügen';
$labels['addfollowupto'] = 'Followup-To hinzufügen';

// mdn
$labels['mdnrequest'] = 'Der Sender dieser Nachricht möchte gerne eine Lesebestätigung. Wollen Sie dieses bestätigen?';
$labels['receiptread'] = 'Empfangsbestätigung (gelesen)';
$labels['yourmessage'] = 'Dies ist eine Empfangsbestätigung für Ihre Nachricht';
$labels['receiptnote'] = 'Hinweis: Der Empfänger hat den Empfang der Nachricht bestätigt. Dies ist keine Garantie, dass die Nachricht gelesen und verstanden wurde.';

// address boook
$labels['name']         = 'Angezeigter Name';
$labels['firstname']    = 'Vorname';
$labels['surname']      = 'Nachname';
$labels['middlename']   = 'zweiter  Vorname';
$labels['nameprefix']   = 'Anrede';
$labels['namesuffix']   = 'Namenszusatz';
$labels['nickname']     = 'Spitzname';
$labels['jobtitle']     = 'Berufsbezeichnung';
$labels['department']   = 'Firma';
$labels['gender']       = 'Geschlecht';
$labels['maidenname']   = 'Mädchenname';
$labels['email']        = 'E-Mail';
$labels['phone']        = 'Telefon';
$labels['address']      = 'Adresse';
$labels['street']       = 'Straße';
$labels['locality']     = 'Ort';
$labels['zipcode']      = 'PLZ';
$labels['region']       = 'Region';
$labels['country']      = 'Land';
$labels['birthday']     = 'Geburtstag';
$labels['anniversary']  = 'Jahrestag';
$labels['website']      = 'Webseite';
$labels['instantmessenger'] = 'IM-Adresse';
$labels['notes'] = 'Notizen';
$labels['male']   = 'männlich';
$labels['female'] = 'weiblich';
$labels['manager'] = 'Vorgesetze(r)';
$labels['assistant'] = 'Assistenz';
$labels['spouse'] = 'Partner/in';
$labels['allfields'] = 'Alle Felder';
$labels['search'] = 'Suche';
$labels['advsearch'] = 'Detaillierte Suche';
$labels['advanced'] = 'Erweitert';
$labels['other'] = 'Andere';

$labels['typehome']   = 'Privat';
$labels['typework']   = 'Dienstlich';
$labels['typeother']  = 'Andere';
$labels['typemobile']  = 'Mobil';
$labels['typemain']  = 'Hauptnummer';
$labels['typehomefax']  = 'Fax Privat';
$labels['typeworkfax']  = 'Fax Dienst';
$labels['typecar']  = 'Auto';
$labels['typepager']  = 'Pager';
$labels['typevideo']  = 'Video';
$labels['typeassistant']  = 'Assistenz';
$labels['typehomepage']  = 'Internet';
$labels['typeblog'] = 'Blog';
$labels['typeprofile'] = 'Profil';

$labels['addfield'] = 'Feld hinzufügen...';
$labels['addcontact'] = 'Kontakt hinzufügen';
$labels['editcontact'] = 'Kontakt bearbeiten';
$labels['contacts'] = 'Kontakte';
$labels['contactproperties'] = 'Kontaktdaten';
$labels['personalinfo'] = 'Persönliche Informationen';

$labels['edit']   = 'Bearbeiten';
$labels['cancel'] = 'Abbrechen';
$labels['save']   = 'Speichern';
$labels['delete'] = 'Löschen';
$labels['rename'] = 'Umbenennen';
$labels['addphoto'] = 'Kontaktbild hinzufügen';
$labels['replacephoto'] = 'Bild ändern';
$labels['uploadphoto'] = 'Bild hochladen';

$labels['newcontact']     = 'Neuen Kontakt erstellen';
$labels['deletecontact']  = 'Gewählte Kontakte löschen';
$labels['composeto']      = 'Nachricht verfassen';
$labels['contactsfromto'] = 'Kontakte $from bis $to von $count';
$labels['print']          = 'Drucken';
$labels['export']         = 'Exportieren';
$labels['exportall']      = 'Alles exportieren';
$labels['exportsel']      = 'Auswahl exportieren';
$labels['exportvcards']   = 'Kontakte im vCard-Format exportieren';
$labels['newcontactgroup'] = 'Neue Kontaktgruppe erstellen';
$labels['grouprename']    = 'Gruppe umbenennen';
$labels['groupdelete']    = 'Gruppe löschen';
$labels['groupremoveselected'] = 'Gewählte Kontakte aus Gruppe entfernen';

$labels['previouspage']   = 'Seite zurück';
$labels['firstpage']      = 'Erste Seite';
$labels['nextpage']       = 'Nächste Seite';
$labels['lastpage']       = 'Letzte Seite';

$labels['group'] = 'Gruppe';
$labels['groups'] = 'Gruppen';
$labels['listgroup'] = 'List group members';
$labels['personaladrbook'] = 'Persönliches Adressbuch';

$labels['searchsave'] = 'Suchergebnisse speichern';
$labels['searchdelete'] = 'Suchergebnisse löschen';

$labels['import'] = 'Importieren';
$labels['importcontacts'] = 'Kontakte importieren';
$labels['importfromfile'] = 'Import aus Datei:';
$labels['importtarget'] = 'Einen neuen Kontakt hinzufügen:';
$labels['importreplace'] = 'Bestehendes Adressbuch komplett ersetzen';
$labels['importdesc'] = 'Sie können Kontakte von einem vorhandenen Adressbuch hochladen.<br/>Zur Zeit wird der Import von Adressen im <a href="http://de.wikipedia.org/wiki/VCard">vCard</a> oder <a href="http://de.wikipedia.org/wiki/CSV_(Dateiformat)">CSV</a>Format unterstützt.';
$labels['done'] = 'Fertig';

// settings
$labels['settingsfor'] = 'Einstellungen für';
$labels['about'] = 'Über';
$labels['preferences'] = 'Einstellungen';
$labels['userpreferences'] = 'Benutzereinstellungen';
$labels['editpreferences'] = 'Benutzereinstellungen bearbeiten';

$labels['identities'] = 'Identitäten';
$labels['manageidentities'] = 'Absender für dieses Konto verwalten';
$labels['newidentity'] = 'Neuer Absender';

$labels['newitem'] = 'Neuer Eintrag';
$labels['edititem'] = 'Eintrag bearbeiten';

$labels['preferhtml'] = 'HTML anzeigen';
$labels['defaultcharset'] = 'Standard Zeichensatz';
$labels['htmlmessage'] = 'HTML-Nachricht';
$labels['messagepart'] = 'Teilstück';
$labels['digitalsig'] = 'Digitale Signatur';
$labels['dateformat'] = 'Datumsformatierung';
$labels['timeformat'] = 'Zeitformatierung';
$labels['prettydate'] = 'Kurze Datumsanzeige';
$labels['setdefault']  = 'Als Standard';
$labels['autodetect']  = 'Automatisch';
$labels['language']  = 'Sprache';
$labels['timezone']  = 'Zeitzone';
$labels['pagesize']  = 'Einträge pro Seite';
$labels['signature'] = 'Signatur';
$labels['dstactive']  = 'Sommerzeit';
$labels['showinextwin'] = 'Nachrichten in neuem Fenster öffnen';
$labels['composeextwin'] = 'Nachrichten in neuem Fenster verfassen';
$labels['htmleditor'] = 'HTML-Nachrichten verfassen';
$labels['htmlonreply'] = 'nur Antworten auf HTML-Nachrichten';
$labels['htmlonreplyandforward'] = 'beim Weiterleiten und  Beantworten auf HTML-Nachrichten';
$labels['htmlsignature'] = 'HTML-Signatur';
$labels['showemail'] = 'E-Mail-Adresse mit dem Display Namen anzeigen';
$labels['previewpane'] = 'Nachrichtenvorschau anzeigen';
$labels['skin'] = 'Oberflächendesign';
$labels['logoutclear'] = 'Papierkorb beim Abmelden leeren';
$labels['logoutcompact'] = 'Posteingang beim Abmelden packen';
$labels['uisettings'] = 'Benutzeroberfläche';
$labels['serversettings'] = 'Server-Einstellungen';
$labels['mailboxview'] = 'Mailbox-Ansicht';
$labels['mdnrequests'] = 'Empfangsbestätigung senden';
$labels['askuser'] = 'immer fragen';
$labels['autosend'] = 'Lesebestätigung automatisch senden';
$labels['autosendknown'] = 'Lesebestätigung nur an meine Kontakte senden';
$labels['autosendknownignore'] = 'für bekannte Absender, sonst ignorieren';
$labels['ignore'] = 'ignorieren';
$labels['readwhendeleted'] = 'Beim Löschen als gelesen markieren';
$labels['flagfordeletion'] = 'Als gelöscht markieren anstatt in den Papierkorb verschieben';
$labels['skipdeleted'] = 'Zeige keine gelöschten Nachrichten an';
$labels['deletealways'] = 'Wenn verschieben in den Papierkorb fehlschlägt, Nachricht löschen';
$labels['deletejunk'] = 'Nachrichten in Spam direkt löschen';
$labels['showremoteimages'] = 'Eingebettete Bilder vom Internet laden';
$labels['fromknownsenders'] = 'bei bekannten Absendern';
$labels['always'] = 'immer';
$labels['showinlineimages'] = 'Angehängte Bilder unter der Nachricht anzeigen';
$labels['autosavedraft']  = 'Entwurf automatisch speichern';
$labels['everynminutes']  = '$n Minute(n)';
$labels['refreshinterval']  = 'Aktualisieren (auf neue Nachrichten prüfen, etc.)';
$labels['never']  = 'nie';
$labels['immediately']  = 'sofort';
$labels['messagesdisplaying'] = 'Nachrichtendarstellung';
$labels['messagescomposition'] = 'Nachrichtenerstellung';
$labels['mimeparamfolding'] = 'Namen der Dateianhänge';
$labels['2231folding'] = 'vollständig RFC 2231 kompatibel (Thunderbird)';
$labels['miscfolding'] = 'RFC 2047/2231 kompatibel (Microsoft Outlook)';
$labels['2047folding'] = 'vollständig RFC 2047 kompatibel (andere)';
$labels['force7bit'] = 'MIME-Kodierung für 8-bit Zeichen';
$labels['advancedoptions'] = 'Erweiterte Einstellungen';
$labels['focusonnewmessage'] = 'Fokussiere Browserfenster bei neuen Nachrichten';
$labels['checkallfolders'] = 'Alle Ordner auf neue Nachrichten prüfen';
$labels['displaynext'] = 'Zeige nächste Nachricht nach verschieben/löschen';
$labels['defaultfont'] = 'Standard Schrift von HTML Nachrichten';
$labels['mainoptions'] = 'Allgemein';
$labels['browseroptions'] = 'Browsereinstellungen';
$labels['section'] = 'Bereich';
$labels['maintenance'] = 'Wartung';
$labels['newmessage'] = 'Neue Nachricht';
$labels['signatureoptions'] = 'Signatur';
$labels['whenreplying'] = 'Beantworten einer Nachricht';
$labels['replyempty'] = 'die Originalnachricht nicht zitieren';
$labels['replytopposting'] = 'Antwort über der Originalnachricht';
$labels['replybottomposting'] = 'Antwort unter der Originalnachricht';
$labels['replyremovesignature'] = 'Beim Antworten Signatur der Originalnachricht entfernen';
$labels['autoaddsignature'] = 'Signatur automatisch einfügen';
$labels['newmessageonly'] = 'nur bei neuen Nachrichten';
$labels['replyandforwardonly'] = 'nur bei Antworten und Weiterleitungen';
$labels['insertsignature'] = 'Signatur einfügen';
$labels['previewpanemarkread']  = 'Nachricht in Vorschau als gelesen markieren';
$labels['afternseconds']  = 'nach $n Sekunden';
$labels['reqmdn'] = 'Empfangsbestätigung (MDN) immer anfordern';
$labels['reqdsn'] = 'Übermittlungsbestätigung (DSN) immer anfordern';
$labels['replysamefolder'] = 'Antworten im selben Ordner wie Original speichern';
$labels['defaultabook'] = 'Standard Adressbuch';
$labels['autocompletesingle'] = 'Alternative E-Mailadressen bei der Auto-Vervollständigung nicht berücksichtigen';
$labels['listnamedisplay'] = 'Kontakte auflisten als';
$labels['spellcheckbeforesend'] = 'Rechtschreibprüfung vor dem Absenden der Nachricht';
$labels['spellcheckoptions'] = 'Rechtschreibprüfungsoptionen';
$labels['spellcheckignoresyms'] = 'Wörter mit Symbolen überspringen';
$labels['spellcheckignorenums'] = 'Wörter mit Ziffern überspringen';
$labels['spellcheckignorecaps'] = 'Wörter überspringen, die nur aus Großbuchstaben bestehen';
$labels['addtodict'] = 'Zum Wörterbuch hinzufügen';
$labels['mailtoprotohandler'] = 'Als Empfänger für mailto: Links einrichten';
$labels['standardwindows'] = 'Popups als Standard Windows behandeln';
$labels['forwardmode'] = 'Nachrichtenweiterleitung';
$labels['inline'] = 'eingebettet';
$labels['asattachment'] = 'als Anhang';

$labels['folder']  = 'Ordner';
$labels['folders']  = 'Ordner';
$labels['foldername']  = 'Ordnername';
$labels['subscribed']  = 'Abonniert';
$labels['messagecount'] = 'Nachrichten';
$labels['create']  = 'Erstellen';
$labels['createfolder']  = 'Neuen Ordner erstellen';
$labels['managefolders']  = 'Ordner verwalten';
$labels['specialfolders'] = 'Spezialordner';
$labels['properties'] = 'Eigenschaften';
$labels['folderproperties'] = 'Ordnereigenschaften';
$labels['parentfolder'] = 'Eltern';
$labels['location'] = 'Speicherort';
$labels['info'] = 'Informationen';
$labels['getfoldersize'] = 'Ordnergröße anzeigen';
$labels['changesubscription'] = 'Abonnieren';
$labels['foldertype'] = 'Ordnertyp';
$labels['personalfolder']  = 'Privater Ordner';
$labels['otherfolder']  = 'Ordner eines anderen Benutzers';
$labels['sharedfolder']  = 'Öffentlicher Ordner';

$labels['sortby'] = 'Sortieren nach';
$labels['sortasc']  = 'Aufsteigend sortieren';
$labels['sortdesc'] = 'Absteigend sortieren';
$labels['undo'] = 'Rückgängig machen';

$labels['installedplugins'] = 'Installierte Plugins';
$labels['plugin'] = 'Erweiterung';
$labels['version'] = 'Version';
$labels['source'] = 'Quellcode';
$labels['license'] = 'Lizenz';
$labels['support'] = 'Support';

// units
$labels['B'] = 'B';
$labels['KB'] = 'KB';
$labels['MB'] = 'MB';
$labels['GB'] = 'GB';

// character sets
$labels['unicode'] = 'Unicode';
$labels['english'] = 'Englisch';
$labels['westerneuropean'] = 'West Europäisch';
$labels['easterneuropean'] = 'Ost Europäisch';
$labels['southeasterneuropean'] = 'Süd-Ost Europäisch';
$labels['baltic'] = 'Baltisch';
$labels['cyrillic'] = 'Kyrillisch';
$labels['arabic'] = 'Arabisch';
$labels['greek'] = 'Griechisch';
$labels['hebrew'] = 'Hebräisch';
$labels['turkish'] = 'Türkisch';
$labels['nordic'] = 'Nordisch';
$labels['thai'] = 'Thailändisch';
$labels['celtic'] = 'Keltisch';
$labels['vietnamese'] = 'Vietnamesisch';
$labels['japanese'] = 'Japanisch';
$labels['korean'] = 'Koreanisch';
$labels['chinese'] = 'Chinesisch';

?>
