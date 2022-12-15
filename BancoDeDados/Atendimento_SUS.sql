create database db_tempo_de_espera_em_hospitais;

use db_tempo_de_espera_em_hospitais;

create table tb_profissional(
	id bigint auto_increment,
    nome_profissional varchar(255),
    profissao varchar(255),
    
    primary key (id)	
);

create table tb_hospital(
	id bigint auto_increment,
    nome_hospital varchar(255),
    localidade varchar(255),
    
    primary key (id)
);

create table tb_paciente(
	id bigint auto_increment,
	nome_paciente varchar(255),
    idade int,
	tempo_de_espera time,
    profissional_id bigint,
    hospital_id bigint,
    
	primary key (id),
    
    foreign key (profissional_id) references tb_profissional(id),
    foreign key (hospital_id) references tb_hospital(id)
);

insert into tb_profissional(nome_profissional,profissao)values("Marcelo","Clínico Geral");
insert into tb_profissional(nome_profissional,profissao)values("Pedro","Demartologista");
insert into tb_profissional(nome_profissional,profissao)values("Jose","Cirurgião");
insert into tb_profissional(nome_profissional,profissao)values("Diana","Enfermeira");
insert into tb_profissional(nome_profissional,profissao)values("Deyse","Cardiologista");

insert into tb_hospital(nome_hospital,localidade)values("São Domingos","Virgem da Lapa-MG");
insert into tb_hospital(nome_hospital,localidade)values("São Vicente de Paulo","Araçuaí-MG");
insert into tb_hospital(nome_hospital,localidade)values("Bom Samatitano","Teófilo Otoni-MG");
insert into tb_hospital(nome_hospital,localidade)values("Paulistano","São Paulo-SP");
insert into tb_hospital(nome_hospital,localidade)values("Santa Rita","Medina-MG");

insert into tb_paciente(nome_paciente,idade,tempo_de_espera,profissional_id,hospital_id)values("Fabyola",18,"02:00:01",2,5);
insert into tb_paciente(nome_paciente,idade,tempo_de_espera,profissional_id,hospital_id)values("Marta",20,"01:00:23",5,3);
insert into tb_paciente(nome_paciente,idade,tempo_de_espera,profissional_id,hospital_id)values("Josiane",38,"01:30:12",1,2);
insert into tb_paciente(nome_paciente,idade,tempo_de_espera,profissional_id,hospital_id)values("Brad",28,"03:00:32",3,1);
insert into tb_paciente(nome_paciente,idade,tempo_de_espera,profissional_id,hospital_id)values("Dylan",24,"02:20:15",4,4);

select * from tb_paciente;
select * from tb_profissional;
select * from tb_hospital;