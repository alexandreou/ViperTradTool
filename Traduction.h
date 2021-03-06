// Auteur : Alexandreou
#ifndef HEADER_TRADUCTION
#define HEADER_TRADUCTION

#include <QString>
#include <iostream>
#include <vector>
#include <QProgressBar>
#include <QLabel>

class Traduction
{
public:
	Traduction();
	void remplace(std::string & dans);
	int InStrVector(std::string elem, std::vector<std::string> dans);
	int InQString2xVector(std::vector<QString> elem, std::vector<std::vector<QString>> dans);
	void setAdresseApk(QString adresse);
	void setAdresseFichiers(QString strings, QString arrays);
	bool traitement_ouverture_apk();

	std::vector<std::vector<std::string>> lecture_xml_typeStrings(std::string adresse_xml);
	std::vector<std::vector<std::vector<std::string>>> lecture_xml_typeArrays(std::string adresse_xml);

	bool traitement_ouverture_bdd();
	void setAdresseBdd(QString adresseS, QString adresseA);
	void creationVide();
	void creationEncours();
	QString getStringsFonctionATraduire();
	QString getStringsLigneDOrigine();
	void setPosString(int pos);
	QString setTraductionString(QString trad, bool question);
	QString getArraysFonctionATraduire();
	std::vector<QString> getArraysLignesATraduire();
	void setPosArrays(int pos);
	bool setTraductionArrays(std::vector<QString> trad, bool question);
	bool enregistrementStrings(std::string adresse, std::vector<std::string> fonctions, std::vector<std::string> trad, std::vector<std::string> notrad, bool mettrenotrad);
	bool enregistrementArrays(std::string adresseavecnom, std::vector<std::string> fonctions, std::vector<std::vector<std::string>> trad, std::vector<std::string> notrad, bool mettrenotrad);
	void enregistrementStringxml(std::string adresse);
	void enregistrementArraysxml(std::string adresse);
	void enregistrementBddStringxml(std::string adresse);
	void enregistrementBddArraysxml(std::string adresse);
	int totalLigneArrays();
	int totalLigneStrings();
	int getPosArrays();
	int getPosStrings();
	std::vector<std::vector<std::string>> fusionArrays(QString adresseBdd1, QString adresseBdd2, QString adresseEnregistBdd, int reponse);
	std::vector<std::string> fusionStrings(QString adresseBdd1, QString adresseBdd2, QString adresseEnregistBdd, int reponse);

	void setNomAppli(std::string nom, std::string langue1);
	void setControleInterface(QProgressBar *barre, QLabel *info);


private:
	std::string nom_appli;
	std::string langue;
	std::string adresse_bdd_strings;
	std::string adresse_bdd_arrays;
	std::string adresse_strings;
	std::string adresse_arrays;

	std::vector<std::string> liste_strings_fonctions;
	std::vector<std::string> liste_strings_trad;
	std::vector<std::string> liste_strings_trad_notrad;

	std::vector<std::string> liste_arrays_fonctions;
	std::vector<std::vector<std::string>> liste_arrays_trad;
	std::vector<std::string> liste_arrays_trad_notrad;


	std::vector<std::string> bdd_liste_strings_fonctions;
	std::vector<std::string> bdd_liste_strings_trad;

	std::vector<std::string> bdd_liste_arrays_fonctions;
	std::vector<std::vector<std::string>> bdd_liste_arrays_trad;
	std::vector<std::string> bdd_liste_arrays_trad_notrad;


	std::vector<std::string> encours_liste_strings_fonctions;
	std::vector<std::string> encours_liste_strings_trad;
	int pos_strings;

	std::vector<std::string> encours_liste_arrays_fonctions;
	std::vector<std::vector<std::string>> encours_liste_arrays_trad;
	int pos_arrays;

	std::vector<std::string> fusion_liste_strings_fonctions;
	std::vector<std::string> fusion_liste_strings_trad;

	std::vector<std::string> fusion_liste_arrays_fonctions;
	std::vector<std::vector<std::string>> fusion_liste_arrays_trad;

	std::vector<std::vector<std::vector<std::string>>> fusion_bdd1_arrays;
	std::vector<std::vector<std::vector<std::string>>> fusion_bdd2_arrays;

	std::vector<std::vector<std::string>> fusion_bdd1_strings;
	std::vector<std::vector<std::string>> fusion_bdd2_strings;

	int pos_arrays_fusion;
	int pos_strings_fusion;

	QProgressBar *barreDeProgress;
	QLabel *ligneDInformation;
};

#endif